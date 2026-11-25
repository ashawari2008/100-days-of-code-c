#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int topper = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)", 
           s[topper].name, s[topper].marks);

    return 0;
}