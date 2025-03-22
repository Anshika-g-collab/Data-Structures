# include<iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter a Number:";
    cin>>num;

    int a = num;
    if (a==0){
        count +=1;
    }
    while (num!=0){
        num = num/10;
        count +=1;
    }
    cout<<"Number of digits in a given number is :"<<count<<endl;
}