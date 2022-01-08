#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>

int guess, QA, rou=0;//These are to be provided
int n=5,walkAwayChoice;//n = number of player , p = player number

struct game{
	
	bool playerElimination[5];
	float score[5];
	
};
void elimination()
{
	printf("Empty for now");
}
void guessChecker()
{
	int checker  = true;
	while(checker)
	{
	printf("Guess the answer");
	scanf("%d",&guess);
	if(guess>=0&&guess<=100)
	{
	break;
	}
	else
	{
		printf("Invalid input, Enter Again");
	}
}
return ;
}
int scoreCalculate()
{
	int points = 100 - (0.5 * abs(QA-guess));   
	return points;}

int main()
{

struct game round[5];// creating structure of 5 diffrerent round
	for(int i=0;i<5;i++) //  Loop for 5 rounds
	{
		int p=0;
		rou++;
	while(p<n)
	{
	switch(rou)
	{
		case 1:
				if(round[i].playerElimination[p]==false)//by defalut it is false for  first round  
				{
			guessChecker(); 		
			// check the range using diwakar function if it is with in range calculate score and move to  next player else P.E= true and calculate score and move to next player			
			round[i].score[p] = scoreCalculate();
			p++;
			break;
				}
				
		case 2:
		case 3:	
		case 4:	
		case 5:		
				if(round[i].playerElimination[p]==false)
				{
				printf("Are you want to walk away from game \n Enter 1 for Yes, Enter 2 for No ");
				scanf("%d",&walkAwayChoice);
				if(walkAwayChoice == 1)
				{
			round[i].score[p]=0;
			round[i].playerElimination[p]=0;
			p++;
			break;			
				}
				else
				{
			guessChecker(); 		
			// check the range using diwakar function if it is with in range calculate score and move to  next player else P.E= true and calculate score and move to next player			
			round[i].score[p] = scoreCalculate();
			p++;
			break;
					
				}
						
				}
	}
}
}
}