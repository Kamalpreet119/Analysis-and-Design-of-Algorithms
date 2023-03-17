#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return i;
        }
        if(arr[i]>x){//Assuming Array has elements in Increasing Order
            //So Now every element after arr[i] will be greater than x
            //So need to search further
            return ;
        }
    }
}

int main(){
    int arr[]={7,8,9,11,13};
    int element_to_search;
    cout<<"Enter the Element to Search=";
    cin>>element_to_search;
    cout<<"Index at which "<<element_to_search<<" occurs is "<<LinearSearch(arr,5,element_to_search)<<endl;
    return 0;
}