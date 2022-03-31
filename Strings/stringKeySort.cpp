#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>


using namespace std;


string extractStringAtkey(string str,int key){

    //string tokeniser

    char *s=strtok((char*)str.c_str()," ");  //typecasted string into char
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }

    return (string)s;
}

int convertToInt(string s){
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--){
        ans+=((s[i]-'0')*p);
        p*=10;


    }
     return ans;

}

bool lexicoCompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;

    return key1<key2;
}

bool nemericCompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;

    return convertToInt(key1)<convertToInt(key2);
}
int main(){
    int n;
    cin>>n;

    cin.get();  //consumes the extra \n from the input of line 9
    
    string temp;
    vector<string> v;
    for(int i=0;i<n;i++){
    getline(cin,temp);  //inludes the white spaces
    v.push_back(temp);
    }
    

    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;


    //1. To extract keys for comaparison and store them

    vector<pair<string,string>> vp;

    for(int i=0; i<n;i++){
        vp.push_back({v[i], extractStringatKey(v[i],key)});
    }

    //2. sorting
    if(ordering=="numeric"){
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else{
        sort(vp.begin(),vp.end(),lexicoCompare);
    }


    //3. reversal
    if(reversal=="true"){
        reverse(vp.begin(),vp.end());
    }

    //4.output
    for(int i=0;i<n;i++){

        cout<<vp[i].first<<endl;
    }

 return 0;
}