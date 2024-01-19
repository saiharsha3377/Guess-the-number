#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess;
    int G_count=1;//
    srand(time(0));
    num=rand()%100+1;
    do
    {
        printf("Guess a Number between 1-100:\n");
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Guess Lower");
        }
        else if(guess<num)
        {
            printf("Guess Higher!!");
        }
        else
        {
            printf("You have guessed the number in %d attempts\n",G_count);
        }
        G_count++;
    }
    while(guess!=num);
    return 0;
}
