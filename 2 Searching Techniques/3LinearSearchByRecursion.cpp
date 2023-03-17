#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int x,int index=0){
    if(index>=size){
        return ;
    }
    if(arr[index]==x){
        return index;
    }
    return LinearSearch(arr,size,x,index+1);
}

int main(){
    int arr[]={7,13,8,9,11};
    int element_to_search;
    cout<<"Enter the Element to Search=";
    cin>>element_to_search;
    cout<<"Index at which "<<element_to_search<<" occurs is "<<LinearSearch(arr,5,element_to_search)<<endl;
    return 0;
}