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

ll C[905][905];
void comb_table(int n){
    rep(i, n+1){
        rep(j, i + 1){
        if(j == 0 || j == i) C[i][j] = 1;
        else C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
        }
    }
}

int main(){
    int r, c, x, y, d, l;
    cin >> r >> c >> x >> y >> d >> l;
    ll max_arre = (ll)0;
    comb_table(904);
    for(int i = 0; i < (1 << 4); i++){
        int tmp_x = x, tmp_y = y;
        if((i >> 0) & 1) tmp_y--;
        if((i >> 1) & 1) tmp_y--;
        if((i >> 2) & 1) tmp_x--;
        if((i >> 3) & 1) tmp_x--;
        if(tmp_x < 0 || tmp_y < 0) continue;
        
        ll sum = C[tmp_x * tmp_y][d + l] * C[d + l][d] % mod;
        
        if(__builtin_popcount(i) % 2 == 0) max_arre = (max_arre + sum) % mod;
        else max_arre = (max_arre - sum + mod) % mod;
    }
    max_arre = (max_arre * (r - x + 1)) % mod;
    max_arre = (max_arre * (c - y + 1)) % mod;
    cout << max_arre << endl;
    return 0;
}

