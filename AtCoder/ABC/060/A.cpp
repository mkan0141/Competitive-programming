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
  string a,b,c;
  cin>>a>>b>>c;
  if(a[a.size()-1]==b[0]&&b[b.size()-1]==c[0])cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
