#include<iostream>
using namespace std;

int main(){
    long long n;
     cin>>n;
       long long sum=0;
       long long total=n*(n+1)/2;
     for(int i=1;i<n;i++){
       long long x;
       cin>>x;
       sum+=x;
     } 
     long long ans=total-sum;
     cout<<ans<<endl;
      
      return 0;
}