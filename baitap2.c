# include<stdio.h>
int main(){
	struct Student{
		char fullName[100];
		int age;
		char phone[20];
	};
    struct Student student;
    fflush(stdin);
    printf("moi ban nhap ho va ten: ");
    fgets(student.fullName,sizeof(student.fullName),stdin);
    printf("moi ban nhap tuoi sinh vien: ");
    scanf("%d",&student.age);
    fflush(stdin);
	printf("moi ban nhap so dien thoai: ");
    fgets(student.phone,sizeof(student.phone),stdin);
    printf("\n");
	printf("in thong tin sinh vien\n");
    printf("ho va ten: %s",student.fullName);
    printf("Tuoi: %d\n",student.age);
    printf("so dien thoai: %s",student.phone);
	return 0;
}
