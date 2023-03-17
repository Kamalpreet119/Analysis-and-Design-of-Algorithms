#include<iostream>
using namespace std;

int count=0;
int Fibonacci(int n){
    if(n<0){count++;
        count++;return -1;
    }
    int f0=0;count++;
    int f1=1;count++;
    int fn=0;count++;
    for(int i=1;i<n;i++){count++;
        fn=f0+f1;count++;
        f0=f1;count++;
        f1=fn;count++;
    }count++;//For False Condition
    count++;return fn;
}

int main(){
    int n;
    cout<<"Enter the Fibonnaci term needed=";
    cin>>n;
    cout<<n<<"th Fibonacci term is "<<Fibonacci(n)<<endl;
    cout<<"Global count for Calculating Fib("<<n<<") is "<<count;
    return 0;
}