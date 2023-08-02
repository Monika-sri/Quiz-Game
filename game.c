#include<stdio.h>
void main()
{
	int option,score=0,correct=0,wrong=0;
	printf("\n----------QUIZ GAME---------");
	printf("\nLet's play the level-01");
	printf("\nQ1.who invented C language");
	printf("\n1.Dennis Ritchie\t\t 2.Bjarne Stroustrup\t\t 3.James Gosling\t\t 4.Guido Van Rossum");
	printf("\nselect the option ");
	scanf("%d",&option);
	if(option==1)
	{
		score=+5;
		correct++;
	}
	else
	{
		wrong++;
	}
	printf("\nQ2.How many data types present in C?");
	printf("\n1.3\t\t 2.5\t\t 3.9\t\t 4.10");
	printf("\nselect the option");
	scanf("%d",&option);
	if(option==2)
	{
		score=+5;
		correct++;
	}
	else
	     wrong++;
	printf("\nQ3.How many keywords are present in c");
	printf("\n1.24\t\t 2.32\t\t 3.98\t\t 4.22");
	printf("\nselect the option");
	scanf("%d",&option);
	if(option==2)
	{
		score=+5;
		correct++;
	}
	else
	     wrong++;
    printf("\nQ4.Identify the loop");
    printf("\n1.for \t\t 2.if \t\t 3.while\t\t 4.both 1 and 3");
    printf("\nselect the option");
    scanf("%d",&option);
    if(option==4)
    {
    	score=+5;
    	correct++;
	}
	else
	     wrong++;
    printf("\nQ5.which statement is used to print output");
    printf("\n1.printf\t\t 2.scanf");
    printf("\nselect the option");
    scanf("%d",&option);
    if(option==1)
    {
    	score=+5;
    	correct++;
	}
	else
	    wrong++;
	printf("\nscore is %d:",score);
	printf("\nwrong answer is %d",wrong);
	printf("\ncorrect answer is %d",correct);
	if(correct==5)
	{
		printf("\nCongratulations!");
		printf("\nYou entered the level-02");
		printf("\nQ6.which statement is used to take input");
		printf("\n1.scanf\t\t 2.printf");
		printf("\nselect the option");
		scanf("%d",&option);
		if(option==1)
		{
			score=+5;
			correct++;
		}
		else
		     wrong++;
		printf("\nQ7.Which IDE is used to run the c");
		printf("\n1.Turbo c\t\t 2.Dev c++\t\t 3.both");
		printf("\nselect the option");
		scanf("\n%d",&option);
		if(option==3)
		{
			score=+5;
			correct++;
		}
		else
		    wrong++;
		printf("\nQ8.how we can print the patterns models");
		printf("\n1.for loops\t\t 2.if conditions");
		printf("\nselect the option");
		scanf("%d",&option);
		if(option==1)
		{
			score=+5;
			correct++;
		}
		else
		    wrong++;
    }
	else
	{
		printf("\nBetter luck next time\n Try to get good marks");
	}
	printf("score is :%d \nwrong answe is%d \n  correct answer is:%d",score,wrong,correct);
}
