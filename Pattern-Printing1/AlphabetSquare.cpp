# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i = 'A';i<=int('A')+ n;i++ ){
        for(int j = 'A';j<=int('A')+n;j++){
            cout<<" "<<char(j)<<" ";
        }
        cout<<endl;
    }
}