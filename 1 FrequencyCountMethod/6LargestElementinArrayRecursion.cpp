#include<iostream>
using namespace std;
#include<climits>

int count=0;
int numberofcalls=0;
int RecursiveLargest(int arr[],int size){
    if(size==0){count++;
        count++;
        return INT_MIN;
    }
    count++;
    if(*arr>RecursiveLargest(arr+1,size-1)){ count++;numberofcalls++;
        count++;return *arr;
    }
    else{//No need for count here because if condition given to If Statement is not true
    //Automatically else part is executed
        numberofcalls++;
        count++;return RecursiveLargest(arr+1,size-1);
    }
}

int main(){
    int size;
    cout<<"Enter the Size of the Array=";
    cin>>size;
    cout<<"Enter the elements of the Array=";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Largest element in the Array is "<<RecursiveLargest(arr,size)<<endl;
    cout<<"Value of Global count for this Algorithm is "<<count<<endl;
    cout<<"Number of Recursive calls made by this Algorithm is "<<numberofcalls<<endl;
    return 0;
}