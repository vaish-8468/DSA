#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> SubArraySorted(vector<int> arr){

vector<int> arr1(arr);  //copied elements of arr into arr1

sort(arr1.begin(),arr1.end());

int n=arr.size();
int i,j=-1;
int k=0;

while(k<n){
    if(arr[k]!=arr1[k]){
        i=k;
        break;
    }
    k++;
}
int m=n-1;
while(m>-1){
    if(arr[m]!=arr1[m]){
        j=m;
        break;
    }
    m--;
}

return {i,j};

}


int main(){


vector<int> arr{1,2,3,4,5,8,6,7,9,10,11};

auto p=SubArraySorted(arr);

for(auto x:p){
    cout<<x<<",";
}




    return 0;
}