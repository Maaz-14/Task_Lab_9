#include<stdio.h>
void Factors(int number){//number=12;
	int fact=2;
	while (number>1){  //12>1 TRUE
		while (number%fact==0){// if not divisible 2 then bypass this
			printf("%d  ",fact);//2 //2 
			number/=fact;//number=6 number=3 THEN BYPASS!!
		}
		fact++; // fact=3
	}
}


int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);	//12
	Factors(n);//n=12
	return 0;
}
