#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

//function to clear screen
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//function for power operation
void power() {
    printf("Welcome to Power Function\n\n");
    double num,pow1;
    printf("Enter number : ");
    scanf("%lf",&num);
    printf("Enter power to be raised : ");
    scanf("%lf",&pow1);
    printf("\n%lf to the power raised %lf is %lf.",num,pow1,pow(num,pow1));
}

//function for suare root operation
void squareRoot() {
    printf("Welcome to Square Root Function\n\n");
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    if (num < 0) {
        printf("\nSquare Root of Negative Numbers does not exist.");
        return;
    } else {
        printf("\nThe Square Root of %lf is %lf.",num,pow(num,0.5));
    }
}

//function to return factorial of a number
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n < 0) {
        return -1;
    } else {
        return n * fact(n-1);
    }
}

//function for factorial operation
void factorial() {
    printf("Welcome to Factorial Function\n\n");
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    long long int fact1 = fact(num);
    if (fact1 == -1) {
        printf("\nFactorial of %d does not exist.",num);
    } else {
        printf("\nThe factorial of %d is %lld.",num,fact1);
    }
}

//function for permutation operation
void permutation() {
    printf("Welcome to Permutation Function\n\n");
    int n,r,permu;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    if (n >= 0 && r >= 0 && n >= r) {
        permu = fact(n)/fact(n-r);
        printf("\nThe permutation of %dP%d is %d",n,r,permu);
    } else {
        printf("\nThe permutation does not exist for the following inputs.");
    }
    
}

//fumction for combination operation
void combination() {
    printf("Welcome to Combination Function\n\n");
    int n,r,combi;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    if (n >= 0 && r >= 0 && n >= r) {
        combi = fact(n)/(fact(n-r)*fact(r));
        printf("\nThe combination of %dC%d is %d",n,r,combi);
    } else {
        printf("\nThe combination does not exist for the following inputs.");
    }
    
}


//function for basic operation function
void basicOperation() {
    printf("Welcome to Basic Operation Function\n\n");
    double num1,num2,result = 0;
    int operator;
    printf("Enter number 1 : ");
    scanf("%lf",&num1);
    printf("Enter number 2 : ");
    scanf("%lf",&num2);
    printf(
        "\nEnter which operation you want to do?\n"
        "1. Addition\n"
        "2. Substraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "\nEnter your choice : "
    );

    scanf("%d",&operator);

    switch (operator) {
        case 1 : {
            result = num1 + num2;
            break;
        }
        case 2 : {
            result = num1 - num2;
            break;
        }
        case 3 : {
            result = num1 * num2;
            break;
        }
        case 4 : {
            if (num2 == 0) {
                printf("Division by zero is undefined......");
                return;
            } else {
                result = num1 / num2;
            }
            break;
        }
        default : {
            printf("Enter a valid input........");
            return;
        }
    }
    printf("\nThe result is %lf",result);
}

//funtion for remainder operation
void remain() {
    printf("Welcome to Remainder Function\n\n");
    int numerator,denominator;
    printf("Enter the numberator : ");
    scanf("%d",&numerator);
    printf("Enter the denominator : ");
    scanf("%d",&denominator);
    if (denominator == 0) {
        printf("\nDividing by zero is not defined.");
    } else {
        printf("\nRemainder from dividing %d and %d is %d.",numerator,denominator,numerator % denominator);
    }
}

