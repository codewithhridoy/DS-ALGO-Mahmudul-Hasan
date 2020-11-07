#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, angleA, angleB, angleC;

    cin>>a>>b>>c;

    angleA = acos((((b*b) + (c*c) - (a*a)) / 2*b*c));
    printf("Angle of A = %.2lf  \n",angleA);

    angleB = acos((pow(a,2)+pow(c,2)-pow(b,2)) / 2 * a *c);
    printf("Angle of B = %.2lf  \n",angleB);

    angleC = acos((pow(a,2)+pow(b,2)-pow(c,2)) / 2 * a *b);
    printf("Angle of C = %.2lf  \n",angleC);

return 0;
}
