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

string a;
int L;
map<string,int>data;

string add_zero(string s){
  while(s.size()!=L){
    s='0'+s;
  }
  return s;
}


int str_to_int(string s){
  int n=0,ten=1;
  char c;
  ten=pow(ten,L);
  rep(i,s.size()-1){
    c=s[i];
    n+=int(c-'0')*ten;
    ten/=10;
  }
  return n;
}

string change_str(string s){
  int bef=str_to_int(s);
  sort(all(s));
  int aft=str_to_int(s);
  cout<<bef<<" "<<aft<<endl;
  bef-=aft;
  string str;
  str=to_string(bef);
  str=add_zero(str);
  cout<<"str: "<<str<<endl;
  return str;
}

void solve(){
  data.clear();
  int cnt=1;
  string str=change_str(a);
  data.insert(make_pair(a,cnt));
  str=change_str(str);
  while(1){
    if(data.find(str)!=data.end())break;
    data.insert(make_pair(str,cnt));
    str=change_str(str);
    cnt++;
  }
  cout<<data[str]<<" "<<str_to_int(str)<<" "<<cnt-data[str]<<endl;
}


int main(){
  while(cin>>a>>L){
    if(a=="0"&&L==0)break;
    solve();
  }
  return 0;
}
