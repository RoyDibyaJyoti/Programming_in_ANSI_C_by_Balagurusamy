#include<stdio.h>
#include<math.h>

#define PI acos(-1.0)
#define MAX 180

int main(){
    int angle;
    float x, y;
    angle = 0;
    printf("\tAngle\t\t\tcos(angle)\n");
    while(angle <= MAX){
        x = angle * PI / 180;
        y = cos(x);
        printf("\t%3d\t\t\t%8.4f\n", angle, y);
        angle += 10;
    }
    return 0;
}