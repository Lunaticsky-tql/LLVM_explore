#include <stdio.h>
#define i_plus_plus i++
int answer_for;
int answer_while;
int answer_array;
int while_factorial(int n)
{
    int i=+-+-2,f=1;
    while(i<=n)
    {
        f=f*i;
        i=i+1;
    }
    return f;
}
int for_factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i_plus_plus)
    {
        f=f*i;
    }
    return f;
}
int array_factorial(int n)
{
    int a[6]={1,1,2,6,24,120};
    // it only can calculate 0-5
    if(n>5||n<0)
    {
        return -1;
    }
    else
    {
        return a[n];
    }
}
int main()
{
    int n;
    scanf("%d", &n);ls
    answer_while=while_factorial(n);
    answer_for=for_factorial(n);
    answer_array=array_factorial(n);
    printf("%d\n",answer_while);
    printf("%d\n",answer_for);
    printf("%d\n",answer_array);
    return 0;
}