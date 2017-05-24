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
    long long N,M;
    map<double,int>mp;
    cin>>N>>M;
 
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        mp[a+0.5]++;mp[b+0.5]--;
    }
    bool ok=true;
    for(int i=0;i<=N;i++){
        mp[i+0.5]+=mp[i-0.5];
        //cout<<mp[i+0.5]<<endl;
        if(mp[i+0.5]%2==1){
            ok=false;
            break;
        }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
