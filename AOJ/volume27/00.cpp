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

int max_k=-INF;

string make_id(string s){
  string ret="";
  ret+=s[0];
  rep(i,s.size()-1){
    if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o')ret+=s[i+1];
  }
  max_k=max(max_k,(int)ret.size());
  return ret;
}

int calc_k(int n,vector<string>v){
  int ret=1;
  while(ret!=max_k+1){
    set<string>se;
    rep(i,n){
      //cout<<ret<<": "<<v[i].substr(0,ret)<<endl;
      se.insert(v[i].substr(0,ret));
    }
    if(se.size()==n)return ret;
    ret++;
  }
  return -1;
}

int main(){
  int n;
  while(cin>>n,n){
    max_k=-INF;
    string s;
    vector<string> v;
    rep(i,n){
      cin>>s;
      v.pb(make_id(s));
    }
    cout<<calc_k(n,v)<<endl;
  }
  return 0;
}

