#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct Employee {
    char id[SIZE];
    char name[SIZE];
    char sex[SIZE];
    int birth;
    int phoneNumber;
    float salary;
};

int main() {
    int numEmployees;
    
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    getchar();

    struct Employee *listOfEmployees = (struct Employee *)malloc(numEmployees * sizeof(struct Employee));

    if (listOfEmployees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < numEmployees; ++i) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", listOfEmployees[i].id);
        getchar();
        printf("Name: ");
        fgets(listOfEmployees[i].name, SIZE, stdin);
        listOfEmployees[i].name[strcspn(listOfEmployees[i].name, "\n")] = '\0'; 
        printf("Sex: ");
        scanf("%s", listOfEmployees[i].sex);
        printf("Birth Year: ");
        scanf("%d", &listOfEmployees[i].birth);
        printf("Phone Number: ");
        scanf("%d", &listOfEmployees[i].phoneNumber);
        printf("Salary: ");
        scanf("%f", &listOfEmployees[i].salary);
        printf("\n");
    }




    // print
    printf("\n\n");
    printf("\nEmployee details:\n");
    for (int i = 0; i < numEmployees; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %s\n", listOfEmployees[i].id);
        printf("Name: %s\n", listOfEmployees[i].name);
        printf("Sex: %s\n", listOfEmployees[i].sex);
        printf("Birth Year: %d\n", listOfEmployees[i].birth);
        printf("Phone Number: %d\n", listOfEmployees[i].phoneNumber);
        printf("Salary: %.2f\n", listOfEmployees[i].salary);
        printf("\n");
        
    }

    free(listOfEmployees);

    return 0;
}
