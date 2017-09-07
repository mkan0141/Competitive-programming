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
#define INF 2000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
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
  string s;
  cin>>s;
  while(s.size()){
    if(s.size()==1)break;
    s.erase(s.begin()+s.size()-1);
    //cout<<s<<endl;
    if(s.size()%2==1)continue;
    bool ok=true;
    rep(i,s.size()/2){
      if(s[i]!=s[s.size()/2+i])ok=false;
    }
    if(ok){
      cout<<s.size()<<endl;
      break;
    }
  }
  return 0;
}
