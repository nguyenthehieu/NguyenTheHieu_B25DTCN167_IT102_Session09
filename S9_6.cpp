#include <stdio.h>

int main(){
	int i,n,x;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	int pos,found=0;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(array[i]==x){
			found=1;
			pos=i;
			break;
		}
	}
	if(found){
		printf("%d o vi tri thu %d.",x,pos+1);
	}else{
		printf("%d khong co trong mang!",x);
	}
	return 0;
}
