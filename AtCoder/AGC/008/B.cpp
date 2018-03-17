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
#include <bitset>
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
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=true;

/*---------------------------------------------------*/

int main(){
    int n,k;
    ll a[100005]={0},r[100005]={0};
    cin>>n>>k;
    REP(i,1,n+1){
        cin>>a[i];
    }
    r[0]=max(ll(0),a[0]);
    rep(i,n+1)r[i]=max(ll(0),a[i]);
    REP(i,1,n+1){
        r[i]+=r[i-1];
        a[i]+=a[i-1];
    }
    ll ans=-LINF;
    REP(i,0,n-k+1){
        ll tmp=(r[i]-r[0])+(r[n]-r[k+i]);
        ans=max(ans,max(tmp,tmp+(a[k+i]-a[i])));
    }
    cout<<ans<<endl;
    return 0;
}

