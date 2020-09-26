#include <stdio.h>

int main()
{
    int age;
    
    //input age
    printf("Enter age: ");
    scanf("%d", &age);
    
    //check teenage or not
    if(age>=13 && age<=19)
        printf("%d is a teenage value\n", age);
    else
        printf("%d is not a teenage value\n", age);
    
    return 0;
}
