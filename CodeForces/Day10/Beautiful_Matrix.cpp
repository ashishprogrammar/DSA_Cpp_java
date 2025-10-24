#include<iostream>
using namespace std;
int main(){
  int arr[5][5];
  int row=-1,column=-1;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>arr[i][j];
      if(arr[i][j]==1){
        row=i,column=j;
      }
    }
  }
  int count=0;
  while(arr[2][2]!=1){
    while(row!=2){
      if(row<2){
        swap(arr[row][column],arr[row+1][column]);
        row=row+1;
      }else{
        swap(arr[row][column],arr[row-1][column]);
        row=row-1;
      }
      count++;
    }
    while(column!=2){
      if(column<2){
        swap(arr[row][column],arr[row][column+1]);
        column=column+1;
      }else{
        swap(arr[row][column],arr[row][column-1]);
        column=column-1;
      }
      count++;
    }
  }
  cout<<count;
}