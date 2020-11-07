#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    double x, y, z, s, area;

    cin >> x>>y>>z;

    s =  (x + y + z) / 2;
    area = sqrt(s*(s-x)*(s-y)*(s-z));

    cout<<setprecision(3)<<fixed;
    cout<< "Area =  "<<area<<endl;

return 0;
}
