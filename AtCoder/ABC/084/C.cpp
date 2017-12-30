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

int main(){
  int n;
  int c[505],s[505],f[505];
  cin>>n;
  rep(i,n-1)cin>>c[i]>>s[i]>>f[i];
  rep(i,n-1){
    int time=0;
    REP(j,i,n-1){
      REP(k,0,INF){
	if(time<=s[j]+k*f[j]){
	  time=c[j]+s[j]+k*f[j];
	  break;
	}
      }
    }
    cout<<time<<endl;
  }
  cout<<0<<endl;
  return 0;
}
