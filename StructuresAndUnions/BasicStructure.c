#include<stdio.h>
#include<string.h>
struct Employee {
    char name[20];
    int age;
    int salary;
};
int main(){
    struct Employee e1;
    strcpy(e1.name, "Sahana");
    // e1.name = "Sahana"; // Static Allocation Not Allowed
    e1.age = 29;
    e1.salary = 35000;
    printf("Name: %s\n", e1.name);
    printf("Age: %d\n", e1.age);
    printf("Salary: %d\n", e1.salary);
    printf("Size of the structure: %lu bytes.", sizeof(e1));
    return 0;
}
