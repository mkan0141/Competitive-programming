#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
 
/*---------------------------------------------------*/

string check(string s, char c){
    int cnt = 0;
    string ret = "";
    rep(i, s.size()){
        if(s[i] == c){
            cnt++;
            ret += s[i];
        }else{
            if(cnt == 0){
                ret = c + ret;
                cnt++;
            }
            ret += s[i];
            cnt--;
        }
    }
    return ret;
}

int main(){
    int n;
    string s, ans = "";
    cin >> n >> s;
    ans = check(s, '(');
    reverse(all(ans));
    ans = check(ans, ')');
    reverse(all(ans));
    cout << ans << endl;
    return 0;
}

