#include<stdio.h>
int main(){
	int i,j,a,b;
	char symbol;
	printf("Enter the symbol:");
	scanf(" %c",&symbol);
	
	for(i=1;i<=5;i++){
	
	for(j=1;j<=i;j++){
			printf("%c",symbol);
		} printf("\n");	
	}
	for(a=2;a<=5;a++){
		
		for(b=5;b>=a;b--){
			
			printf("%c",symbol);
		} printf("\n");
	}
		
		
	
	return 0;
}
