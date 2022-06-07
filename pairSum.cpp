
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <utility>
#define ll long long int
#define ld long double
#define vv vector<ll>
#define pii pair<ll,ll>
#define show(arr) { for (auto x: arr) cout << x << " "; cout << endl; }
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define grtsrt(v) sort(v.begin(),v.end(),greater<int>())
# define FOR(i, a, n) for(int i = a; i<n;i++)
#define inp(arr, n)  for(ll i = 0; i < n; i++) cin >> arr[i]
#define out(a, n)  for(ll i = 0; i < n; i++) cout << a[i] << " "
#define rep(i, a, n) for(ll i =  a; i < n; i++)
# define printArr(arr, n) FOR(abcd,0,  n){cout<<arr[abcd]<<" ";}cout<<endl;
#define fir first
#define se second
#define pb push_back
#define mp make_pair
#define gcd(m,n) __gcd( m,  n)
#define rev(v)  reverse(v.begin(),v.end())
const ll mod = 1e9+7;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>v;
    vector<int>temp(2,0);
    int n = arr.size();
    sort(all(arr));
    int left=0,right=n-1;
    map<int,int>ct;
    FOR(i,0,n)ct[arr[i]]++;
    while(left<right){
        if(arr[left]+arr[right] == s) {
            temp[0]=arr[left];
            temp[1] = arr[right];
            ll prod = ct[arr[left]]*ct[arr[right]];
            if(arr[left]!=arr[right]) {
                FOR(i,0,prod) v.pb(temp);
            }
            else{
                ll q = (ct[arr[left]]*(ct[arr[left]]-1))/2;
                FOR(i,0,q)v.pb(temp);
                break;
            }
            left+=ct[arr[left]];
            right-=ct[arr[right]];
        }
        else if((arr[left]+arr[right]) < s){
            left++;
        }
        else right--;
    }
    return v;
}
