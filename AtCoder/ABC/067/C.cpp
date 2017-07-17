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
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
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
  ll sum=0;
  ll n;
  int a[200005];
  cin>>n;
  rep(i,n){cin>>a[i];sum+=a[i];}
  ll x=0;
  ll ans=100000000000000000;
  rep(i,n-1){
    x+=a[i];sum-=a[i];
    ans=min(ans,abs(x-sum));
  }
  cout<<ans<<endl;
  return 0;
}
