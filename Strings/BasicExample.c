#include<stdio.h>
#include<string.h>
int main(){
    /*
    Important String Library Functions
    strcmp, strcpy, strcat, strlen
    */
    char name[50];
    printf("Enter your name: ");
    // gets(name); // Reads the entire line until the newline
    // We don't use the gets() function because it's deprecated
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s\n", name);
    char s1[50] = "Reva ";
    char s2[50] = "University";
    char result[100];
    strcpy(result, s1);
    strcat(result, s2); 
    printf("%s\n", result);
    char pass1[] = "hello123";
    char pass2[20];
    printf("Enter password: ");
    scanf("%s", pass2);
    if(strcmp(pass1, pass2) == 0){
        printf("Access Granted!");
    }else{
        printf("Access Denied!");
    }
    return 0;
}