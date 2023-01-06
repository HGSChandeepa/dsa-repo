#include <bits/stdc++.h>
using namespace std;

    int characterReplacement(string s, int k){
               map<char , int>freq;
               int max =INT_MIN;
               
               for(int i =0 ;i<s.length() ;i++){
                   char letter = s[i];
                   
                   if(freq.find(letter) == freq.end()){
                       freq[letter] =0;
                   }
                   freq[letter]++;

               }
              
               for(auto itr =freq.begin() ;itr != freq.end() ;itr ++){
                   if(itr->second > max){
                       max =itr->second;
                   }
               }

              
               int r =s.length() -max;

               cout<<max;
               
               if( k >=r){
                   return s.length();
               }

                if( k <r){
                      return k+max;
               }
              
                
     return 0;
              
              

    }




int main(){

    string s = "EPNCMLPKWFUPEVHTWIVLZGGI";
    int k =4;

   cout<<characterReplacement( s,  k);


    return 0;
}