#include<iostream>
using namespace std;
int main (){
    // char ch;
    // cin >> ch;
    // if (ch>=65 && ch<=90){
    //     cout << "uppercase";
    // }
    // else {
    //     cout << "lowercase";
    // }
       
int i=1,sum=0;
int n;
cin >> n;
while(i<=n){
    sum = sum+i;
    i++;
}
cout<< "sum = "<<sum<<endl;

}