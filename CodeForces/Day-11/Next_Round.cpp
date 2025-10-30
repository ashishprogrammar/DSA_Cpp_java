#include<iostream>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int arr[n] = {0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int count=0;
  int score = arr[k-1];
  for(int i=0;i<n;i++){
    if(arr[i]>=score && arr[i]>0)
      count++;
  }
  cout<<count;
}