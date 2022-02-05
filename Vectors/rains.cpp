#include<iostream>
#include<vector>


using namespace std;

int WaterLogging(vector<int> arr){

    //logic
    int n=arr.size();
//we'll be considering two arrays
//left array would be the array of elements which would contain the max value amongst the elements of arr (traversed from left)
//right array would be the array of elements which would contain the max value amongst the elements of arr(traversed from right)
    vector<int> leftArr{arr[0]},rightArr{arr[n-1]};
    int a=arr[0];
    int z=arr[n-1];
    int i=1;
    int j=n-1;
     while(i<n && j>-1){
if(arr[i]>a){
    a=arr[i];}
    leftArr.push_back(a);


if(arr[j]>z){
    z=arr[j];}
    rightArr.push_back(z);

i++;
j--;

     }
int total=0;
     for(int i=0;i<n;i++){

         //total no. of boxes in which water has been logged can be calculated using this formula
        total+=(min(leftArr[i],rightArr[n-i])-arr[i]); 
     }

     return total;
           

    }
int main(){

    vector<int> arr{0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<WaterLogging(arr)<<endl;


    return 0;
}

