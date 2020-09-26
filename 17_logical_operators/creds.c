#include <stdio.h>
#include <string.h>

// define a fixed value for USERNAME and PASSWORD
#define USERNAME "admin"
#define PASSWORD "admin@123"

int main()
{
    char un[50], pass[50];
    
    //input USERNAME and PASSWORD
    printf("Enter username: ");
    scanf("%s", un);
    printf("Enter password: ");
    scanf("%s", pass);
    
    //validate username and password
    if(strcmp(USERNAME,un)==0 && strcmp(PASSWORD, pass)==0)
        printf("Input credentials are correct\n");
    else
        printf("Input credentials are not correct\n");
    
    return 0;
}
