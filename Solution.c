/*Solution in C programming Language
 ===================================================================================================
 Name        :Functions
 Author      : Ahmed Farag
 Description : Code to print count of holes in numbers from 0 to 9
 1, 2, 3, 5 and 7 = 0 holes.
 0, 4, 6, and 9 = 1 hole.
 8 = 2 holes.
 ===================================================================================================
 */

#include <stdio.h>
int countHoles(int num){
	int holeSum=0;
	while(num!=0){
		//get 1st digit of number
		int Fdigit=num%10;
		//checks for 0,4,6,9 includes 1 hole
		if(Fdigit==0||Fdigit==4||Fdigit==6||Fdigit==9){
			//increase holes by 1
		holeSum+=1;
		}
		//in case of number 8 includes 2 holes
		if(Fdigit==8){
			holeSum+=2;
		}
		//case of 1,2,3,5,7 don't have any holes
		else{
			//keep the current value of HolesSum
			holeSum+=0;
		}
		//move to get the 2nd digit of given number
		num/=10;
	}
	return holeSum;
}
int main(){
	int numw;
	//get number from user
	scanf("%d",&numw);

	printf("%d",countHoles(numw));
}
