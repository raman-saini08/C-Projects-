
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int main() {

    int size;

    printf("Enter number of students: ");
    scanf("%d", &size);

    struct Student arr[size];

    for(int i = 0; i < size; i++) {

        printf("\nEnter rollno of %d student: ", i+1);
        scanf("%d", &arr[i].rollno);

        printf("Enter name of %d student: ", i+1);
        scanf(" %19[^\n]", arr[i].name);

        printf("Enter marks of %d student: ", i+1);
        scanf("%f", &arr[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for(int i = 0; i < size; i++) {

        printf("\nRollno: %d", arr[i].rollno);

        printf("\nName: %s", arr[i].name);

        printf("\nMarks: %.2f\n", arr[i].marks);
    }

    return 0;
}
