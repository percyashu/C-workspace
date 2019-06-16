#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;
int main(){
    srand(time(0));
    int num1 = rand()%10;
    int num2= rand()%10;
    if(num1>num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    cout<<"What is "<< num2 <<" -"<< num1<<endl;
    int ans;
    cin>>ans;
    if(num2-num1==ans)
        cout<<"Corrected";

    else
        cout<<"Wrong "<< num2 <<" - "<<num1<<" is "<<num2-num1<<endl;

    return 0;
}
