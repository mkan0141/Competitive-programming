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
    int a,b,w;
    cin>>w>>a>>b;
    if(a+w<b)cout<<b-a-w<<endl;
    else if(b+w<a)cout<<a-b-w<<endl;
    else cout<<0<<endl;
    return 0;
}
