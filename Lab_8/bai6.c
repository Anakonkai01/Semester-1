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
void bubble_sort(struct Employee a[],int nums);
void outputInformation(const struct Employee* employee,int nums);
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

    
    bubble_sort(listOfEmployees,numEmployees);
    printf("\n\nAfter Sorted by birth year in ascending order: \n");
    outputInformation(listOfEmployees,numEmployees);

    free(listOfEmployees);

    return 0;
}




void bubble_sort(struct Employee a[],int nums){
    int swap = 1;
    for (size_t i = 0; i < nums-1; i++)
    {
        swap = 0;
        for (size_t j = 0 ; j < nums - i - 1; j++)
        {
            if (a[j].birth > a[j+1].birth)
            {
                int tempBirth = a[j].birth;
                a[j].birth = a[j+1].birth;
                a[j+1].birth = tempBirth;

                int tempID = a[j].id;
                a[j].id = a[j+1].id;
                a[j+1].id = tempID;

                int tempPhone = a[j].phoneNumber;
                a[j].phoneNumber = a[j+1].phoneNumber;
                a[j+1].phoneNumber = tempPhone;

                float tempSalary = a[j].salary;
                a[j].salary = a[j+1].salary;
                a[j+1].salary = tempSalary;

                char tempName[SIZE];
                strcpy(tempName, a[j].name);
                strcpy(a[j].name, a[j + 1].name);
                strcpy(a[j + 1].name, tempName);

                char tempSex[SIZE];
                strcpy(tempSex, a[j].sex);
                strcpy(a[j].sex, a[j + 1].sex);
                strcpy(a[j + 1].sex, tempSex);

                swap = 1;
            }
        }
        
        if (!swap)
        {
            break;
        }
        
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
