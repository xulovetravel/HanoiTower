#include <stdio.h>
#include <stdlib.h>
void moveTower(int height,int start,int finish);
void moveTower (int height,int start,int finish)
{
    if (height == 1)
        printf("%d ---> %d\n",start,finish);
    else
    {
        int spare = 6 - (start + finish); // identify the spare needle
// Move the (N-1)-disk tower from start Needle to spare Needle
        moveTower(height-1,start,spare);
// Move the bottom disk from start Needle to finish Needle
        printf("%d ---> %d\n",start,finish);
// Move the (N-1)-disk tower from spare Needle to finish Needle
        moveTower(height-1,spare,finish);
    }
}
int main (void)
{
    moveTower(3, 1, 2);
    return 0;
}
