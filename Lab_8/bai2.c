#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define SIZE 10

struct Employee {
    char id[SIZE];
    char name[SIZE];
    char sex[SIZE];
    int birth;
    int phoneNumber;
    float salary;
};

void inputInformation(struct Employee* employee);
void outputInformation(const struct Employee* employee);  // Corrected declaration

int main() {
    struct Employee employee[SIZE];
    inputInformation(employee);
    outputInformation(employee);
    return 0;
}

void inputInformation(struct Employee* employee) {
    for (size_t i = 0; i < SIZE; i++) {
        printf("ID: ");
        scanf("%s", &employee[i].id);
        getchar();
        printf("Name: "); 
        fgets(employee[i].name, SIZE, stdin);
        employee[i].name[strcspn(employee[i].name, "\n")] = '\0';        
        printf("Sex = ");
        scanf("%s", &employee[i].sex);
        printf("Birth year: ");
        scanf("%d", &employee[i].birth);
        printf("Phone Number: ");
        scanf("%d", &employee[i].phoneNumber);
        printf("Salary: ");
        scanf("%f", &employee[i].salary);
    }
}

void outputInformation(const struct Employee* employee) {
    for (size_t i = 0; i < SIZE; i++) {
        printf("ID: %s\n", employee[i].id);
        printf("Name: %s\n", employee[i].name);
        printf("Sex = %s\n", employee[i].sex);
        printf("Birth year: %d\n", employee[i].birth);
        printf("Phone Number: %d\n", employee[i].phoneNumber);
        printf("Salary: %f\n", employee[i].salary);
        printf("\n\n");
    }
}
