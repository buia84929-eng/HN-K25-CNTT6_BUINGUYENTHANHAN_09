#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[100];
	int n = 0;
	int choice; 
	int comfirm ='Y';
	int sorted=0; 
	
	while(comfirm ='Y');
	printf("\n--------------------MENU----------------\n");
	printf("1. Nhap so luong phan tu va gia tri phan tu cho mang\n");
	printf("2. In ra gia tri cac phan tu trong mang\n");
	printf("3. Tinh tong tat ca so am va so duong trong mang\n");
	printf("4. In ra cac phan tu chia het cho 3\n");
	printf("5. Them 1 phan tu vao vi tri cu the\n");
	printf("6. Xoa phan tu tai 1 vi tri cu the\n");
	printf("7. Sap xep mang theo thu tu giam dan\n");
	printf("8. Kiem tra su ton tai cua phan tu trong mang\n");
	printf("9. In ra cac phan tu nam trong khoang a,b\n");
	printf("10.Dao nguoc vi tri cac phan tu trong mang\n");
	printf("\n-----------------------------------------\n");
	printf("Moi ban dua ra lua chon\n"); 
	scanf("%d",&choice);
	 
	 switch(choice){
	 	case 1:{
	 		printf("Nhap so phan tu va gia tri:");
			  scanf("%d",n);
			  if(n<=0 || n>100){
			  	 for(int i=0; i<n; i++){
			  	printf("Phan tu thu %d la:",i+1); 
			  		  scanf("%d",i);
			  }  
			  } 
			break;
		 } 
		 case 2:{
		 	if( n == 0){
		 		printf("mang rong:\n");
				  printf("mang hien tai:\n");
				  for(int i=0; i<n; i++){
				  	printf("arr[%d]=%d\n",arr[i],i); 
				  } 
			 } 
			 } 
			break;

		 case 6:{
		 	if(n==0){
		 		printf("mang rong:\n"); 
			 } 
			break;
			int index;
			printf("vi tri can xoa:\n");
			scanf("%d",index);
			if(index < n || index > n ){
				printf("Chi so khong hop le!!!\n");
				index = n-1;
				break; 
			} 
			for(int i=index;i<n-1;i++){
				arr[i]=arr[i+1];
				n--;
				printf("da xoa phan tu so %d\n",index); 
			} 
			break; 
		 } 
		 case 7:{
			break;
		 } 
		 case 8:{
			break;
		 } 
		 case 9:{
			break;
		 } 
		 case 10:{
			break;
		 } 
		 default :{
		 	printf("Lua chon khong hop le!!!:"); 
			break;
		 } 
	    printf("Ban co muon nhap lai(Y/N)?");
		scanf("%d",&comfirm); 
	 }return 0; 
} 

