#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#define rep(i,a,b) for(int (i)=(a);i<(b);i++)
#define INF 1000000000
#define MAX_N 100005
using namespace std;
 
int main(){
    int x;
    cin>>x;
    int cnt=0;
    while(1){
        cnt++;
        //cout<<x<<endl;
        x-=cnt;
        if(x<=0)break;
        
    }
    cout<<cnt<<endl;
    return 0;
}
