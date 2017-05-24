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
  if(a.size()>b.size())cout<<"GREATER"<<endl;
  else if(a.size()<b.size())cout<<"LESS"<<endl;
  else if(a.size()==b.size()){
    for(int i=0;i<a.size();i++){
      
      if(a[i]>b[i]){
	cout<<"GREATER"<<endl;
	return 0;
      }else if(a[i]<b[i]){
	cout<<"LESS"<<endl;
	return 0;
      }
    }
    cout<<"EQUAL"<<endl;
    
  } else cout<<"EQUAL"<<endl;
  return 0;
}
