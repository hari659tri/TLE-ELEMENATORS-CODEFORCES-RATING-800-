#include<iostream>
#define el '\n'
using namespace std;


/*

5
3
...
7
##....#
7
..#.#..
4
####
10
#...#..#.#
OutputCopy
2
2
5
0
2

 logic of this question is simple if you have a 3 consecutive cells ... then 
 in this case you do not need to fill all the empty cell because it will automatically filled 
 with an a infinite supply of a water without doing anything and it take minimum only 2 operations
 else count of empty cells


*/

int main(){
    int t;
    cin>>t;
    
    while(t--){

        int n;
        cin>>n;
       string s;
       cin>>s;
        bool flag=true;
        int e=0;
       
       for(int i=0;i<n;i++){
        if(s[i]=='.'){
            e++;
        }
      if(i>0&&i<n-1)
       if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
        cout<<2<<el;
           flag=false;
           break;
       }
       
       }

       if(flag)
         cout<<e<<el;
    }
}


