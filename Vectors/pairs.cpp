#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> pairSum(vector<int> arr1,int X){
//Logic
unordered_set<int> s1;
vector<int> result;


for(int i=0;i<arr1.size();i++ ){

    int x1=X-arr1[i];
    if(s1.find(x1)!=s1.end()){
        result.push_back(x1);
        result.push_back(arr1[i]);
        return result;
    }

    s1.insert(arr1[i]);
    //inserts the current number inside the set

}
    return {};
}






int main(){

vector<int> arr{10,5,3,2,-6,9,11};
int S=21;

auto p=pairSum(arr,S);
if(p.size()==0){
    cout<<"No such pair found!";
}
else{
    cout<<p[0]<<","<<p[1]<<endl;
}







    return 0;
}