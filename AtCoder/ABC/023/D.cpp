#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
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

#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007


#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair

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
  int n;
  cin>>n;
  vector<ll> H(n),S(n),time(n);
  rep(i,n){
    cin>>H[i]>>S[i];
  }
  ll left=-1,right=10000000000000000;
  while(right-left>1){
    ll mid=(left+right)/2;
    bool ok=true;
    rep(i,n){
      if(mid-H[i]<0){
	ok=false;
	break;
      }
      time[i]=(mid-H[i])/S[i];
    }
    sort(all(time));
    rep(i,n){
      if(i>time[i])ok=false;
    }
    if(ok)right=mid;
    else left=mid;
  }
  cout<<right<<endl;
  return 0;
}
