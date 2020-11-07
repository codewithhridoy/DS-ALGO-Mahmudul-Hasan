#include <iostream>
#include <math.h>

using namespace std;

int main(){

    //A(x1,y1) B(x2,y2) C(x3,y3)
    double x1, y1, x2, y2, x3, y3, area;

    //scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1, &x2,&y2, &x3,&y3);
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    area = 0.5 * ((x1*(y3-y2)) + (x2*(y3-y1)) + (x3*(y1-y2)));

    printf("Area = %.2lf", area);

return 0;
}
