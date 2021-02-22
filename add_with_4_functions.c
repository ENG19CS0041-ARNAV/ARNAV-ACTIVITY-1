 #include<stdio.h>
 #include<conio.h>
{
   int a;
   printf(“enter a number”);
   scanf(“%d”,a );
   return a;
}

int find_sum(a,b)
{
   int sum;
   sum=a+b;
   return sum;
}

void output(a,b,c)
{
   printf(“sum of %d and %d is %d”,a,b,c);
}

int main()
{
   int x,y,z;
   x=input();
   y=input()
   z=find_sum(x,y);
   output(x,y,z);
   return 0;
}

