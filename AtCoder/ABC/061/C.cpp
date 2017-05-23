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
  long long n,k;
  long long x[100005]={0};
  cin>>n>>k;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    x[a]+=b;
  }
  long long sum=0;
  for(int i=1;i<100005;i++){
    sum+=x[i];
    if(k<=sum){
      cout<<i<<endl;
      break;
    }
  }
  return 0;
}
