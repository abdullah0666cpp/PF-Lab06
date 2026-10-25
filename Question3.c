#include<stdio.h>
int main(){
	int n,x;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	printf("Enter the value of x:");
	scanf("%d",&x);
	
	float sum=0.0;
	int k,i;
	
	for(k=0;k<=n;k++){
		float power=1.0;
		float fact=1.0;
		
		for(i=1;i<=k;i++){
			power=power*x;
		}
		int a;
		for(a=1;a<=k;a++){
			fact=fact*a;
		} 
		 sum=sum+(power/fact);
		 
	} printf("The Sum is %.1f\n",sum);
		
	return 0;
}
