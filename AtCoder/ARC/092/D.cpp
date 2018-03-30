#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
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
bool debug=false;

/*---------------------------------------------------*/

int main(){
  int n,ans=0;
  cin>>n;
  vi a(n),b(n);
  rep(i,n)cin>>a[i];
  rep(i,n)cin>>b[i];
  for(int i=0;i<=28;i++){
    int bit=(1<<(i+1));
    vi list;
    rep(i,n){
      list.pb(b[i]%bit);
    }
    sort(all(list));
    int cnt=0;
    rep(j,n){
      cnt+=lower_bound(all(list),bit-a[j]%bit)-lower_bound(all(list),(bit>>1)-a[j]%bit);
      cnt+=list.end()-lower_bound(all(list),(3<<i)-a[j]%bit);
    }
    if(cnt%2)ans+=(1<<i);
  }
  cout<<ans<<endl;
  return 0;
}

