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

class Union_Find{
private:
    vector<int> par, rank;

    int find(int x){
        if(par[x] == x){
            return x;
        }else{
            return par[x] = find(par[x]);
        }
    }
public:
    Union_Find(int Max_Node){
        par.resize(Max_Node);
        rank.resize(Max_Node);
    }

    void init(int n) {
        for(int i = 0; i < n; i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y)return ;

        if(rank[x] < rank[y]){
            par[x] = y;
        }else{
            par[y] = x;
            if(rank[x] == rank[y])rank[x]++;
        }
    }

    bool same(int x, int y){
        return (find(x) == find(y));
    }
};

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> in(n);
  rep(i,n)cin>>in[i];
  Union_Find uf(n+10);
  uf.init(n+1);
  rep(i,m){
    int a,b;
    cin>>a>>b;
    uf.unite(a,b);
    uf.unite(b,a);
  }
  ll ans=0;
  for(int i=0;i<n;i++){
    if(uf.same(in[i],i+1)){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}

