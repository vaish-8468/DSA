#include<iostream>
#include<vector>
using namespace std;


//s and e are the starting and end points of the vector

void merge(vector<int> &arr, int s , int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;

    vector<int> temp;

    while(i<=m and j<=e){
        if(arr[i]< arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    //copy rem ele from first array
 while(i<=m){
    temp.push_back(arr[i++]);
 }

    //copy rem ele from secong array
while(j<=e){
    temp.push_back(arr[j++]);
}

//copy back the elements from temp into original array
int k=0;
for(int l=s;l<=e;l++){
    arr[l]=temp[k++];
}
return;
}

//sorting method
void mergeSort(vector<int> &arr,int s, int e){
 
 //base case
 if(s>=e){
    return;
 }

 //recursion case
 int mid=(s+e)/2;
 mergeSort(arr,s,mid);
 mergeSort(arr,mid+1,e);


 return merge(arr,s,e);

}

int main(){

    vector<int> arr{10,5,2,0,7,6,4};

    int s=0;
    int e=arr.size()-1;
    mergeSort(arr,s,e);
    for(int x : arr){
        cout<<x<<",";
    }
    
    return 0;


}