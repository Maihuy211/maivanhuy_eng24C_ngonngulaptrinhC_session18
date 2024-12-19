# include<stdio.h>
# include<string.h>
int main(){
	struct Student{
		char fullName[100];
		int age;
		char phone[20];
	};
	struct Student students[5];
	printf("nhap thong tin cac sinh vien\n");
	printf("\n");
		int i;
		for(i=0;i<5;i++){
			printf("moi nhap thong tin sinh vien %d\n",i+1);
			fflush(stdin);
            printf("moi ban nhap ho va ten sinh vien %d: ",i+1);
            fgets(students[i].fullName,sizeof(students[i].fullName),stdin);
            printf("moi ban nhap tuoi sinh vien sinh vien %d: ",i+1);
            scanf("%d",&students[i].age);
            fflush(stdin);
	        printf("moi ban nhap so dien thoai sinh vien %d: ",i+1);
            fgets(students[i].phone,sizeof(students[i].phone),stdin);
            printf("\n");
        }
    printf("\n");
    printf("in thong tin sinh vien cac sinh vien\n");
    printf("\n");
        for(i=0;i<5;i++){
            printf("--thong tin sinh vien %d--\n",i+1);
			printf("ho va ten sinh vien sinh vien %d la:  %s",i+1,students[i].fullName);
		    printf("Tuoi sinh vien sinh vien %d la:  %d\n",i+1,students[i].age);
		    printf("so dien thoai sinh vien sinh vien %d la: %s",i+1,students[i].phone);
		    printf("\n");
        }   
	return 0;
}
