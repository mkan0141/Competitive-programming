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
#define INF 1000000000
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
  int n,a,b;
  int x=0;
  cin>>n>>a>>b;
  while(1){
    if(x%2==0){
      if(a==1&&b==2){
	cout<<"Borys"<<endl;
	return 0;
      }
      if(a+1!=b)a++;
      else a--;
    }else{
      if(a==n-1&&b==n){
	cout<<"Alice"<<endl;
	return 0;
      }
      if(b-1!=a)b--;
      else b++;
    }
    x++;
  }
  return 0;
}
