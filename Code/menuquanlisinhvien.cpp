#include<stdio.h>
#include<string.h>
struct Student{
 	char Name[100];
};
void add(int *n,Student st[100]){
	printf("\nNumber of students add: ");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("Enter new student name: ");
		fflush(stdin);
		gets(st[i].Name);
	}
}
void remove(int *n,Student st[100]){
	int i=0;
	char Ten[100];
	printf ("\nEnter student name to remove: ");
	int m=0;
	fflush(stdin);
	gets(Ten);
    for( i=0;i<*n;i++){
        if(strcmp(st[i].Name,Ten)==0){
            st[i] = st[99]; 
			*n--; 
        }
    }
    if(i==*n){
		printf("Not Found !!!");
	}
	else{
		printf("Student has been removed successfully!");
    }
}
void search(int *n,Student st[100]){
	int i=0;
	char name[100];
	printf("\nEnter student name to search: ");
	fflush(stdin);
	gets(name);
	for(i=0;i<*n;i++){
		if(strcmp(st[i].Name,name)==0){
			printf("The position of student name in list is: %d ",i);
			break;
		}
	}
	if(i==*n){
		printf("Not Found !!!");
	}
}
void print(int *n,Student st[100]){
	printf("\nTotal students: %d", *n);
	for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
           if(strcmp(st[i].Name,st[j].Name)>0){
            	Student k=st[i];
            	st[i]=st[j];
           		st[j]=k;
         	}	
        }
    	printf("\n%d. %s",i,st[i].Name);
	}	
}
int main(){
	int c;
	Student st[100];
	int n;
	printf ("\n\t\t\t\t\t========= Student Management =========\n");
	while(1){
		printf("\n\n************************************");
		printf("\n1 - Add a student");
		printf("\n2 - Remove a student");
		printf("\n3 - Search a student");
		printf("\n4 - Print the list in ascending order");
		printf("\n5 - Quit");
		printf("\n************************************");
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				add(&n,st);
				printf ("Student has been added to list successfully!");
				break;
			case 2:
				remove(&n,st);
				break;
			case 3:
				search(&n,st);
				break;
			case 4:
				print(&n,st);
				break;
			case 5: 
				return 0;
		}
	}
}
