# include<iostream>
using namespace std;
int main()
{
    int num,r,rev = 0;
    cout << "Enter the number: "<<endl;
    cin>>num;
    while(num!=0){
        rev = rev*10;
        r  = num%10;
        rev += r;
        num = num/10;
    }
    cout<<rev;

}