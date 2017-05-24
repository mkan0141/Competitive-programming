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
  int a,b,sum;
  cin>>a>>b;
  sum=a+b;
  if(sum>=24)sum-=24;
  cout<<sum<<endl;
  return 0;
}
