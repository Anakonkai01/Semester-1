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
void count_gender(struct Employee employee[],int numEmployees,int *count_male,int *count_female);

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

    
    int count_male = 0, count_female = 0;
    count_gender(listOfEmployees,numEmployees,&count_male,&count_female);
    printf("The number of male in the list = %d\n",count_male);        
    printf("The number of female in the list = %d\n",count_female);

    free(listOfEmployees);

    return 0;
}


void count_gender(struct Employee employee[],int numEmployees,int *count_male,int *count_female){
    for (size_t i = 0; i < numEmployees; i++)
    {
        if (!strcmp(employee[i].sex, "male"))
        {
            (*count_male)++;
        }
        if (!strcmp(employee[i].sex, "female"))
        {
            (*count_female)++;
        }
    }
}