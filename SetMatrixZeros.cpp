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
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n,m;
    n = matrix.size();
    m = matrix[0].size();
    vector< pair<ll,ll> >v;
    FOR(i,0,n){
        FOR(j,0,m){
            if(matrix[i][j] == 0) v.pb(mp(i,j));
        }
    }
    FOR(i,0,v.size()){
        FOR(j,0,m){
        matrix[v[i].fir][j] =0;
        }
        FOR(k,0,n){
            matrix[k][v[i].se] = 0;
        }
    }
}
