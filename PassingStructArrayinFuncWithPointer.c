#include <stdio.h>
#include <string.h> 


struct student {
    char name[34];
    int roll;
};
void display(struct student s1[], struct student *p) {
    for (int i = 0; i < 2; i++) {
        printf("The name of %d student is %s\n", i + 1, p->name);
         printf("The name of %d student is %s\n", i + 1, s1[i].name);
        printf("The roll no of student is %d\n", s1[i].roll);
    }
}

int main() {
    struct student s[2], *ptr;
ptr = s;
//The assignment ptr = &s is corrected to ptr = s as the array s itself acts as a pointer to its first element.

    
    for(int i=0; i<2; i++){
        printf("Enter name of %d student:",i+1);
        scanf("%s",s[i].name);
        printf("Enter Roll no:");
        scanf("%d",&s[i].roll);
    }
    
    display(s,ptr);
    
    return 0;
}
