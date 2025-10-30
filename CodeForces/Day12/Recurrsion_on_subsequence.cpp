#include<iostream>
#include<vector>
using namespace std;
void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }
  subseq(arr,index+1,n,ans,temp);
  temp.push_back(arr[index]);
  subseq(arr,index+1,n,ans,temp);
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<vector<int>>ans;
  vector<int>temp;
  subseq(arr,0,n,ans,temp);
  for(int i=0;i<ans.size();i++){
    cout<<"{ ";
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<",";
    }
    cout<<" }";
  }
}