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
  int n,s[105],sum=0;
  cin>>n;
  rep(i,n)cin>>s[i];
  sort(s,s+n);
  rep(i,n)sum+=s[i];
  if(sum%10!=0){
    cout<<sum<<endl;
  }else{
    bool ok=true;
    rep(i,n){
      if((sum-s[i])%10!=0){
	sum-=s[i];
	ok=false;
	break;
      }
    }
    if(ok){
      rep(i,n){
	sum-=s[i];
	if(sum%10!=0)break;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
