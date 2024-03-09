#include<iostream>
using namespace std;
void selection(int a[],int n) {
    int temp,m;
    for(int i=1; i<n; i++){ 
        m=a[i];
        for(int j=i-1; j>=0; j--){ 
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
       
        for(int i=0; i<n; i++){ 
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++){ 
        cin>>a[i];
    }
    selection(a,n);
 return 0;
}
