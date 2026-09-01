#include <stdio.h>
int main(){
	int a,b,c;
	b=0;
	printf("Enter the number you want to reverse:");
	scanf("%d",&a);
	printf("Your number is %d:",a);
	while (a>0){
		c=a%10;
		b=(b*10)+c;
		a=a/10;
	}
	printf("Reversed number is %d",b);
	
}
