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
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
    int L=n;
    vector<int>l;
    FOR(i,0,n){
        l.push_back(i+1);
    }
    int t[n+1][L+1];
    FOR(i,0,L+1){
        t[0][i]=0;
    }
    FOR(i,0,n+1){
        t[i][0]=0;
    }
    FOR(i,1,n+1){
        FOR(j,1,L+1){
            if(l[i-1]<=j){
                t[i][j] = max(t[i-1][j],t[i][j-l[i-1]] + price[i-1]);
            }
            else t[i][j] = t[i-1][j];
        }
    }
    return t[n][L];
}
