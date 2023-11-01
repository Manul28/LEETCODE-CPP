#include<bits/stdc++.h>
using namespace std;

void eqyptian(int n,int d){
  if(n==0 || d==0)
     return;
  if(d%n==0){
    cout<<"1/"<<d/n;
    return;
  }
  if(n%d==0){
    cout<<n/d;
    return;
  }
  if(n>d){
    cout<<n/d;
    eqyptian(n%d,d);
    return;
  }
  int x=d/n+1;
  cout<<"1/"<<x<<"+";
  eqyptian(n*x-d,d*x);
}

int main(){
  int n,d;
  cin>>n;
  cin>>d;
  eqyptian(n,d);
  return 0;
}
