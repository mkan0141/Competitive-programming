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
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int main(){
  int a[7]={1,3,5,7,8,10,12};
  int b[4]={4,6,9,11};
  int xx=0,yy=0;
  int x,y;
  cin>>x>>y;
  for(int i=0;i<7;i++){
    if(a[i]==x)xx=1;
    if(a[i]==y)yy=1;
  }
  for(int i=0;i<4;i++){
    if(b[i]==x)xx=2;
    if(b[i]==y)yy=2;
  }
  if(xx==yy)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
