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
  ll n,q;
  ll t,x,d;
  ll c[1005],apple[1005]={0};
  cin>>n;
  REP(i,1,n+1)cin>>c[i];
  cin>>q;
  rep(i,q){
    cin>>t>>x>>d;
    if(t==1){
      apple[x]+=d;
      if(c[x]<apple[x]){
	cout<<x<<endl;
	return 0;
      }
    }
    if(t==2){
      apple[x]-=d;
      if(apple[x]<0){
	cout<<x<<endl;
	return 0;
      }
    }
  }
  cout<<0<<endl;
  return 0;
}


