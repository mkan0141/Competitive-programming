#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int main(){
  long long mini=INF;
  long long w,h;
  cin>>h>>w;
  if(h%3==0||w%3==0){
    cout<<0<<endl;
    return 0;
  }
  long long a,b,c;
  for(int i=1;i<=w;i++){
    if(h%2==1){
      a=i*h;
      b=(w-i)*h;
      c=(w-1)*(h+h%2);
    }else{
      a=i*h;
      b=(w-i)*int(h/2);
      c=(w-i)*int(h/2);
    }
    
    mini=min(mini,max(a,max(b,c))-min(a,min(b,c)));

    if(h%2==0){
      a=i*h;
      b=(w-i)*(int(h/2)+1);
      c=(w-i)*(int(h/2)-1);
    }
    
    //cout<<a<<" "<<b<<" "<<c<<endl;
    mini=min(mini,max(a,max(b,c))-min(a,min(b,c)));
  }

  
  //cout<<"hh"<<endl;
  for(int i=1;i<h;i++){
    if(w%2==1){
      a=i*w;
      b=(h-i)*int(w/2);
      c=(h-i)*(int(w/2)+1);
    }else{
      a=i*w;
      b=(h-i)*(int(w/2)-1);
      c=(h-i)*(int(w/2)+1);
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    mini=min(mini,max(a,max(b,c))-min(a,min(b,c)));
    if(w%2==0){
      a=i*w;
      b=(h-i)*(int(w/2));
      c=(h-i)*(int(w/2));
    }
    mini=min(mini,max(a,max(b,c))-min(a,min(b,c)));
  }
  if(w>3){
    long long s;
    s=(int(w/3)+1)*h-int(w/3)*h;
    mini=min(mini,s);
  }
  
  if(h>3){
    long long s;
    s=(int(h/3)+1)*w-int(h/3)*w;
    mini=min(mini,s);
  }
  cout<<mini<<endl;
  
  return 0;
}
