#include <stdio.h>
#include <stdlib.h>

void towers(int,int,int,int);

int main()
{
    int num;
    printf("Enter the number of disks");
    scanf("%d",&num);
    towers(num,1,3,2);
    system("pause");
    return 0;
}
