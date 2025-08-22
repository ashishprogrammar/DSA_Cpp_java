#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  int ans=0;
  while(N--){
    int arr[3];
    int count=0;
    for(int i=0;i<3;i++){
      cin>>arr[i];
    }
    for(int i=0;i<3;i++){
      if(arr[i]==1){
        count++;
      }
    }
    if(count>=2){
      ans++;
    }
  }
  cout<<ans<<"\n";
  return 0;
}