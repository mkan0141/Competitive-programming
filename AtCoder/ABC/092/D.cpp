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

char grid[100][100];

void init(){
  rep(i,100){
    rep(j,100){
      if(i>=50)grid[i][j]='.';
      else grid[i][j]='#';
    }
  }
}

int main(){
  init();
  int a,b;
  cin>>a>>b;
  a--;b--;
  for(int i=1;i<50;i+=2){
    for(int j=1;j<100;j+=2){
      if(!a)break;
      grid[i][j]='.';
      a--;
    }
    if(!a)break;
  }

  for(int i=51;i<100;i+=2){
    for(int j=1;j<100;j+=2){
      if(!b)break;
      grid[i][j]='#';
      b--;
    }
    if(!b)break;
  }
  cout<<100<<" "<<100<<endl;
  rep(i,100){
    rep(j,100){
      cout<<grid[i][j];
    }
    cout<<endl;
  }
  return 0;
}

