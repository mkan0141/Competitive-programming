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
#define ll long long
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
char c[3]={'a','b','c'};

void dfs(int n,string s){
  if(n==0){
    cout<<s<<endl;
  }else{
    rep(i,3){
      dfs(n-1,s+c[i]);
    }
  }
}

int main(){
  int n;
  cin>>n;
  dfs(n,"");
  return 0;
}
