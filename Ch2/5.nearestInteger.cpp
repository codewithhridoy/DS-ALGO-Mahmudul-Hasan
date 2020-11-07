#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num, a, b, diff1, diff2;

    cout<<"Enter your number : ";
    cin>>num;

    a = sqrt(num);
    b = a + 1;
    diff1 = fabs((pow(a,2)) - num);
    diff2 = fabs((pow(b,2)) - num);

    if(diff1<diff2){
            printf("Nearest integer of square root of  %d = %d \n", num, a);
    }
    else{
        printf("Nearest integer of square root of  %d = %d \n", num, b);
    }

return 0;
}
