#include <stdio.h>
#include <math.h>

int main(){
	int n,i,j;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	int sum=0;
	printf("Cac so nguyen to trong mang la: ");
	for(i=0;i<n;i++){
		int x=array[i];
		int prime=1;
		if(x<2){
			prime=0;
		}else{
			for(j=2;j<=sqrt(x);j++){
				if(x%j==0){
					prime=0;
					break;
				}
			}
		}	
		if(prime){
			printf("%d ",x);
			sum+=x;
		}
    }
    printf("\n");
    printf("Tong cac phan tu la so nguyen to trong mang: %d\n",sum);
	return 0;
}
