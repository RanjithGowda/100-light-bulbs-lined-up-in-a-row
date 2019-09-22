#include<stdio.h>

int main(){
	int i=1,k,j=0,n,a[101];
	
	printf("How many bulbs would you like to use?\n");
	scanf("%d",&n);
	while(i<=n){
		if(i==1){
			printf("On itteration %d:\n",i);
			printf("| ");
			for(j=1;j<=n;j++)
				a[j]=1;
			for(j=1;j<=n;j++)
				printf("%d | ",a[j]);
			printf("\n");
		}
		else{
			k=0;j=1;
			while(j<=(n/i)){
				k=k+i;
				if(a[k]==1){
					a[k]=0;
				}
				else{
					a[k]=1;
				}
				j++;
			}
			printf("On itteration %d:\n",i);
			printf("| ");
			for(j=1;j<=n;j++)
				printf("%d | ",a[j]);
			printf("\n");
		}
		i++;
	}
	return 0;
}
