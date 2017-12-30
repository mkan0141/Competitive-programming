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
#define INF 1000000000
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

bool is_prime(int n){
  if(n==0||n==1)return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}

int main(){
  int ans=0;
  int q,l,r;
  vi list;
  REP(i,1,100001){
    if(i%2==0)continue;
    if(is_prime(i)&&is_prime((i+1)/2))list.pb(i);
  }
  cin>>q;
  rep(i,q){
    ans=0;
    cin>>l>>r;
    rep(i,list.size()){
      if(l<=list[i]&&list[i]<=r){
	ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
