#include<stdio.h>
int main(){
	int a,b;
	printf("Simple Calculator\n");
	printf("Add:1\n");
	printf("Sub:2\n");
	printf("Mul:3\n");
	printf("Enter your numbers:");
	scanf("%d%d",&a,&b);
	while (1){
		int ch;
		printf("Enter your choice:");
		scanf("%d",&ch);
		if (ch==0){
			break;
		}	
		if (ch==1){
			printf("Proceeding to add\n");
			printf("%d\n",a+b);
		}
		else if (ch==2){
			printf("Proceeding to subtarct\n");
			if (a>b){
				printf("%d\n",a-b);
			}
			else if (b>a){
				printf("%d\n",b-a);
			}
		}
		else if (ch==3){
			printf("Proceeding to multiply\n");
			printf("%d\n",a*b);
		}	
		
	}
}
