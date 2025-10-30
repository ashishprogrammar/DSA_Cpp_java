#include<iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    int count=0;
    int winner=n,loser=0;
    while(winner!=1&&loser!=1){
      if(winner%2==0){
        count+=winner/2;
        loser+=winner/2;
        winner/=2;
      }else{
        count+=(winner-1)/2;
        loser+=(winner-1)/2;
        winner=(winner-1)/2+1;
      }
      if(loser%2==0){
        count+=loser/2;
        loser/=2;
      }else{
        count+=(loser-1)/2;
        loser=(loser-1)/2+1;
      }
    }
    count+=1;
    cout<<count<<endl;
  }
}