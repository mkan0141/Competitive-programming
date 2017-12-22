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
 
int main(){
  int a,b;
  int coin[]={1000,500,100};
  int ans[4];
  while(cin>>a>>b){
    if(a==0&&b==0)break;
    int ret=abs(a-b);
    ans[0]=ans[1]=ans[2]=0;
    for(int i=0;i<3;i++){
      for(;;){
    if(coin[i]<=ret){
      ret-=coin[i];
      ans[i]++;
    }else{
      break;
    }
      }
    }
    cout<<ans[2]<<" "<<ans[1]<<" "<<ans[0]<<endl;
  }
  return 0;
}
