#include<stdio.h>
int main(){
	int choice;
	int score=0;
	int i;
	printf("------------QUIZ GAME---------------\n\n");
	printf("----------Play and Win--------------\n\n");
	up:
	printf("1.Begin quiz!!\n");
	printf("2.View your score!!\n");
	printf("3.Quiz tips!!\n");
	printf("Enter your choice: \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		int op;
		printf("Let's Begin!!\n\n");
		printf("What is the capital city of Nepal?\n");
		printf("1.Pokhara  2.Chitwan   3.Kathmandu   4.Dharan\n");
		printf("Answer is: ");
		scanf("%d",&op);
		if(op==3){
			printf("Correct Answer\n");
			score=score+10;
			printf("Score: %d\n\n",score);
		}else{
			printf("Incorrect answer.\n\n");
			goto up;
		}
		
		printf("Which planet in the solar system is known as the 'Red Planet'?\n");
		printf("1.Venus  2.Mars   3.Earth   4.Jupiter\n");
		printf("Answer is: ");
		scanf("%d",&op);
		if(op==2){
			printf("Correct Answer\n");
			score=score+10;
			printf("Score: %d\n\n",score);
		}else{
			printf("Incorrect answer.\n\n");
		}
		
		printf("Which river is the longest in the world?\n");
		printf("1.Amazon   2.Mississippi   3.Nile  4.Yangtze\n");
		printf("Answer is: ");
		scanf("%d",&op);
		if(op==3){
			printf("Correct Answer\n");
			score=score+10;
			printf("Score: %d\n\n",score);
		}else{
			printf("Incorrect answer.\n\n");
		
		}
		
		
		printf("Which one is the hottest continent?\n");
		printf("1.Africa   2.South Asia  3.North America  4.Australia\n");
		printf("Answer is: ");
		scanf("%d",&op);
		if(op==1){
			printf("Correct Answer\n");
			score=score+10;
			printf("Score: %d\n\n",score);
		}else{
			printf("Incorrect answer.\n\n");
			
		}
		
		
		printf("What gas is used to extinguish fires?\n");
		printf("1.Oxygen   2.Nitrogen   3.Carbon dioxide  4.Hydrogen\n");
		printf("Answer is: ");
		scanf("%d",&op);
		if(op==2){
			printf("Correct Answer\n\n");
			score=score+10;
			printf("Score: %d\n",score);
		}else{
			printf("Incorrect answer.\n\n");
		
		}
		
		if(score==50){
		printf("Congratulationsss.You have won Iphone 18!!\n",score);
	}
		else{
			printf("Play again to win Iphone 18!!\n");
		}
		break;
		
		case 2:
		printf("Your score is %d\n\n",score);
		goto up;
			break;
			
		case 3:
		printf("Best of luckkkkkkkkk\n\n");
		goto up;
		break;
			
		default:
			printf("Invalid choice\n");
			goto up;
			break;
	}
	return 0;
}
