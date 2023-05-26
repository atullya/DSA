#include <stdio.h>
#include <string.h> 


struct student {
    char name[34];
    int roll;
};
void display(struct student s1[], struct student *p , int m) {
    for (int i = 0; i < m; i++) {
        printf("The name of %d student is %s\n", i + 1, p[i].name);
        printf("The roll no of student is %d\n", s1[i].roll);
    }
}

int main() {
    struct student s[10], *ptr, *d;
    int m;
    printf("Enter the no of students:");
    scanf("%d",&m);
   //d=s;
   /*You have declared two pointers, ptr and d, both pointing to struct student. However, you should only need one pointer for dynamic memory allocation. You can remove the declaration struct student *d; and assign the value of s directly to ptr like this: ptr = s;.
   
   */
ptr=(struct student *)malloc(sizeof(struct student)*m);

    
    for(int i=0; i<m; i++){
        printf("Enter name of %d student:",i+1);
        // scanf("%s",s[i].name);
        scanf("%s",ptr[i].name);
    
        printf("Enter Roll no:");
        scanf("%d",&s[i].roll);
    }
    
    display(s,ptr,m);
    
    return 0;
}
