#include<iostream>
using namespace std;
int main(){
  int mat[5][5];
  int row=-1,col=-1;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>mat[i][j];
      if(mat[i][j]==1)
      row=i,col=j;
    }
  }
  int val = abs(row-2)+abs(col-2);
  cout<<val;
}