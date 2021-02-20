//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
#include<math.h>
int main()
{  
    float x1, y1, x2, y2, distance;

    printf(“Enter point one ”,x1,y1);
    scanf(“%f%f”,&x1,&y1);

    printf(“Enter point two”,x2,y2);
    scanf(“%f%f”,&x2,&y2);

    distance= sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );

    printf(“distance between (%f,%f) and (%f,%f) is (%f,%f)” x1,y1,x2,y2,distance);
     
   return 0;
}
