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
    long long n,m;
    long long a[51],b[51],c[51],d[51];
    cin>>n>>m;
    rep(i,0,n)cin>>a[i]>>b[i];
    rep(i,0,m)cin>>c[i]>>d[i];
    
    for(int i=0;i<n;i++){
        long long z=INF,point;
        for(int j=0;j<m;j++){
            long long now=abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(z>now){
                z=now;
                point=j+1;
            }
        }
        cout<<point<<endl;
    }
    
    return 0;
}
