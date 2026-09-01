#include <stdio.h>
int main(){
	char c,d,temp;
	printf("Enter the characters:");
	scanf("%c %c",&c,&d);
	printf("You entered %c and %c\n",c,d);
	temp=c;
	c=d;
	d=temp;
	printf("The swapped values are %c and %c \n",c,d);
}
