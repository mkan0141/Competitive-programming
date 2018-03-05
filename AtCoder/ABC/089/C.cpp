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
#include <bitset>
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
#define rrep(i,n) for(int i=n-1;i>=0;i--)
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
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/

int main(){
  ll a[5]={0},n;
  string s;
  cin>>n;
  rep(i,n){
    cin>>s;
    if(s[0]=='M')a[0]++;
    if(s[0]=='A')a[1]++;
    if(s[0]=='R')a[2]++;
    if(s[0]=='C')a[3]++;
    if(s[0]=='H')a[4]++;
  }
  ll ans=0;
  REP(i,0,5){
    REP(j,i,5){
      REP(k,j,5){
	if(i==j||j==k||k==i)continue;
	ans+=a[i]*a[j]*a[k];
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}

