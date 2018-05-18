#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <unordered_map>
#include <list>
#include <numeric>
#include <utility>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <cassert>

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

/*
cin.tie(0);
ios::sync_with_stdio(false);
*/

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
  string s;
  int k;
  set<string> ans;
  cin>>s>>k;
  for(int i=0;i<26;i++){
    string x="";
    bool ok=false;
    for(int j=0;j<s.size();j++){
      if(char('a'+i)==s[j]||ok){
	x="";
	for(int l=j;l<min(j+5,(int)s.size());l++){
	  x+=s[l];
	  ans.insert(x);
	}
      }
    }
    if(ans.size()>=k)break;
  }
  int cnt=1;
  for(auto x: ans){
    if(cnt==k)cout<<x<<endl;
    cnt++;
  }
  return 0;
}


