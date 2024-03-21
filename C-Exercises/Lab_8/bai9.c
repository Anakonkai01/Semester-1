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

void Find_Youngest(struct Employee a[],int nums);

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

    Find_Youngest(listOfEmployees,numEmployees);

    free(listOfEmployees);

    return 0;
}


void Find_Youngest(struct Employee a[],int nums){
    size_t i = 0;
    int min_index = 0;
    float min = a[i].birth;

    for (; i < nums; i++)
    {
        if (min > a[i].birth)
        {
            min_index = i;
        }
    }
    printf("\n\nThe employee have maximum salary is:\n");
    printf("ID: %d\n", a[min_index].id);
    printf("Name: %s\n", a[min_index].name);
    printf("Sex = %s\n", a[min_index].sex);
    printf("Birth year: %d\n", a[min_index].birth);
    printf("Phone Number: %d\n", a[min_index].phoneNumber);
    printf("Salary: %f\n", a[min_index].salary);
    printf("\n\n");
}
