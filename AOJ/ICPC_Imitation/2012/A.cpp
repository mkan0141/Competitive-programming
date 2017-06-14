#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
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

int solve(int n,vi v[],int k,int name[]){
  int find_name=-1,cnt;
  bool find=false;
  rep(i,n){
    cnt=0;
    rep(j,v[i].size()){
      rep(l,k){
	if(v[i][j]==name[l])cnt++;
      }
    }
    if(find&&cnt==k)return -1;
    if(cnt==k){
      find_name=i+1;
      find=true;
    }
  }
  return find_name;
}

int main(){
  int n,m,a,name[100];
  while(cin>>n){
    if(n==0)break;
    vector<int>v[n];
    rep(i,n){cin>>m;rep(j,m){cin>>a;v[i].pb(a);}}
    int k;
    cin>>k;
    rep(i,k)cin>>name[i];
    cout<<solve(n,v,k,name)<<endl;
  }
  return 0;
}
