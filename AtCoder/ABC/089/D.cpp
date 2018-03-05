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
bool debug=false;

/*---------------------------------------------------*/

int main(){
  int h,w,d,q,l,r;
  int a[305][305];
  int cost[90005]={0};
  map<int,pi> data;
  cin>>h>>w>>d;
  rep(i,h)rep(j,w){cin>>a[i][j];data[a[i][j]]=mp(i,j);}
  REP(i,1,d+1){
    int cnt=i+d;
    while(cnt<h*w+5){
      cost[cnt]=abs(data[cnt-d].first-data[cnt].first)+abs(data[cnt-d].second-data[cnt].second)+cost[cnt-d];
      cnt+=d;
    }
  }
  cin>>q;
  rep(i,q){
    cin>>l>>r;
    cout<<max(0,(cost[r]-cost[l]))<<endl;;
  }
  return 0;
}

