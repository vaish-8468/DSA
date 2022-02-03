#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int> arr){
    int largest=0;
    int n=arr.size();
    for(int i=1;i<n-1;){


//this condition checks for the peak where both the adjacent numbers are less than the current number
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            int count=1;
            int j=i;

//traverses back(left) in order to count the number of elements contributing to the mountain until the given cond is violated
            while(j>=1 && arr[j]>arr[j-1]){
                j--;
                count+=1;
            }

//traverses forth(right) in order to count the number of elements contributing to the mountain until the given conditon is violated
            while(i<n-1 && arr[i]>arr[i+1]){
                i++;     //increases the iterator by one
                count++;
            }
            largest=max(largest,count);
//updates largest variable with the max no. of elements contributing to the highest peak mountain
        }
        else{
            i++;
        }
        
    }

    return largest;
}



int main(){

    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    cout<<peak(arr)<<endl;



    return 0;
}

//this program logic has time complexity of o(N)