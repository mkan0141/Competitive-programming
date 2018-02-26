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

int n, m, r;
int rr[8];
bool used[8];
int d[205][205];

void init(){
    rep(i, n + 1){
        rep(j, n + 1){
            d[i][j] = INF;
        }
    }
}

void wf(){
    rep(k, n + 1){
        rep(i, n + 1){
            rep(j, n + 1){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int dfs(bool used[], int cnt, int cost, int now){
    // cout << cnt << " " << cost << endl;
    int ret = INF;
    if(cnt == r) return cost;
    rep(i, r){
        if(used[i] == false){
            used[i] = true;
            ret = min(ret, dfs(used, cnt + 1, cost + d[now][rr[i]], rr[i]));
            used[i] = false;    
        }
    }
    return ret;
}

int main(){
    int a, b, c;
    cin >> n >> m >> r;
    init();
    rep(i, r)cin >> rr[i];
    rep(i ,m){
        cin >> a >> b >> c;
        d[a][b] = c;
        d[b][a] = c;
    }
    wf();
    int ans = INF;
    rep(i, r){
        used[i] = true;
        ans = min(ans, dfs(used, 1, 0, rr[i]));
        used[i] = false;
    }
    cout << ans << endl;
    return 0;
}

