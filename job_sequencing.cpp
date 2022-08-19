// Program to find the maximum profit job sequence from a
// given array of jobs with deadlines and profits
#include <algorithm>
#include <iostream>
using namespace std;

// A structure to represent a job
struct Job {
	char id; // Job Id
	int dead; // Deadline of job
	int profit; // Profit if job is over before or on
				// deadline
};

// This function is used for sorting all jobs according to
// profit
bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

// Returns minimum number of platforms required
vector<int>printJobScheduling(Job arr[], int n)
{
	// Sort all jobs according to decreasing order of profit
	sort(arr, arr + n, comparison);

	bool slot[n]; // To keep track of free time slots

	// Initialize all slots to be free
	for (int i = 0; i < n; i++)
		slot[i] = false;

	// Iterate through all given jobs
	int ct=0,sum=0;
	for (int i = 0; i < n; i++) {
		
		for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
		
			if (slot[j] == false) {
			    ct++;
			    sum+=arr[i].profit;
				slot[j] = true; 
				break;
			}
		}
	}
	vector<int>ans(2);
	ans[0]=ct;
	ans[1]=sum;
	return ans;
}
	




