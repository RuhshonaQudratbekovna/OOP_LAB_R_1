
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int r;
    while(num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}
