#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double r, perimeter, pi = 3.1416;
    cin >> r;
    perimeter = 2 * pi * r;
    cout<<setprecision(3)<<fixed;
    cout<< "Perimeter "<<perimeter<<endl;

    //printf("Perimeter = %.2lf", perimeter);

return 0;
}
