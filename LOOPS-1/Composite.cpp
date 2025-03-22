# include <iostream>
using namespace std;
int main(){
    int num ,f=0;
    cout << "Enter  a number to check: "<<endl;
    cin>>num;
    for ( int i=2;i<num;i++){
        if (num%i == 0){
            f = 1;
            break;
        }
    }
    if (f==1){
        cout<<"Number is composite";
    }
    else{
        cout<<"Number is not composite.";
    }

}