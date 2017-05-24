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
  int n;
  long long a[100005];
  long long cnt=0;
  cin>>n;
  
  for(int i=0;i<n;i++) cin>>a[i];
 
  //プラススタート
  cnt=0;
  long long sum=a[0];
  if(sum<=0){
    cnt+=abs(sum)+1;
    sum=1;
  }
  bool plus=true;
  
  for(int i=1;i<n;i++){
    sum+=a[i];
    if(debug)cout<<"sum:"<<sum<<endl;
    if(plus){
      if(sum>=0){
	cnt+=sum+1;
	sum=-1;
      }
      plus=false;
    }else{
      if(sum<=0){
	cnt+=abs(sum)+1;
	sum=1;
      }
      plus=true;
    }
  }
  if(sum==0)cnt+=1;
  long long tmp=cnt;
 
  
  //マイナススタート
  cnt=0;
  sum=a[0];
  
  if(sum>=0){
    cnt+=sum+1;
    sum=-1;
  }
  plus=false;
  
  for(int i=1;i<n;i++){
    sum+=a[i];
    if(debug)cout<<"sum:"<<sum<<endl;
    if(plus){
      if(sum>=0){
	cnt+=sum+1;
	sum=-1;
      }
      plus=false;
    }else{
      if(sum<=0){
	cnt+=abs(sum)+1;
	sum=1;
      }
      plus=true;
    }
  }
  if(sum==0)cnt+=1;
  
  if(tmp<cnt)cout<<tmp<<endl;
  else cout<<cnt<<endl;
 
  return 0;
}
