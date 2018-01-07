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
#include <utility>
#include <ctime>
#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define rsort(x) sort(all(x));reverse(all(x))
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
  int n,y;
  cin>>n>>y;
  rep(a,2001){
    rep(b,2001){
      if(n-a-b>=0&&10000*a+5000*b+(n-a-b)*1000==y){
	cout<<a<<" "<<b<<" "<<n-a-b<<endl;
	return 0;
      }
    }
  }
  cout<<-1<<" "<<-1<<" "<<-1<<endl;
  return 0;
}
