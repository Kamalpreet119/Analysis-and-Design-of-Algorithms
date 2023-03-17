#include<iostream>
using namespace std;

int LinearSearch(int *ptr,int size,int x,int *initial_ptr){//Passing Initial Pointer is necessary
    if(size==0){                                           // to get the Index of x if found
        return -1;
    }
    if(*ptr==x){
        return ptr-initial_ptr;
    }
    return LinearSearch(ptr+1,size-1,x,initial_ptr);
}

int main(){
    int arr[]={7,13,8,9,11};
    int element_to_search;
    cout<<"Enter the Element to Search=";
    cin>>element_to_search;
    cout<<"Index at which "<<element_to_search<<" occurs is "<<LinearSearch(arr,5,element_to_search,arr)<<endl;
    return 0;
}
