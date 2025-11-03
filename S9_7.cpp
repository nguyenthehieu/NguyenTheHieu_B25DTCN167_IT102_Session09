#include <stdio.h>

int main(){
	int n,i,j,a;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	i=0;
	j=n-1;
	while(i<j){
		a=array[i];
		array[i]=array[j];
		array[j]=a;
		i++;
		j--;
	}
	printf("Mang sau khi dao nguoc: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
