#include <stdio.h>
#include <ctype.h>
/Simple calculator/

int loop = 0; 
int calculator()
{
    while (loop != 1) //This loops the below code until the user inputs "1"
    {
        int num1;
        int num2;
        char operation;
        printf("Enter the first number to calculate: ");
        scanf("%d", &num1);
        printf("Enter the second number to calculate: ");
        scanf(" %d", &num2); // Asks the user for two numbers and stores them in variables.
        printf("For multiplication type x, for division type /, for addition type +, for subtraction type - "); 
        scanf(" %c", &operation); //This determines what operation the user wants to do
        if (tolower(operation) == 'x') //converts the value stored in "operation" to lowercase and checks if the value is equal to x
        {
            int output = (num1 * num2);
            printf("The result of your calculation is %d", output); 
        }
        else if (operation == '/') //Checks if the value stored in "operation" is equal to /
        {
            int output = (num1 / num2);
            printf("The result of your calculation is %d", output);
        }
        else if (operation == '+') //Checks if the value stored in "operation" is equal to +
        {
            int output = (num1 + num2);
            printf("The result of your calculation is %d", output);
        }
        else if (operation == '-') //Checks if the value stored in "operation" is equal to -
        {
            int output = (num1 - num2);
            printf("The result of your calculation is %d", output);
        }
        else //If none of the if statements are true, it runs the below code
        {
            printf("You entered the wrong symbol\n");
        }
        printf("\nTo exit type 1, to keep using the calculator type 0: ");
        scanf("%d", &loop); //Asks the user to input either 1 or 0, then updates the value of the variable "loop"
    }
}

int main()
{
    calculator(); //Runs the calculator function
    printf("Thank you for using the calculator\n");
    return 0;
}
