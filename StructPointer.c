#include <stdio.h>
#include <string.h> // Include the <string.h> header for strcpy()

struct student {
    char name[34];
    int roll;
};

int main() {
    struct student s, *ptr;
    ptr=&s; // ptr holds address of s
    s.roll = 5;
    strcpy(s.name, "atullya"); 
    
       printf("Your Name is %s\n", s.name); // if we use s than we use .
    printf("Your roll is %d", ptr->roll); // if we use ptr to display we use arrow operator

    return 0;
}
