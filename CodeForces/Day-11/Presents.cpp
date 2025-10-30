// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n+1] = {-1};
//   for(int i=1;i<=n;i++){
//     cin>>arr[i];
//   }
//   vector<int>ans(n+1);
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       if(i==arr[j])
//       ans[i]=j;
//     }
//   }
//   for (int i = 1; i <= n; i++) {
//     cout << ans[i] << " ";
//   }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n+1];
  vector<int> ans(n+1);
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  for(int i=1;i<=n;i++){
    ans[arr[i]]=i;
  }
  for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
  }
}
