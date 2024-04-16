#include<stdio.h>
int main(){
	int a ,b,sum,sub,div,mul;
	printf("enter any two numbers \n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a%b;
	printf("sum sub mul div of a and b is %d ,%d ,%d ,%d",sum,sub,mul,div);	
	
}
