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
#define INF 100000000
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
  while(cin>>n){
    if(n==0)break;
    map<int,int> m;
    vector<pair<pi,pi > >data;
    pair<pi,pi> d;
    rep(i,n){
      cin>>d.second.first>>d.second.second>>d.first.first>>d.first.second;
      d.second.first=(-d.second.first);
      d.first.second=(-d.first.second);
      data.pb(d);
    }
    sort(all(data));reverse(all(data));
    int win=0;
    rep(i,n){
      if(win<10&&m[data[i].second.second]<3){
    cout<<-data[i].second.first<<endl;
    m[data[i].second.second]++;
    win++;
      }else if(win<20&&m[data[i].second.second]<2){
    cout<<-data[i].second.first<<endl;
    m[data[i].second.second]++;
    win++;
      }else if(win<26&&m[data[i].second.second]==0){
    cout<<-data[i].second.first<<endl;
    m[data[i].second.second]++;
    win++;
      }
    }
  }
  return 0;
}
