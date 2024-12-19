# include<stdio.h>
int main(){
	struct Student{
		char fullName[100];
		int age;
		char phone[20];
	};
    struct Student student={"Mai Van Huy",18,"*******055"};
    printf("in thong tin sinh vien\n");
	printf("ho va ten: %s\n",student.fullName);
    printf("Tuoi: %d\n",student.age);
    printf("so dien thoai: %s\n",student.phone);
    return 0;
}
