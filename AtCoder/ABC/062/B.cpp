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
  int h,w;
  string s[100];
  cin>>h>>w;
  rep(i,h)cin>>s[i];
  for(int i=0;i<=h+1;i++){
    if(i==0||i==h+1){
      rep(j,w+2)cout<<'#';
      cout<<endl;
    } else{
      cout<<'#'<<s[i-1]<<'#'<<endl;
    }
  }
  return 0;
}
