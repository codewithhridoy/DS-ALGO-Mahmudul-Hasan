#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double x, y, distance;
    cout<<"Enter first Co-ordinate: "<<endl;
    cin>>x;
    cout<<"Enter second Co-ordinate: "<<endl;
    cin>>y;

    distance = fabs(x - y);

    cout<<"Distance = "<<distance<<endl;

    return 0;
}
