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
  long long ans=0,size;
  string s;
  cin>>s;
  size=s.size();
  ans+=(size-1)*2;
  for(int i=1;i<s.size()-1;i++){
    if(s[i]=='U'){
      ans+=size-(i+1);
      ans+=i*2;
    }
    if(s[i]=='D'){
      ans+=i;
      ans+=(size-(i+1))*2;
    }
  }
  cout<<ans<<endl;
  
  return 0;
}
