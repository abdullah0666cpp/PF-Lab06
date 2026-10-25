#include<stdio.h>
int main(){

    int n=2,i,sum;

    while(n<=10000){
        sum = 0;
        for(i=1;i<n;i++){
            if(n%i==0){
            sum=sum+ i;
            }
        }
		if(sum == n){
            printf("%d is a perfect number\n",n);
		for(i=1;i<n;i++){
                if(n%i==0){
                    printf("%d",i);
                    if(i<n/2)
                        printf("+");
                }
            }

            printf("%d\n",n);
        }

        n++;
    }

    return 0;
}
	
