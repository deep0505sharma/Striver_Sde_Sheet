
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
#define dy cout<<"YES\n";
#define dm cout<<"-1\n";
#define dn cout<<"NO\n";
#define ld long double
#define setbit __builtin_popcountll
#define vv vector<ll>
#define pii pair<ll,ll>
#define show(arr) { for (auto x: arr) cout << x << " "; cout << endl; }
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define grtsrt(v) sort(v.begin(),v.end(),greater<int>())
#define FOR(i, a, n) for(int i = a; i<n;i++)
#define inp(arr, n)  for(ll i = 0; i < n; i++) cin >> arr[i]
#define out(a, n)  for(ll i = 0; i < n; i++) cout << a[i] << " "
#define rep(i, a, n) for(ll i =  a; i < n; i++)
#define printArr(arr, n) FOR(abcd,0,  n){cout<<arr[abcd]<<" ";}cout<<endl;
#define fir first
#define se second
#define pb push_back
#define mp make_pair
#include<tuple> 
#define gcd(m,n) __gcd( m,  n)
#define rev(v)  reverse(v.begin(),v.end())
const ll mod = 1e9+7;
bool sortbysec(const tuple<int, int, int>& a, 
               const tuple<int, int, int>& b)
{
    return (get<1>(a) < get<1>(b));
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();
    vector<tuple<int,int,int>>v;
    for(int i=0;i<n;i++){v.push_back(make_tuple(start[i],end[i],i+1));
                        }
    sort(v.begin(),v.end(),sortbysec);
    int mini=get<1>(v[0]);
    vector<int>ans;
    ans.push_back(get<2>(v[0]));
    for(int i=1;i<n;i++){
        if(get<0>(v[i])>mini){
            ans.push_back(get<2>(v[i]));
            mini=get<1>(v[i]);
        }
    }            
    return ans;
}

