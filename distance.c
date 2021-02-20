//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
#include<math.h>
int main()
{  
    float x1, y1, x2, y2, distance;

    printf("Enter point one \n",x1,y1);
    scanf("%f%f",&x1,&y1);

    printf("Enter point two \n",x2,y2);
    scanf("%f%f",&x2,&y2);

    distance= sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
 
    printf("distance between (%0.2f,%0.2f) and (%0.2f,%0.2f) is (%0.2f,%0.2f)",x1,y1,x2,y2,distance);
     
   return 0;
}
