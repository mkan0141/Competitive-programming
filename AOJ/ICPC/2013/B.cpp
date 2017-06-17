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

/*---------------------------------------------------*/

bool debug=false;

pair<pi,int> data[55];
int miss[55][15];
int M,T,P,R;

void init(){
  rep(i,55){
    data[i].first.first=0;
    data[i].first.second=0;
    data[i].second=i+1;
    rep(j,15){
      miss[i][j]=0;
    }
  }
}

void solve(){
  int m,t,p,j;
  rep(i,R){
    cin>>m>>t>>p>>j;
    if(j==0&&miss[t-1][p]!=-1){
      data[t-1].first.first++;
      data[t-1].first.second-=(m+miss[t-1][p]*20);
      miss[t-1][p]=-1;
    }else if(miss[t-1][p]!=-1){
      miss[t-1][p]++;
    }
  }
  sort(data,data+T);reverse(data,data+T);
  
  if(debug){cout<<"tema ";rep(i,T)cout<<data[i].second<<" ";cout<<endl;}
  if(debug){cout<<"solv ";rep(i,T)cout<<data[i].first.first<<" ";cout<<endl;}
  if(debug){cout<<"time ";rep(i,T)cout<<data[i].first.second<<" ";cout<<endl;}
  
  cout<<data[0].second;
  REP(i,1,T){
    if(data[i].first.first==data[i-1].first.first&&data[i].first.second==data[i-1].first.second){
      cout<<'='<<data[i].second;
    }else{
      cout<<','<<data[i].second;
    }
  }
  cout<<endl;
}

int main(){

  while(cin>>M>>T>>P>>R){
    if(M==0&&T==0&&P==0&&R==0)break;
    init();
    solve();
  }
  
  return 0;
}
