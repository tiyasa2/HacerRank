#include <stdio.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c ,&d);
    int int_sum = a+b;
    int int_diff = a-b;
    float float_sum = c+d;
    float float_diff = c-d;
    printf("%d %d\n",int_sum,int_diff);
    printf("%0.1f %0.1f", float_sum,float_diff);
    return 0;
}
