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

ll C[55][55];
void comb_table(int n){
rep(i,n+1){
        rep(j,n+1){
            if(j==0||j==i)C[i][j]=(ll)1;
            else C[i][j]=C[i-1][j-1]+C[i-1][j];
            // if(j < 10)cout << C[i][j] << " ";
        }
        // cout << endl;
    }
}

int main(){
    comb_table(53);
    int n, a, b;
    ll v[55];
    cin >> n >> a >> b;
    rep(i ,n){
        cin >> v[i];
    }
    sort(v, v + n, greater<ll>());
    ll sum = 0, cnt = 0;
    rep(i, a) sum += v[i];
    printf("%.8lf\n",(double)sum / a);
    REP(i, a, b) if(v[0] == v[i]) cnt++;
    if(cnt == 0){
        int left = 1, right = 0;
        for(int i = a - 2; i >= 0; i--) if(v[i] == v[a - 1])left++;
        for(int i = a; i < n; i++) if(v[i] == v[a - 1])right++;
        // cout << "left: " << left << "    right: " << right << endl;
        cout << C[left + right][left] << endl;
    }else{
        ll ans = 0, max_cnt = 0;
        rep(i, n) if(v[0] == v[i]) max_cnt++;
        // cout << b << " " << max_cnt << endl;
        REP(i, a, min(max_cnt, (ll)b) + 1){ 
            ans += C[max_cnt][i];
            // cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}

