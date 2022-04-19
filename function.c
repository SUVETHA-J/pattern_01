#include<stdio.h>
int pattern(int n);
int pattern(int n)
{int i,j;
    for(i=0;i<n;++i)
{for(j=0;j<=i;++j)
{printf("01");
}
printf("\n");
}
}
int main()
{int n;
printf("enter a number of rows needed");
scanf("%d",&n);
pattern(n);
return 0;
}
