#include<stdio.h>
#include<string.h>
union Employee {
    char name[20];
    int age;
    int salary;
};
int main(){
    union Employee e1;
    strcpy(e1.name, "Sahana");
    printf("Name: %s\n", e1.name);
    // e1.name = "Sahana"; // Static Allocation Not Allowed
    e1.age = 29;
    printf("Age: %d\n", e1.age);
    e1.salary = 35000;
    printf("Salary: %d\n", e1.salary);
    printf("Size of the structure: %lu bytes.", sizeof(e1));
    return 0;
}
