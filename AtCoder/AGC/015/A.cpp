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
  long long n,a,b;
  cin>>n>>a>>b;
  if(b<a||(n==1&&a!=b)){
    cout<<0<<endl;
  }else if((n==1&&a==b)){
    cout<<1<<endl;
  }else{
    long long maxi=b*(n-1)+a;
    long long mini=a*(n-1)+b;
    cout<<maxi-mini+1<<endl;
  }
  
  return 0;
}
