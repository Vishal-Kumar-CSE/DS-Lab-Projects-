#include<stdio.h>
void towers(int, char, char, char);
int main()
{
    int num;
    printf("\nEnter the no. of disks:\t");
    scanf("%d", &num);
    printf("\nThe sequence of moves in Tower of Hanoi is :\n");
    towers(num, 'A', 'C', 'B');
    return 0;

}
void towers(int num, char frompeg, char topeg, char auxpeg)

{

    if(num==1)
    {
        printf("\nMove disk 1 from peg %c to peg %c", frompeg,topeg);
        return ;
    }
    towers(num-1, frompeg, auxpeg, topeg);
    printf("\nMove Disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num-1, auxpeg, topeg, frompeg);

}
