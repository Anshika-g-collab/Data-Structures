# include<iostream>
using namespace std;
int main()
{
    for (int i = 1;i<=10;i++){
        if (i%2==0){ //if condition is true , skip particular iteration and continue.
            continue;
        }
        cout<<i<<endl;   
    }
}