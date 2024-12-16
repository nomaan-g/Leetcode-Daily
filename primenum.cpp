#include<iostream>
using namespace std;
int main(){
    int i;
    int n,count=0;
    cin >> n;
bool isPrime= true;

for(i=2;i*i<=n;i++){
    if (n%i==0){
    isPrime = false;
    break;
        
        
    }

}
if (isPrime==true){
    cout  << "Prime Number"<<endl;
}
else{
    cout  << "Non-Prime Number"<<endl;
}



 return 0;
}