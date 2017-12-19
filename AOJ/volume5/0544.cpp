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
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
  
#define rep(i,n) for(int i=0;i<int(n);i++)
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
  int m,n;
  while(cin>>n>>m){
    if(n==0&&m==0)break;
    int now=0,turn=0;
    vi masu(1005,INF),sai(1005);
    rep(i,n)cin>>masu[i];
    rep(i,m)cin>>sai[i];
 
    rep(i,m){
      if(INF<=now||masu[now]==INF)break;
      now+=sai[i];
      now=max(now,0);
      now=now+masu[now];
      now=max(now,0);
      turn++;
    }
    cout<<turn<<endl;
  }
  return 0;
}
