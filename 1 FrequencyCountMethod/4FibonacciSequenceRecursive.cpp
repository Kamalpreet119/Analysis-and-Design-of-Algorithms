#include<iostream>
using namespace std;

int count=0;
int Fib(int n){
    if((n==0)||(n==1)){count++;
        count++;return n;
    }
    count++;
    return (Fib(n-1)+Fib(n-2));
}

int main(){
    int n;
    cout<<"Enter the Fibonnaci term needed=";
    cin>>n;
    cout<<n<<"th Fibonacci term is "<<Fib(n)<<endl;
    cout<<"Global count for Calculating Fib("<<n<<") is "<<count;
    return 0;
}