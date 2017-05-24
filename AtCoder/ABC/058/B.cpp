#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;
 
int main(){
  string a,b;
  cin>>a>>b;
  int aa=0,bb=0;
  for(int i=0;i<a.size()+b.size();i++){
    if(i%2==0){
      cout<<a[aa];
      aa++;
    }else{
      cout<<b[bb];
      bb++;
    }
  }
  cout<<endl;
  return 0;
}
