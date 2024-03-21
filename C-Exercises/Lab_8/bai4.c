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
int foundID(struct Employee* employee,int numEmployees,int input_ID);

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
    printf("Enter an ID you want to found: ");
    scanf("%d",&input_ID);

    // 
    if (foundID(listOfEmployees,numEmployees,input_ID) == -1)
    {
        printf("ID was not found");
    }
    else{
        int i = foundID(listOfEmployees,numEmployees,input_ID);
        printf("\n\n");
        printf("\nEmployee details:\n");
        printf("ID: %d\n", listOfEmployees[i].id);
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


int foundID(struct Employee employee[],int numEmployees,int input_ID){
    for (size_t i = 0; i < numEmployees; i++)
    {
        if (employee[i].id == input_ID)
        {
            return i;
        }
    }
    return -1;   
}