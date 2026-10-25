#include<stdio.h>
int main(){
	int i,j,a,b;
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=5;j>=i;j--){
			printf("*");
		}printf("\n");
	}
	for(a=1;a<=5;a++){
		
		for(b=1;b<=5-i;b++){
			
			printf(" ");
		}
		
	 for(b=1;b<=a;b++){
			
			printf("*");
		} printf("\n");
	} 

	return 0;
}
 
