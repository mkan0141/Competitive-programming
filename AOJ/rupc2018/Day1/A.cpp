#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int a[1005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&abs(a[i]-a[j])%(n-1)==0){
                cout<<a[i]<<" "<<a[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
