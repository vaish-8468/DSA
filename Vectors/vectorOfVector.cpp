#include<iostream>
#include<vector>
using namespace std;

int main(){
//2D vector

vector< vector<int> > arr={{1,2},{4,5,6},{9,2,1,3},{4}};


arr[0][0]+=1;  //updated sub-element
arr[1][0]+=1;
for(int i=0;i<arr.size();i++){


//for some int num which is present inside arr[i]
    for(int num : arr[i]){
cout<<num<<",";
    }

    cout<<endl;
}






    return 0;
}