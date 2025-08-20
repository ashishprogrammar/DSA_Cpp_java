#include<iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    string inpu;
    cin>>inpu;
    if(inpu.size()>10){
      string Size = to_string(inpu.size()-2);
      string ans = string(1, inpu[0]) + Size + string(1, inpu.back());
      cout<<ans<<"\n";
    }else{
      cout<<inpu<<endl;
    }
  }
}