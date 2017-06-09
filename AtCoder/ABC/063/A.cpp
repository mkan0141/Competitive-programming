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
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
 
int main(){
  int a,b;
  cin>>a>>b;
  if(a+b>=10)cout<<"error"<<endl;
  else cout<<a+b<<endl;
  return 0;
}
