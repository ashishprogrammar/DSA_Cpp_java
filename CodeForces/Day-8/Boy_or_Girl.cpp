#include<iostream>
using namespace std;
int main(){
  string input;
  cin>>input;
  int arr[26]= {0};
  for(char c:input){
    if(arr[c-'a']==0){
      arr[c-'a']++;
    }
  }
  int count=0;
  for(int i=0;i<26;i++){
    if(arr[i]==1){
      count++;
    }
  }
  if(count%2==0){
    cout<<"CHAT WITH HER!";
  }else{
    cout<<"IGNORE HIM!";
  }
}