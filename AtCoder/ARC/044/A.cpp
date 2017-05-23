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

bool Prime(int n){
  //素数判定
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0)return false;
  }
  return true;
}

int sum(int n){
  int sum=0;
  while(n){
    sum+=n%10;
    n/=10;
  }
  return sum;
}

int main(){
  int n;
  cin>>n;
  if(n==1)cout<<"Not Prime"<<endl;
  else if(Prime(n)){
    cout<<"Prime"<<endl;
  }else if(n%10!=5&&n%2!=0&&sum(n)%3!=0){
     cout<<"Prime"<<endl;
  }else cout<<"Not Prime"<<endl;
  return 0;
}
