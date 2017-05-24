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
  string s;
  for(int i=0;i<3;i++){
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s[0];
  }
  cout<<endl;
}
