#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
  int getSecondLargest(const vector<int>& arr){
    int first =INT_MIN , second = INT_MIN;
    for(int num:arr){
      if(num>first){
        second=first;
        first = num;
      }else if(num>second && num<first){
        second= num;
      }
    }
    return (second==INT_MIN ? -1 : second);
  }
};
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<< getSecondLargest(arr,n) <<endl;
  return 0;
}
