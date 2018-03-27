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

#define INF 10000000100
#define LINF 9000000000000000000
#define mod 1000000007

#define rep(i,n) for(int i=0;i<long long(n);i++)
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
  ll bit=1,n,ans=1;
  cin>>n;
  if(n==1){
    cout<<1<<endl;
    return 0;
  }
  
  while(1){
    bit=(bit<<1)+1;
    //cout<<"debug: "<<bit<<endl;
    if(bit<=n)ans++;
    else break;
  }
  cout<<ans<<endl;
  return 0;
}


