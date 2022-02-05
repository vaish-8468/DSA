#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int  Band(vector<int> arr){

  

    unordered_set<int> arr1;
    int largest=1;



//inserts all the elements of vector in unordered set in order to reduce the time complexity to O(1)
   for(int x: arr){
       arr1.insert(x);
   }

        

        for(auto y: arr1){


//searches for element 1 less than the current element
//if found, then the current element can;t be the the starting element of the band
//otherwise it will!
            int priorElement=y-1;

            //this comparison checks for the presence of priorElement in the arr1 with the time complexity of O(1)
            //if element not found then the iterator is passed to the next consecutive number and then again
            if(arr1.find(priorElement)==arr1.end()){
                int nextEle=y+1;
                int count=1;

//we check for the presence of next consecutive number in the set until the condition fails that is no such element found
//as we'll keep finding the elements we'll increase the count by 1
                while(arr1.find(nextEle)!=arr1.end()){
                    nextEle++;
                    count++;
                }
//this variable stores the max length of the band found
                largest=max(largest,count);
            }
        }
return largest;

         
    }


int main(){


    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<Band(arr)<<endl;



    return 0;

}
 

//this logic uses time complexity O(N)















