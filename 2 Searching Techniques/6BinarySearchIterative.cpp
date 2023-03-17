#include<iostream>
using namespace std;

int numberofcomparisons=0;
int BinarySearch(int arr[],int size,int x){
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end){
        numberofcomparisons++;
        mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;//Means arr[mid] never became equal to x
    //It means that the element was never found
}

int main(){
    int arr[]={7,8,19,21,37};
    int x;
    cout<<"Enter the value of Element to Search=";
    cin>>x;
    cout<<"The Element is found at the Index "<<BinarySearch(arr,5,x)<<endl;
    cout<<"Number of Comparisons made in this Algorithm ="<<numberofcomparisons<<endl;
    return 0;
}