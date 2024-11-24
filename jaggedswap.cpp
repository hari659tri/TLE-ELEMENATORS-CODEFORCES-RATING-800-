#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



int main(){

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n); 

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         
         if(arr[0]!=1){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }

        //  if(is_sorted(arr.begin(),arr.end())){
        //     cout<<"YES"<<endl;
        // }
        // else{
        
        //  for(int i=1;i<n-1;i+=2){
        //   if(arr[i-1]>arr[i]||arr[i]<arr[i+1]){
        //     cout<<"NO"<<endl;
        //     break;
        //   }
        //   else if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
        //     swap(arr[i],arr[i+1]);
        //   }
        //  }
        
        // if(is_sorted(arr.begin(),arr.end())){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        // }

         
    }
}