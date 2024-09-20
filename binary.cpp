#include <iostream>
using namespace std;
void dec(int n){
    int cnt=0;
    int rem;
    int temp=0;
    while(n!=0){
        rem=n%2;
        temp=temp*10+rem;
        n=n/2;
        cnt++;
    }
    int a=0;
    while(cnt!=0){
        a=temp%10+a*10;
        temp=temp/10;
        cnt--;
    }
    cout<<"binary number is: "<<a;
}
int main(){
    int n;
    cout<<"input number: ";
    cin>>n;
    dec(n);
    return 0;
}
