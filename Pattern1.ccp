#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars;

    for(int i=n; i>=1; i--){

        stars  = i;

        for(int j=stars; j>=1; j--)
            cout<<"* ";

        cout<<endl;
    }

}

int main(){

    int n;

    cin>>n;

    print1(n);
    



}
