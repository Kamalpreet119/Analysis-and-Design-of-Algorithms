#include<iostream>
using namespace std;

int NumberofRecursivecalls=1;//As We have to count the First Recursive call too 
//Made by us in int main
int NumberofComparisons=0;
int BinarySearch(int arr[],int start,int end,int x){
    int mid=(start+end)/2;
    NumberofComparisons++;
    if(arr[mid]==x){
        //NumberofComparisons++;
        /*Here It is is a mistake to keep Number of Comparisons inside If Statement
        Because Although Comparison is being made 
        But Number of Comparisons will be Incremented only if the Condition is true*/
        return mid;
    }
    else if(arr[mid]>x){
        NumberofRecursivecalls++;
        return BinarySearch(arr,start,mid-1,x);
    }
    else{
        NumberofRecursivecalls++;
        return BinarySearch(arr,mid+1,end,x);
    }
}
int main(){
    int arr[]={7,8,9,13,21};
    int x;
    cout<<"Enter the value of Element to Search=";
    cin>>x;
    cout<<"Element in the Array is at the Index "<<BinarySearch(arr,0,4,x)<<endl;
    cout<<"Number of Comparisons made="<<NumberofComparisons<<endl;
    cout<<"Number of Recursive calls="<<NumberofRecursivecalls<<endl;
    return 0;
}