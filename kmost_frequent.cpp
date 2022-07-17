#include <unordered_map>
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
#define gcd(m,n) __gcd( m,  n)
#define rev(v)  reverse(v.begin(),v.end())
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
    for(auto itr:mp){
        minh.push({itr.second,itr.first});
        if(minh.size()>k)minh.pop();
    }
    vector<int>v(k,0);
    int i=0;
    while(minh.size()){
        v[i]=minh.top().second;
        i++;
        minh.pop();
    }
    sort(v.begin(),v.end());
    return v;
}
