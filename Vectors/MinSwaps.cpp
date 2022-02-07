#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int CountMinswap(vector<int> arr){
    int n=arr.size();
    //know the actual position of elements
    //store the current indices
    pair<int,int> a[n];

    for(int i=0;i<n;i++){
        a[i].first=arr[i];
        a[i].second=i;
    }


    //sorting
    sort(a,a+n);

    //build the main logic
    vector<bool> visited(n,false);

    int ans=0;

    for(int i=0;i<n;i++){


        //if element is visited or element is in correct position
        int old_position=a[i].second;
        if(visited[i]==true or old_position==i){
            continue;
        }


        //visiting the element (index) for the first time
        int node=i;
        int cycle=0;

        while(!visited[node]){
            visited[node]=true;
            int next_node=a[node].second;
            node=next_node;
            cycle+=1;
        }

        ans+=(cycle-1);
    }


    return ans;
}



int main(){

vector<int> arr{10,11,5,4,3,2,1};

cout<<CountMinswap(arr)<<endl;


return 0;

}