//function to return hcf of two number
int HCF(int num1,int num2) {
    //checking if the number is positive or not
    if (num1 < 0 || num2 < 0) {
        num1 = abs(num1);
        num2 = abs(num2);
    }
    int hcf = 1,min;
    if (num1 > num2) {
        min = num2;
    } else {
        min = num1;
    }
    for (int i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

//function for hcf operation
void hcf() {
    printf("Welcome to HCF Function\n\n");
    int num1,num2,hcf1;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    hcf1 = HCF(num1,num2);
    printf("\nThe HCF of %d and %d is %d.",num1,num2,hcf1);
}

//function for lcm operation
void lcm() {
    printf("Welcome to LCM Function\n\n");
    int num1,num2,hcf1,lcm1;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    hcf1 = HCF(num1,num2);
    lcm1 = (num1 * num2) / hcf1;
    printf("\nThe LCM of %d and %d is %d.",num1,num2,lcm1);
}

//function for factors operation
void factors() {
    printf("Welcome to Factors Function\n\n");
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("\nThe factors of %d is ",num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ",i);
        }
    }
}

//funtion to print a matrix
void printMatrix(int row,int col,int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

//function to input values from user in matrix 
void inputMatrix(int row,int col,int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element at row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

//function for matrix addition
void matrixAdd(int row,int col,int arr1[row][col],int arr2[row][col],int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

//function for matrix substraction
void matrixSub(int row,int col,int arr1[row][col],int arr2[row][col],int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

//function for matrix operation
void matrixOperation() {
    printf("Welcome to Matrix Operation\n\n");
    int row,col,choice;
    printf("Enter the no of rows of Matrix : ");
    scanf("%d",&row);
    printf("Enter the no of columns of Matrix : ");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col],result[row][col];
    clearScreen();
    printf("\nEnter the Elements of Matrix - 1\n");
    inputMatrix(row,col,arr1);
    clearScreen();
    printf("\nEnter the Elements of Matrix - 2\n");
    inputMatrix(row,col,arr2);
    clearScreen();
    printf("\nWhich Matrix Operation you want to do?\n1.Adding two Matrix\n2.Substracting two Matrix\nEnter you choice : ");
    scanf("%d",&choice);
    if (choice == 1) {
        matrixAdd(row,col,arr1,arr2,result);
    } else if (choice == 2) {
        matrixSub(row,col,arr1,arr2,result);
    } else {
        printf("\nEnter valid choice........");
        return;
    }
    clearScreen();
    printf("\nThe Resultant Matrix is \n");
    printMatrix(row,col,result);
}

//function for matrix multiplication
void matrixMul(int row1,int col1,int arr1[row1][col1],int row2,int col2,int arr2[row2][col2],int result[row1][col2]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            int sum = 0;
            for (int k = 0; k < col1; k++) {
                sum += arr1[i][k] * arr2[k][j]; 
            }
            result[i][j] = sum;
        }
    }
}

//function for matrix multiplication operation
void matrixMultiplication() {
    printf("Welcome to Matrix Multiplication\n\n");
    int row1,col1,row2,col2;
    printf("Enter the no of rows of Matrix-1 : ");
    scanf("%d",&row1);
    printf("Enter the no of columns of Matrix-1 : ");
    scanf("%d",&col1);
    printf("\nEnter the no of rows of Matrix-2 : ");
    scanf("%d",&row2);
    printf("Enter the no of columns of Matrix-2 : ");
    scanf("%d",&col2);
    if (col1 == row2) {
        int arr1[row1][col1],arr2[row2][col2],result[row1][col2];
        clearScreen();
        printf("\nMatrix Multiplication is possible for the given inputs...\n");
        printf("\nEnter the Elements of Matrix - 1\n");
        inputMatrix(row1,col1,arr1);
        clearScreen();
        printf("\nEnter the Elements of Matrix - 2\n");
        inputMatrix(row2,col2,arr2);
        clearScreen();
        matrixMul(row1,col1,arr1,row2,col2,arr2,result);
        printf("\nThe Resultant Matrix is \n");
        printMatrix(row1,col2,result);
    } else {
        printf("\nThe Matrix Multiplication is not possible for the given inputs of rows and columns");
        return;
    } 
}

void quadraticEquation() {
    printf("Welcome to Matrix Operation\n\n");
    double a,b,c,d;
    printf("Enter all inputs in the form ax^2 + bx + c = 0\n");
    printf("\nEnter coefficient of x^2 (a) : ");
    scanf("%lf",&a);
    printf("Enter coefficient of x (b) : ");
    scanf("%lf",&b);
    printf("Enter constant term (c) : ");
    scanf("%lf",&c);
    clearScreen();
    printf("\nYour equation is %.2lfx^2 + %.2lfx + %.2lf = 0",a,b,c);
    d = (b*b - (4*a*c));
    if (d > 0) {
        double root1,root2;
        printf("\nThe roots of the equation exist and unique.\n");
        root1 = (-b + sqrt(d))/2*a;
        root2 = (-b - sqrt(d))/2*a;
        printf("\nThe roots are %.2lf and %.2lf.",root1,root2);
    } else if (d == 0) {
        double root;
        printf("\nThe roots of the equation exist and equal.\n");
        root = (-b + sqrt(d))/2*a;
        printf("\nThe root is %.2lf.",root);
    } else {
        printf("\nThe roots of the equation does not exist.");
    }
}


int main() {
    bool isContinue = false;
    do {
        int choice;

        //showing the user which operation we have
        printf(
            "\nChoose a number from the following list of operation\n"
            "\n"
            "01. Basic Operation (+,-,*,/)\n"
            "02. Remainder\n"
            "03. LCM (Least Common Multiple)\n"
            "04. HCF (Highest Common Factor)\n"
            "05. Factors of a number\n"
            "06. Power (a^b)\n"
            "07. Square Root of a number\n"
            "08. Modulus of a number (|n|)\n"
            "09. Inverse of a number (1/a)\n"
            "10. Logarithm (Base 10, Natural Log)\n"
            "11. Exponential (e^n)\n"
            "12. Average of n numbers\n"
            "13. Round off to n decimal points\n"
            "14. Factorial (n!)\n"
            "15. Permutation (nPr)\n"
            "16. Combination (nCr)\n"
            "17. Quadratic Equation\n"
            "18. Trigonometry (sinx, cosx , tanx)\n"
            "19. Inverse Trigonometry (sin^-1, cos^-1, tan^-1)\n"
            "20. Matrix Operation (Addition, Substraction)\n"
            "21. Matrix Multiplication\n"
            "22. Conversion of Number System (Binary, Decimal, Hexadecimal etc)\n"
            "23. Complex Number Operation (Addition, Substraction, Modulus)\n"
            "\n"
            "Enter your choice : "
        );
        
        //storing user input
        scanf("%d",&choice);

        printf("\n");

        clearScreen();

        //checking the user input
        switch(choice) {
            case 1 : {
                basicOperation();
                break;
            }
            case 2 : {
                remain();
                break;
            }
            case 3 : {
                lcm();
                break;
            }
            case 4 : {
                hcf();
                break;
            }
            case 5 : {
                factors();
                break;
            }
            case 6 : {
                power();
                break;
            }
            case 7 : {
                squareRoot();
                break;
            }
            case 8 : {
                //modulus();
                break;
            }
            case 9 : {
                //inverse();
                break;
            }
            case 10 : {
                //logarithm();
                break;
            }
            case 11 : {
                //exponential();
                break;
            }
            case 12 : {
                //average();
                break;
            }
            case 13 : {
                //roundOff();
                break;
            }
            case 14 : {
                factorial();
                break;
            }
            case 15 : {
                permutation();
                break;
            }
            case 16 : {
                combination();
                break;
            }
            case 17 : {
                quadraticEquation();
                break;
            }
            case 18 : {
                //trigonometry();
                break;
            }
            case 19 : {
                //inverseTrigonometry();
                break;
            }
            case 20 : {
                matrixOperation();
                break;
            }
            case 21 : {
                matrixMultiplication();
                break;
            }
            case 22 : {
                //conversion();
                break;
            }
            case 23 : {
                //complexNumber();
                break;
            }
            default : {
                clearScreen();
                printf("You have Entered an invalid input!!!!!!..........\n");
            }
        }
        
        printf("\n");
        //checking whether the user want to continue 
        int shouldContinue;
        printf("\nDo you want to do continue to other operation (1 for Yes and 2 for No) : ");
        scanf("%d",&shouldContinue);

        clearScreen();

        //checking the user input
        if (shouldContinue == 1) {
            isContinue = true;
        } else if (shouldContinue == 2) {
            isContinue = false;
            printf("\nThanks for using our Scientific Calculator!!!!!\nPlease Visit Us Again.......\n");
        } else {
            isContinue = false;
            printf("\nYou have entered an invalid input.\nExiting the Scientific Calculator........\n");
        }
    } while (isContinue);

    //preventing the terminal to exit until user press enter
    getchar();
    getchar();

    return 0;
}