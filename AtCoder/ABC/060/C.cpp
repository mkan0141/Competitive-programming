#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 1000000000
using namespace std;
bool debug=false;
 
int main(){
  long long n,T;
  long long t[200005];
  long long sum=0;
  cin>>n>>T;
  rep(i,0,n)cin>>t[i];
  int s=t[0],e=t[0]+T;
  for(int i=1;i<n;i++){
    if(s<t[i]&&t[i]<e){
      e=t[i]+T;
    }else{
      sum+=e-s;
      e=t[i]+T;s=t[i];
      //cout<<"sum:"<<sum<<" "<<s<<" "<<e<<"  i="<<i<<endl;
    }
    
  }
  sum+=e-s;
  cout<<sum<<endl;
  return 0;
}
