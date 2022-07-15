#include <queue>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    vector<int>v(2,0);
    priority_queue<int>maxh;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k)maxh.pop();
    }
    v[0]=maxh.top();
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<n;i++){
        minh.push(arr[i]);
        if(minh.size()>k)minh.pop();
    }
    v[1]=minh.top();
    return v;
}
