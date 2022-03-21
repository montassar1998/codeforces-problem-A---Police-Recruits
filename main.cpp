#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int nc=0,np=0;
  int t[n];
  for(int i=0;i<n;i++){
    cin>>t[i];
  }
 
  for(int i=0;i<n;i++){
    //cout<<nc<<" "<<np<<'\n';
    if(t[i]==-1){
      if(np==0){
        nc++;
      }else{
        np--;
      }
    }else{
      np+=t[i];
    }
  }
  cout<<nc;
  return 0;
}
