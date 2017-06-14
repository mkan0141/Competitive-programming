#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

/*---------------------------------------------------*/

int n,m[4]={10,50,100,500};
int num[4];
bool en=false;
int main(){
  int sum=0;
  while(cin>>n){
    sum=0;
    if(n==0)break;
    
    if(!en)en=true;
    else cout<<endl;
    
    rep(i,4){
      cin>>num[i];
      sum+=num[i]*m[i];
    }
    sum-=n;
    rrep(i,3){
      num[i]-=min(num[i],sum/m[i]);
      sum%=m[i];
    }
    rep(i,4)if(num[i]!=0)cout<<m[i]<<" "<<num[i]<<endl;
  }
  
  return 0;
}
