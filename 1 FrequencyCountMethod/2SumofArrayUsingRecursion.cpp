#include<iostream>
using namespace std;

int count=0;
float RecursionSum(int arr[],int size){
    if(size==0){
        count++;//For Checking the If Condition
        count++;return 0;//For return Statement 
    }
    count++;return arr[0]+RecursionSum(arr+1,size-1);//count++ for this Return Statement
}

int main(){
    int n;
    cout<<"Enter the size of the Array=";
    cin>>n;
    int arr[n];
    cout<<"Input the array Elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of the Elements of the array is "<<RecursionSum(arr,n)<<endl;
    cout<<"Value of Global count for applying the Algorithm on an array of size "<<n<<" is "<<count<<endl;
    return 0; 
}