//write a program to find sum of all odd and even numbers between two numbers
#include<stdio.h>
int main(){
	int start,end,i,sum=0,sum1=0;
	printf("Enter first number :");
	scanf("%d",&start);
	printf("Enter last number :");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		if(i%2==0)
		sum+=i;
		else
		sum1+=i;
	}
	printf("Sum of even numbers between %d and %d : %d\n",start,end,sum);
	printf("Sum of odd numbers between %d and %d : %d",start,end,sum1);
	return 0;
}
