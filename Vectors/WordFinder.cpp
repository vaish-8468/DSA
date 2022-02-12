#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    int index=big.find(small);
    vector<int> result = {};
    while(index<big.size()){
        if(index!=-1){
            result.push_back(index);
            index=big.find(small,index+1);
        }
        else if(index==-1){
            break;
        }
    }
    return result;
    


}



int main(){

    
    string big="I liked the movie, acting in the movie was great!";
    string small;
    getline(cin,small);
    auto p=stringSearch(big,small);
    for(auto ch: p){
        cout<<ch<<",";
    }




    return 0;

}