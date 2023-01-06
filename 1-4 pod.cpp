#include <bits/stdc++.h>
using namespace std;


// leatcode pod
int minimumRounds(vector<int>& tasks) {

        map<int,int> mp;
        for(int i =0 ; i<tasks.size() ;i++){

            int num = tasks[i];
            //not found
            if(mp.find(num)==mp.end()){
                mp[num]=0;
            }
            mp[num]++;
        }
        int count =0;
        for( auto itr = mp.begin() ;itr!=mp.end() ;itr++){

            int nownum = itr->second;
            int singlesum =0;
           // cout<<nownum;


        	// cout<< itr ->first << itr->second << " ";
            if(nownum ==1){
                return -1;
                break;
            }

            else if (nownum ==2){
                count++;
              
            }
            else if (nownum ==3){
                count++;
               
            }



            // check for the multiples of 2 and 3
           else{

            // 5> 3 2 // 8 3.3.2
            while(nownum >=0){

                if(nownum >=5 ){
                    nownum-=3;
                    singlesum++;
                }
                else{
                    nownum-=2;
                    singlesum++;
                }



            }


            count++;
            // cout<<"count :" <<count<<" ";
           }

        }

        return count;

        
}
int main(){

	vector<int>v ={2,2,3,3,2,4,4,4,4,4};
	cout<<minimumRounds(v);

	return 0;
}