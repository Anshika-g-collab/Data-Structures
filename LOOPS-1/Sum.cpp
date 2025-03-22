# include<iostream>
using namespace std;
int main(){
    int num , sum=0,r;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    while(num!=0){
        r = num%10;
        sum += r;
        num = num/10;
    }
    cout<<"Sum of all the digits in a given number is : "<<sum;
}