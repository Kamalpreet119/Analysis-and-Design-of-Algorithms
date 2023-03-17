#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int x){//x=Element to be searched
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={7,13,8,9,11};
    int element_to_search;
    cout<<"Enter the Element to Search=";
    cin>>element_to_search;
    cout<<"Index at which "<<element_to_search<<" occurs is "<<LinearSearch(arr,5,element_to_search)<<endl;
    return 0;
}