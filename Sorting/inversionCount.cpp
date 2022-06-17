#include<iostream>
#include<vector>
using namespace std;


int merge(vector<int> &array, int s, int e){

    int i=s;
    int m=(s+e)/2;
    int j=m+1;


    vector<int> temp;
    int count=0;

    while(i<=m and j<=e){
        if(array[i]< array[j]){
            temp.push_back(array[i]);
            i++;
        }

        else{
            count=m-i+1;
            temp.push_back(array[j]);
            j++;
        }
    }


    //copy rem elements from first array
    while(i<=m){
        temp.push_back(array[i++]);
    }
    //copy the rem elements from the second array
    while(j<=e){
        temp.push_back(array[j++]);
    }
  //copy back the elements from temp to original
  int k=0;
  for(int f=s;f<=e;f++){
    array[f]=temp[k++];
  }
  return count;


}

int inversion_count(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return 0;
    }

    //rec case
    int mid=(s+e)/2;
    int c1= inversion_count(arr,s,mid);
    int c2=inversion_count(arr,mid+1,e);
    int CI=merge(arr,s,e);
    return c2+c2+CI;
}

int main(){
    vector<int> arr{10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size()-1;
    cout<<inversion_count(arr,s,e)<<endl;
    return 0;
}