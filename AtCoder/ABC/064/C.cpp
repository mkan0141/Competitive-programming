#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
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
  int n,m;
  ll ans=1;
  cin>>n>>m;
  if(abs(n-m)>1){
    cout<<0<<endl;
    return 0;
  }
 
  for(int i=n;i>=1;i--)ans=MOD(ans*i);
  for(int i=m;i>=1;i--)ans=MOD(ans*i);
 
  if(n==m)cout<<MOD(ans*2)<<endl;
  else cout<<ans<<endl;
  return 0;
}
