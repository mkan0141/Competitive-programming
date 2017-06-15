#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

/*---------------------------------------------------*/

void judge_sort(pair<pi,int>score[],int t){
  rep(j,t)rep(i,t-1){
    if((score[i].first.first < score[i+1].first.first)||
			(score[i].first.first == score[i+1].first.first && score[i].first.second > score[i+1].first.second)||
                        (score[i].first.first == score[i+1].first.first && score[i].first.second == score[i+1].first.second&&score[i].second > score[i+1].second)){
                               swap(score[i].first.first,score[i+1].first.first);
                               swap(score[i].first.second,score[i+1].first.second);
                               swap(score[i].second,score[i+1].second);
    }
  }
}

int main(){
  pair<pi,int>score[55];
  int wa[55][12];
  string s;
  int t,p,r,tID,pID,time;
  
  while(cin>>t>>p>>r){
    if(t==0&&p==0&&r==0)break;

    rep(i,55){
      score[i].second=i+1;
      score[i].first.first=0;
      score[i].first.second=0;
      rep(j,12){
	wa[i][j]=0;
      }
    }
    
    rep(i,r){
      cin>>tID>>pID>>time>>s;
      
      if(s=="CORRECT"&&wa[tID-1][pID]!=-1){
	score[tID-1].first.first+=1;
	score[tID-1].first.second+=(time+wa[tID-1][pID]*1200);
	wa[tID-1][pID]=-1;
      }else if(s=="WRONG"){
	wa[tID-1][pID]++;
      }
      
    }
    judge_sort(score,t);
    
    rep(i,t)cout<<score[i].second<<" "<<score[i].first.first<<" "<<score[i].first.second<<endl;
  }
  return 0;
}
