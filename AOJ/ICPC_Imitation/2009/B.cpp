#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

/*---------------------------------------------------*/

int prime[150000];
bool is_prime[150000];
vector<ll> v;

void sieve(){
  int p=0;
  rep(i,150000)is_prime[i]=true;
  is_prime[0]=is_prime[1]=false;
  REP(i,2,150000){
    if(is_prime[i]){
      prime[p++]=i;
      for(int j=2*i;j<150000;j+=i)is_prime[j]=false;
    }
  }
  //rep(i,50)cout<<"DEBUG "<<prime[i]<<endl;
}

void solve(int n,int p){
  ll data[11000];
  int x=0;
  while(prime[x]<=n){
    //cout<<x<<" "<<prime[x]<<endl;
    x++;
  }
  int cnt=0;
  REP(i,x,x+p){
    REP(j,i,x+p){
      data[cnt]=(prime[i]+prime[j]);
      cnt++;
    }
  }
  sort(data,data+cnt);
  //rep(i,p)cout<<i+1<<" "<<v[i]<<endl;
  cout<<data[p-1]<<endl;
}

int main(){
  int n,p;
  sieve();
  while(cin>>n>>p){
    if(n==-1&&p==-1)break;
    solve(n,p);
  }
  return 0;
}
