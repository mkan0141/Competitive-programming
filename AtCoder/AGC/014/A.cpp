#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
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
    long long ans;
    for(ans=0;ans<=15000000;ans++){
        if(a%2==1||b%2==1||c%2==1)break;
        int tmpa=a/2,tmpb=b/2,tmpc=c/2;
        a=tmpb+tmpc;
        b=tmpa+tmpc;
        c=tmpa+tmpb;
    }    
    if(ans>=15000000)cout<<-1<<endl;
    else cout<<ans<<endl;
   return 0;
}
