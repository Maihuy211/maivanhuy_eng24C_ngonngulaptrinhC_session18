# include<stdio.h>
# include<string.h>
int main(){
	struct Student{
		int id;
		char fullName[100];
		int age;
		char phone[20];
	};
	struct Student students[5]={
		{1,"Nguyen van A",17,"0987654321"},
    	{2,"Nguyen van B",18,"0987654322"},
    	{3,"Nguyen van C",19,"0987654323"},
    	{4,"Nguyen van D",15,"0987654324"},
    	{5,"Nguyen van E",14,"0987654325"},
	    
    };
    int x;
	printf("nhap id ");
    scanf("%d",&x);
	int i;
	for(i=0;i<5;i++){
        if(x==students[i].id){
        	fflush(stdin);
            printf("moi ban sua ho va ten sinh vien %d: ",i+1);
            fgets(students[i].fullName,sizeof(students[i].fullName),stdin);
            printf("moi ban sua tuoi sinh vien sinh vien %d: ",i+1);
            scanf("%d",&students[i].age);
	        printf("\n");
		    printf("in thong tin cac sinh vien khi da sua\n");
		    int count=0;
			for(i=0;i<5;i++){
			    count++;
				printf("\nthong tin sinh vien %d\n",i+1);
			    printf("Id sinh vien %d la: %d\n",i+1,count);
				printf("ho va ten sinh vien sinh vien %d la:  %s\n",i+1,students[i].fullName);
				printf("Tuoi sinh vien sinh vien %d la:  %d\n",i+1,students[i].age);
				printf("so dien thoai sinh vien sinh vien %d la: %s",i+1,students[i].phone);
				printf(" \n");
		    }   	 
	    }
    }
    if(x!=students[i].id){
			printf("ko tim thay id");
	}
	
	return 0;
}
