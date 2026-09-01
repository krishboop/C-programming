#include <stdio.h>
int main(){
	
	float p,r,t;
	
	printf("Enter your principal ,time period,rate:");
	scanf("%f %f %f",&p,&t,&r);
	float si,amount;
	si=(p*r*t)/100;
	amount=p+si;
	printf("Your Interest is %.2f:\n",si);
	printf("Your total amount is %.2f\n:",amount);
	return 0;
	}
