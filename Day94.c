#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.roll_no);
    printf("\nMarks: %.2f", s.marks);
}

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}