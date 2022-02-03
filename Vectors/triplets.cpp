#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector< vector<int>> triplets(vector<int> arr, int S){

//logic

//logic here used is sorting the array first
//then traverse the array elements along with keeping the track of pair Sum out of the left array elements
//if the sum of all three matches the target sum , push them inside the vector

    sort(arr.begin(),arr.end());
    vector<vector<int>> arr1;
    for(int i=0;i<(arr.size()-3);i++){
//selects one array element
        int j=i+1;
        int k=arr.size()-1;

//now we have array elements excluding arr[i]
//one pointer is on the first element of the resulting array and the other pointer is on the last element of the resulting array
//traverse the array elements from both left and right side until j<k is violated
//make pairs out of these elements if their sum matches up the (target Sum-arr[i])


        while(j<k){

            int c=S-arr[i];
            if(arr[j]+arr[k]==c){
                arr1.push_back({arr[i],arr[j],arr[k]});
               j++;
               k--;
            }
            else if(arr[j]+arr[k]>c){
                k--;

                //if sum exceeds c then reduce the sum by traversing from right
            }
            else{
                j++;
                //if the sum does not exceeds c then increase the sum by traversing from left
            }
            
        }
       

    }

    return arr1;


}



int main(){


    vector<int> arr{1,3,6,2,9,19,30,5,10,7,11,4};
    int Sum=10;

    auto result=triplets(arr,Sum);

    if(result.empty()){
        cout<<"No triplets found!";
    }
    else{
        for(auto i: result){
//for first vector element of vector "result"
        
        for(auto num: i){
            //for first element of the vector i
          cout<<num<<",";

        }
        cout<<endl;
    }
    }


    return 0;

}