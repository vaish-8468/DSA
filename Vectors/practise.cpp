#include<iostream> 
#include<vector>
using namespace std;
int main(){
// demo vector

// vector<int> arr={1,2,3,4,5};


// fill constructor
//vector of size 10 initialized with the element value 7
vector<int> arr(10,7);


//push back in O(1) time complexity
//inserts at the end
//doubles the memory if the vector is full
arr.push_back(6);



// size of the vector
cout<<arr.size()<<endl;




// capacity of thge vector(actual memory allocated)
cout<<arr.capacity()<<endl;


return 0;
}
