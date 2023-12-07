#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct Employee {
    int id;
    char name[SIZE];
    char sex[SIZE];
    int birth;
    int phoneNumber;
    float salary;
};
void outputInformation(const struct Employee* employee,int nums);
int findEmployeeIndex(struct Employee employees[], int numEmployees, int targetID);
void deleteEmployee(struct Employee employees[], int *numEmployees, int targetID);

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
        scanf("%d", &listOfEmployees[i].id);
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

    int input_ID;
    printf("Enter an ID to delete the corresponding employee: ");
    scanf("%d", &input_ID);

    int index = findEmployeeIndex(listOfEmployees, numEmployees, input_ID);

    if (index == -1) {
        printf("Employee with ID %d not found.\n", input_ID);
    } else {
        deleteEmployee(listOfEmployees, &numEmployees, input_ID);
        printf("Employee with ID %d deleted successfully.\n", input_ID);
    }

    printf("\nRemaining Employees:\n");
    outputInformation(listOfEmployees,numEmployees);

    free(listOfEmployees);

    return 0;
}

int findEmployeeIndex(struct Employee employees[], int numEmployees, int targetID) {
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].id == targetID) {
            return i;
        }
    }
    return -1;
}

void deleteEmployee(struct Employee employees[], int *numEmployees, int targetID) {
    int index = findEmployeeIndex(employees, *numEmployees, targetID);

    if (index != -1) {
        for (int i = index; i < (*numEmployees) - 1; ++i) {
            employees[i] = employees[i + 1];
        }
        (*numEmployees)--;
    }
}


void outputInformation(const struct Employee* employee,int nums) {
    printf("\n\n");
    for (size_t i = 0; i < nums; i++) {
        printf("ID: %d\n", employee[i].id);
        printf("Name: %s\n", employee[i].name);
        printf("Sex = %s\n", employee[i].sex);
        printf("Birth year: %d\n", employee[i].birth);
        printf("Phone Number: %d\n", employee[i].phoneNumber);
        printf("Salary: %f\n", employee[i].salary);
        printf("\n\n");
    }
}
