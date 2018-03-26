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

#define INF 10000000100
#define LINF 9000000000000000000
#define mod 1000000007

#define rep(i,n) for(int i=0;i<long long(n);i++)
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

#define int long long

const int MAX_V = 600010;

struct edge{int to,cost;};
typedef pair<int,int> P;

int V;
vector<edge>G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+V,LINF);
  d[s]=0;
  que.push(P(0,s));

  while(!que.empty()){
    P p=que.top();que.pop();
    int v=p.second;
    if(d[v]<p.first)continue;
    for(int i=0;i<(int)G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]>d[v]+e.cost){
	d[e.to]=d[v]+e.cost;
	que.push(P(d[e.to],e.to));
      }
    }
  }
}

signed main(){
  int n,m,s,t;
  int a,b,c,D;
  cin>>n>>m>>s>>t;
  s--;t--;
  V=n;
  for(int i=0;i<m;i++){
    cin>>a>>b>>c>>D;
    a--;b--;c--;
    edge e = {b,D};
    G[a].pb(edge(e));
    
     e = {c,D};
    G[a].pb(edge(e));
    
     e = {c,D};
    G[b].pb(edge(e));
   
    e = {a,D};
    G[b].pb(edge(e));
    
    e = {a,D};
    G[c].pb(edge(e));
    
     e = {b,D};
    G[c].pb(edge(e));
    
  }
  dijkstra(s);
  cout<<d[t]<<endl;
  return 0;
}


