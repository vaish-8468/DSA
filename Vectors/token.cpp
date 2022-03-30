#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){

    string input;
    getline(cin,input);

    stringstream ss(input);
    //creates a string stream object


//>> and << operators
    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }


//print all tokens
    for( auto token:tokens){
        cout<<token<<",";
    }



    return 0;
}