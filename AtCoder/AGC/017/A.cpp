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
/*
ll nCr(ll n,ll c){
  int ret=1;
  for(int i=c+1;i<=n;i++){
    ret*=i;
  }
  return ret;
}
*/

ll nCr(int n,int c){
  
}

int main(){
  ll n,p;
  ll gu=0,ki=0;
  cout<<nCr(5,3)<<endl;
  cin>>n>>p;
  
  rep(i,n){
    
    int a;
    cin>>a;
    if(a%2==0)gu++;
    else ki++;
  }
  cout<<gu<<" "<<ki<<endl;
  if(n==1){
    if(p==0&&gu==1)cout<<1<<endl;
    else if(p==1&&ki==1)cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
  }
  
  if(p==0){
    ll ans=pow(2,gu);
    for(int i=2;i<=ki;i+=2){
      ans*=nCr(ki,i);
    }
    cout<<ans+1<<endl;
  }else{
    ll ans=1;
    for(int i=1;i<=ki;i+=2){
      cout<<ans<<endl;
      ans*=nCr(ki,i);
    }
    ans*=pow(2,gu);
    cout<<ans<<endl;
  }
  return 0;
}
