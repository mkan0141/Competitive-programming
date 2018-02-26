#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
 
/*---------------------------------------------------*/

int main(){
    ll n, K, x, y;
    vector<pair<ll, ll> > d;
    vector<ll> vx, vy;
    cin >> n >> K;
    rep(i, n){
        cin >> x >> y;
        d.pb(mp(x, y));
        vx.pb(x);
        vy.pb(y);
    }
    sort(all(vx));
    sort(all(vy));
    ll ans = LINF;
    rep(i, n){
        rep(j, n){
            rep(k, n){
                rep(l, n){
                    int cnt = 0;
                    rep(p, n){
                        if(vx[i] <= d[p].first && d[p].first <= vx[k] && vy[j] <= d[p].second && d[p].second <= vy[l]){
                            cnt++;
                        }
                    }
                    if(K <= cnt)ans = min(ans, abs(vx[i] - vx[k]) * abs(vy[j] - vy[l]));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

