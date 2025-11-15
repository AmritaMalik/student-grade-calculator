#include <stdio.h> 
 // Function prototypes 
void add(int a, int b); 
void subtract(int a, int b); 
void multiply(int a, int b); 
void divide(int a, int b); 
   int main()  
{ 
    int choice; 
    int num1, num2; 
    printf("===  Calculator ===\n"); 
    printf("Select operation:\n"); 
    printf("1. Addition\n"); 
    printf("2. Subtraction\n"); 
    printf("3. Multiplication\n"); 
    printf("4. Division\n"); 
    printf("Enter choice (1-4): "); 
    scanf("%d", &choice); 
  printf("Enter first number: "); 
  scanf("%d", &num1); 
    printf("Enter second number: "); 
    scanf("%d", &num2); 
         switch(choice) { 
             case 1: 
                add(num1, num2); 
                    break; 
             case 2: 
                subtract(num1, num2); 
                   break; 
             case 3: 
               multiply(num1, num2); 
                     break; 
             case 4: 
               divide(num1, num2); 
                      break; 
          default: 
            printf("Invalid choice!\n"); 
                 } 
           return 0; 
           } 
       // Function definitions 
    void add(int a, int b) { 
    printf("The sum is: %d\n", a + b); 
         } 
void subtract(int a, int b) { 
    printf("The difference is: %d\n", a - b); 
       } 
void multiply(int a, int b) { 
    printf("The product is: %d\n", a * b); 
    }
void divide(int a, int b) { 
    if(b == 0) 
      printf("Error! Division by zero.\n"); 
    else 
        printf("The quotient is: %d\n", a / b); 
     } 
