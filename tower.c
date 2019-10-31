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
void towers(int num,int from,int to,int other)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from %d to %d",from,to);
        return;
    }
    towers(num-1,from,other,to);
    printf("\n Move disk %d from %d to %d",num,from,to);
    towers(num-1,other,to,from);
}
