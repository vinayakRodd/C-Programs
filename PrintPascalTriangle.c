// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int p,q;
    int a[100][100];
    int n,m;
    
    cin>>n;
    m = n;
    
    for(int i=0; i<n; i++){
        
        // for(int j=4; j>=i; j--)
        //     cout<<" ";
        if(i>1)
            p=0,q=1;
            
        for(int k=0; k<=i; k++){
            
            if(i <= 1 || k==0 || k==i)
                a[i][k] = 1;
                
            else{
                
                a[i][k] = a[i-1][p]+a[i-1][q];
                p++;
                q++;
                
            }
        
            
        }            
      
    }
    
    
    for(int i=0; i<n; i++){
           
           for(int j=n-1; j>=i; j--)
                cout<<" ";
                
           for(int k=0; k<=i; k++)
            cout<<a[i][k]<<" ";
            
            cout<<"\n";
       }

    return 0;
}
