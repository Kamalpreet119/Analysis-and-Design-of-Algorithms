#include<iostream>
using namespace std;

int count=0;//Variable Required for Global Count

float AlgorithmSum(int arr[],int size){
    float sum=0;count++;
    for(int i=0;i<size;i++){
        count++;//For each time For loop runs
        sum=sum+arr[i];count++;//For each time "sum=sum+arr[i]" is executed
    }
    count++;//To count for the one time when Loop runs to check the condition but condition turns out to be false
    count++;return sum;
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
    cout<<"Sum of the Elements of the array is "<<AlgorithmSum(arr,n)<<endl;
    cout<<"Value of Global count for applying the Algorithm on an array of size "<<n<<" is "<<count<<endl;
    return 0; 
}