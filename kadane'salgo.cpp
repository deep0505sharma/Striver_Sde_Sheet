
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
const ll mod = 1e9+7;
const ll MAX_SIZE = 1000005;
const ll MAXN = 100000;
const ld EPS = 1e-9;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

bool isInteger(double N)
{
    int X = N;

    double temp2 = N - X;
    if (temp2 > 0) {
        return false;
    }
    return true;
}
int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}
string largestNumber(const vector<int> &A) {
    vector<string> b;
    for(int i=0;i<A.size();i++){
        b.push_back(to_string(A[i]));
    }
    sort(b.begin(),b.end(),myCompare);
    string ans="";
    for(int i=0;i<b.size();i++){
     ans+=b[i];
    }
    int i=0;
    while(ans[i]=='0'){
        i++;
    }
    if(i==ans.length())
     ans="0";
    return ans;
}
//-------School method program to check if a number is prime or not----//
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
//--------modular exponentiation function--------//
ll modularExponentiation(long long int x, long long int n, long long  int m) {
    ll res = 1;
    x = x % m;
    if (x == 0) return 0;
    while (n > 0)
    {

        if (n & 1)
            res = (res*x) % m;

        n= n>>1;
        x = (x*x) % m;
    }
    return res;
}
//-------Euler Totient Function---------//
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
//--------Binary EXponentiation Algo to calcualte a^b in O(log(b))--------//
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
//-----Sieve of Eratosthenes-----//
void SieveOfEratosthenes(ll n)
{
	bool prime[n+1];
    memset(prime, true, sizeof(prime));
    prime[1]=false;

    for (ll p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
//the number of set bits in binary representation of positive integer n //
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;

    else

        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
//-----perfect squares checking function-----//
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {

        long long sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
// -------------------Important Notes------------------- //

// ***For Interactive Problems remember to remove multi test cases condition*** //
// (int)log2(x) + 1  -> to calculate number of bits of a number
// s.erase(0, min(s.find_first_not_of('0'), s.size()-1));   //for removing leading zero's
// Remember about unique function usage
// yi=(t|xi)?xi
// (int index = str.find(substr, pos)) != string::npos    // for checking substring 'substr' in string 'str'
// ((x >> j) & 1) ===> to check if the j-th bit is on/off
// x |= (1 << i) ===> to set the i-th bit on
//-------END------//
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    ll maxsum=0;
    ll cursum=0;
    FOR(i,0,n){
        cursum+=arr[i];
        if(cursum>maxsum)maxsum=cursum;
        if(cursum<0)cursum=0;
    }
    return maxsum;
}
