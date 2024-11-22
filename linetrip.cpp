#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
       int n,x;
       cin>>n>>x;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }

       int ans=INT_MIN;
       int last=0;
       for(int i=0;i<n;i++){
        ans=max(ans,arr[i]-last);
        last=arr[i];
       }
       ans=max(ans,2*(x-last));

     cout<<ans<<endl;
    }



}