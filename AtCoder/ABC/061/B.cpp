#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cctype>
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,m;
  int x[55]={0};
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    x[a]++;x[b]++;
  }
  for(int i=1;i<=n;i++){
    cout<<x[i]<<endl;
  }
  return 0;
}
