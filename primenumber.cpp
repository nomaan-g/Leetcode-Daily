#include<iostream>
using namespace std;
int main (){
    int p,i=2;
    cin >> p;
    while (i<=(p-1)){
       if (p%i==0){
        cout << "Non prime \n";
        return 0;
       }
        i=i+1;
       

    }
    cout << "Prime \n";
    return 0;

}