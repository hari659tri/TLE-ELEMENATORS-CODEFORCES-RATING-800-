#include<iostream>
using namespace std;
 /*
 InputCopy:
6
1
3
5
100
999
1000
OutputCopy:
First
Second
First
First
Second
First
 n%3=r
 r=0 ->3 6 9 12 ....
 r=1 ->4 7 10 .....
 r=2->5 ,8,11.......
 Vanya and Vova are playing a game. 
 Vanya starts.
  Vanya's move the integer is divisible by 3
, then he wins. If 10
 moves have passed and Vanya has not won, then Vova wins.

n=6
 va vo va vo va vo va vo va vo va 
 7  6  7 6  7   6 7  6   7  6  7  here 10 move passed so vova win's means they are palying 
 optimally so that they win due to this when divisible by 3 vova wins else Vanya
 
 */

int main(){
    int t;
    cin>>t;
     
     while(t--){
        int n;
        cin>>n;
        if(n%3==1||n%3==2){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
     }
}
