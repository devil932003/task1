#include<iostream>
using namespace std;
int main(){
    int i , j , k ,n, count;
    cout<<("enter the no of lines")<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        count=0;
        {for (j=1;j<=n-i;j++)
        cout<<(" ");}
        for(k=1;k<=2*i-1;k++){
            char ch = (char)('A'+count);
            count++;
            cout<< ch;
        }
        cout<<endl;
    }
      for (i=n-1;i>=1;i--){
        count=0;
        {for (j=1;j<=n-i;j++)
        cout<<(" ");}
        for(k=1;k<=2*i-1;k++){
            char ch = (char)('A'+count);
            count++;
            cout<< ch;
        }
        cout<<endl;
    }
 return 0;
}
