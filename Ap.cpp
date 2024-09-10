#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // 4,7,10,13,16.. 
    for(int i=4; i<=n; i+=3){
        cout<<i<<",";
      }
  return 0;
}