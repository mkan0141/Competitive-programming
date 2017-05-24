#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;
 
bool is_prime(const unsigned n){
    switch(n){
        case 0: 
        case 1: return false;
        case 2: 
        case 3: return true;
    } 
 
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;
    
 
    if(n%6 != 1 && n%6 != 5) return false;
    
    for(unsigned i=5;i*i<=n;i+=6){
        if(n%i     == 0) return false;
        if(n%(i+2) == 0) return false;
    }
 
    return true;
}
 
long long Count(int n){
    int cnt=0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}
 
int main(){
    long long n,nn;
    long long mini=INF;
    cin>>n;
    if(is_prime(n)){
      cout<<Count(n)<<endl;
      return 0;
    }
    nn=n;
    for(long long i=1;i<=n;i++){
      //cout<<i<<endl;
        if(nn%i==0){
            long long maxi=max(i,nn/i);
            mini=min(mini,Count(maxi));
        }
	 n=nn/i;
    }
    cout<<mini<<endl;
    return 0;
}
