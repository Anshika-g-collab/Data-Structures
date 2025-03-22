//  1 1 2 3 5 8 13
// fib(n-1) + fib (n-2)

# include<iostream>
using namespace std ;
int main()
{
    int a=1,b=1, sum = 0,n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1;i<=n-2;i++){
    sum = a+b;
    a=b;
    b=sum;
    }
    cout <<n<<"th fibbonacci number is :  "<<sum;
}