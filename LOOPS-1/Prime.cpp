# include <iostream>
using namespace std;
int main(){
    int num ;
    bool f= true;
    cout << "Enter  a number to check: "<<endl;
    cin>>num;

    if (num!=1 and num>1){
        for ( int i=2;i<num;i++){
            if (num%i == 0){
                f = false;
                break;
            }
        }
        if (f==true) {
            cout<<"Number is Prime.";
        }
        else{
            cout<<"Number is not Prime.";
        }
    }
    else{
        cout<<" It's neither Prime nor Composite.";
    }

}