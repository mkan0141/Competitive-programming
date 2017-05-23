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
  int a,b,c;
  cin>>a>>b>>c;
  if(a<=c&&c<=b){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
