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
#include <ctime>
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
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
/*---------------------------------------------------*/
 
int main(){
  int n;
  int a[100005];
  int tmp;
  cin>>n;
  rep(i,n)cin>>a[i];
  
  for(int i=1;i<=n;i++){
    if(i==1)tmp=a[0];
    else tmp=a[tmp-1];
    if(tmp==2){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}
