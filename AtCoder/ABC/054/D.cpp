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

int n, Ma, Mb;
int a[45], b[45], c[45];
int dp[45][405][405];

void DP(){
    dp[0][0][0] = 0;
    rep(i, n){
        rep(j, 405){
            rep(k, 405){
                if(dp[i][j][k] == INF) continue;
                dp[i + 1][j][k] = min(dp[i][j][k], dp[i + 1][j][k]);
                dp[i + 1][j + a[i]][k + b[i]] = min(dp[i][j][k] + c[i], dp[i + 1][j + a[i]][k + b[i]]);
            }
        }
    }
}

int main(){
    cin >> n >> Ma >> Mb;
    rep(i, n){
        cin >> a[i] >> b[i] >> c[i];
    }
    rep(i, 45)rep(j, 405)rep(k, 405) dp[i][j][k] = INF;
    DP();

    int ans = INF;
    REP(i, 1, 405){
        REP(j, 1, 405){
            if(i * Mb == j * Ma)ans = min(ans, dp[n][i][j]);
        }
    }
    if(ans == INF)cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}

