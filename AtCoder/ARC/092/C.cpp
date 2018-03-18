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

const int MAX_V = 210;
bool can[105][105];

struct edge{
  int to,cap,rev;
};


vector<edge> G[MAX_V];
int level[MAX_V];
int iter[MAX_V];

void add_edge(int from,int to,int cap){
  G[from].pb((edge){to,cap,G[to].size()});
  G[to].pb((edge){from,0,G[from].size()-1});
}

void bfs(int s){
  memset(level,-1,sizeof(level));
  queue<int>que;
  level[s]=0;
  que.push(s);
  while(que.size()){
    int v=que.front();que.pop();
    //cout<<"debug: "<<G[v].size()<<endl;
    for(int i=0;i<(int)G[v].size();i++){
      edge &e=G[v][i];
      if(e.cap>0&&level[e.to]<0){
	level[e.to]=level[v]+1;
	que.push(e.to);
      }
    }
  }
}

int dfs(int v,int t,int f){
  if(v==t)return f;
  for(int &i=iter[v];i<(int)G[v].size();i++){
    edge &e=G[v][i];
    if(e.cap>0&&level[v]<level[e.to]){
      int d=dfs(e.to,t,min(f,e.cap));
      if(d>0){
	e.cap-=d;
	G[e.to][e.rev].cap+=d;
	return d;
      }
    }
  }
  return 0;
}

int max_flow(int s,int t){
  int flow=0;
  for(;;){
    bfs(s);
    if(level[t]<0)return flow;
    // cout<<"in"<<endl;
    memset(iter,0,sizeof(iter));
    int f;
    while((f=dfs(s,t,INF))>0){
      flow+=f;
    }
  }
}

void solve(int n){
  int s=n+n,t=s+1;
  rep(i,n){
    add_edge(s,i,1);
  }
  rep(i,n){
    add_edge(n+i,t,1);
  }
  rep(i,n){
    rep(j,n){
      if(can[i][j]){
	add_edge(i,n+j,1);
      }
    }
  }
  cout<<max_flow(s,t)<<endl;
}

int main(){
  int n,x,y;
  pi a[105],b[105];
  cin>>n;
  rep(i,n){
    cin>>x>>y;
    a[i]=mp(x,y);
  }
  rep(i,n){
    cin>>x>>y;
    b[i]=mp(x,y);
  }
  rep(i,n){
    rep(j,n){
      if(a[i].first<b[j].first&&a[i].second<b[j].second){
	can[i][j]=true;
      }
    }
  }
  solve(n);
  return 0;
}

