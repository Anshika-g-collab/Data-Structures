# include<iostream>
using namespace std;
int main(){
    int rows, coloumns;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>coloumns;
    for(int i=1;i<=rows;i++){
        for(int i = 1;i<=coloumns;i++){
            cout<<" * ";
        }
        cout<<endl;
    }
}