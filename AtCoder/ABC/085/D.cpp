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
  pi tmp[100005];
  vector<int> data;
  int n,h;
  cin>>n>>h;
  int maxi=-1;
  rep(i,n){
    int a,b;
    cin>>a>>b;
    tmp[i]=mp(a,b);
    maxi=max(maxi,a);
  }
  rep(i,n){
    if(maxi<tmp[i].second)data.pb(tmp[i].second);
  }
  sort(all(data));reverse(all(data));
  int cnt=0;
  rep(i,data.size()){
    if(h<=0)break;
    cnt++;h-=data[i];
  }
  if(h>0){
    cnt+=h/maxi+(h%maxi!=0?1:0);
  }
  cout<<cnt<<endl;
  return 0;
}
