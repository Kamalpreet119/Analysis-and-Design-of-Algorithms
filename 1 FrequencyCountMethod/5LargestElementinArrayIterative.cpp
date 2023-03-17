#include<iostream>
using namespace std;

int count=0;
int Largest(int arr[],int size){
    int max=arr[0]; count++;
    for(int i=0;i<size;i++){ count++;
        if(max<arr[i]){ count++;
            max=arr[i]; count++;
        }
    }
    count++;return max;
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
    cout<<"Largest element in the Array is "<<Largest(arr,size)<<endl;
    cout<<"Value of Global count for this Algorithm is "<<count<<endl;
    return 0;
}