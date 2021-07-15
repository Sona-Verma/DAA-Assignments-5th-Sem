#include<stdio.h>
void search(int l[],int n,int item){
	int flag=1,k,count=0;
	for(k=0;k<=n-1;k++){
		count++;
		if(l[k]==item){
			flag=0;
			printf("Present %d \n",count);
		}
	}
			if(flag==1){
				printf("Not Present %d \n",count);	
			}
}
void main(){
	int n,i,size,j,key;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&size);
		int arr[size];
	for(j=0;j<size;j++){
		scanf("%d",&arr[j]);
	}	
	scanf("%d",&key);
	search(arr,size,key);
	}
}
