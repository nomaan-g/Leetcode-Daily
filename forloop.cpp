#include<iostream>
using namespace std;
int main (){
    int n= 5;
    int oddsum=0;
    for (int i=0;i<=n;i++){
        if (i%2 !=0){
            oddsum=oddsum+i;
           
        }
    }
 cout << "oddsum = " <<oddsum<<endl;
}
