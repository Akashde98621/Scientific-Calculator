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

//function for modulus operation
void modulus() {
    printf("Welcome to Modulus Function\n\n");
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    printf("\nThe modulus of %.2lf is %.2lf.",num,fabs(num));
}

//function for inverse operation
void inverse() {
    printf("Welcome to Inverse Function\n\n");
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    if (num == 0) {
        printf("\nInverse of Zero is undefined.");
        return;
    } else {
        printf("\nThe inverse of %.2lf is %.2lf.",num,pow(num,-1));
    }
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

//function for average operation
void average() {
    printf("Welcome to Average Function\n\n");
    double num,sum = 0,aver = 0;
    int count = 0;
    bool isContinue = true;
    while (isContinue) {
        int choice;
        printf("Current Sum = %.2lf\nCurrentCount = %d\nCurrent Average =%.2lf\n",sum,count,aver);
        printf("\nEnter a number : ");
        scanf("%lf",&num);
        count++;
        sum += num;
        aver = sum/count;
        printf("\nWant to add more numbers?\n1.Yes\n2.No\nEnter your choice : ");
        scanf("%d",&choice);
        clearScreen();
        if (choice == 1) {
            continue;
        } else if (choice == 2) {
            isContinue = false;
        } else {
            printf("\nYou have entered an invalid choice.......");
            return;
        }
    }
    printf("\nThe average of all the numbers input is %.2lf",aver);
}

//function for roundoff operation
void roundOff() {
    printf("Welcome to Roundoff Function\n\n");
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    printf("\nThe modified number is %lf",round(num));
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

//function for trigonometry operation
void trigonometry() {
    printf("Welcome to Trigonometry Function\n\n");
    int choice;
    double degree,radian;
    printf("Enter angle in degree : ");
    scanf("%lf",&degree);
    radian = (degree * M_PI)/180;
    printf(
        "\nWhich trigonometric function you want to find?\n"
        "1. sin(x)\n"
        "2. cos(x)\n"
        "3. tan(x)\n"
        "Enter your choice : "
    );
    scanf("%d",&choice);
    clearScreen();
    switch (choice) {
        case 1 : {
            printf("\nsin(%lf) = %lf",degree,sin(radian));
            break;
        }
        case 2 : {
            printf("\ncos(%lf) = %lf",degree,cos(radian));
            break;
        }
        case 3 : {
            printf("\ntan(%lf) = %lf",degree,tan(radian));
            break;
        }
        default : {
            printf("\nEnter valid input......");
        }
    }
}

//function for inverse trigonometry operation
void inverseTrigonometry() {
    printf("Welcome to Inverse Trigonometry Function\n\n");
    int choice;
    printf(
        "Which inverse trigonometric function you want to find?\n"
        "1. sin^-1(x)\n"
        "2. cos^-1(x)\n"
        "3. tan^-1(x)\n"
        "Enter your choice : "
    );
    double x;
    scanf("%d",&choice);
    clearScreen();
    if (choice == 1 || choice == 2) {
        printf("Enter any integer from -1 to 1 : ");
        scanf("%lf",&x);
        if (x >= -1 || x <= 1) {
            if (choice == 1) {
                printf("\nsin^-1(%lf) = %lf radians",x,asin(x));
            } else {
                printf("\ncos^-1(%lf) = %lf radians",x,acos(x));
            }
        } else {
            printf("\nEnter valid range......");
            return;
        }
    } else if (choice == 3) {
        printf("Enter any real integer : ");
        scanf("%lf",&x);
        printf("\ntan^-1(%lf) = %lf radians",x,atan(x));
    } else {
        printf("\nEnter valid choice.....");
    }
}

//function for hyperbolic function operation
void hyperbolic() {
    printf("Welcome to Inverse Trigonometry Function\n\n");
    int choice;
    double x;
    printf("Enter x : ");
    scanf("%lf",&x);
    printf(
        "Which trigonometric function you want to find?\n"
        "1. sinh(x)\n"
        "2. cosh(x)\n"
        "3. tanh(x)\n"
        "Enter your choice : "
    );
    scanf("%d",&choice);
    clearScreen();
    switch (choice) {
        case 1 : {
            printf("\nsinh(%lf) = %lf",x,sinh(x));
            break;
        }
        case 2 : {
            printf("\ncosh(%lf) = %lf",x,cosh(x));
            break;
        }
        case 3 : {
            printf("\ntanh(%lf) = %lf",x,tanh(x));
            break;
        }
        default : {
            printf("\nEnter valid input......");
        }
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

//function for permutation operations
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

//function for logarithm ooperation
void logarithm() {
    printf("Welcome to Logartithm Function\n\n");
    int choice;
    double num;
    printf("1. Natuaral log ln(x)\n2. Log base 2 log2(x)\n3. Log base 10 log10(x)\n\nEnter your choice : ");
    scanf("%d",&choice);
    clearScreen();
    printf("Enter number whose log you want to find : ");
    scanf("%lf",&num);
    if (num < 0) {
        printf("\nLog of negative numbers does not exist.");
        return;
    } else if (num == 0) {
        printf("\nLog of zero is infinity.");
        return;
    } else {
        if (choice == 1) {
            printf("\nThe Natural log of %.2lf is %lf",num,log(num));
        } else if (choice == 2) {
            printf("\nThe log base 2 of %.2lf is %lf",num,log2(num));
        } else if (choice == 3) {
            printf("\nThe log base 10 of %.2lf is %lf",num,log10(num));
        } else {
            printf("\nPlease enter valid choice.......");
            return;
        }
    }
}

//function for exponential function
void exponential() {
    printf("Welcome to Exponential Function\n\n");
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    printf("\ne^%lf is %lf",num,exp(num));
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

//function for quadratic equation operation
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

//function for complex number operation
void complexNumber() {
    printf("Welcome to Complex Operation\n\n");
    int choice;
    printf("Which operation you want to perform?\n"
        "1. Addition of two complex number\n"
        "2. Substraction of two complex number\n"
        "3. Modulus of a complex number.\n"
        "\nEnter your choice : "
    );
    scanf("%d",&choice);
    clearScreen();
    if (choice == 1 || choice == 2) {
        double a1,b1,a2,b2;
        printf("Enter your inputs in the form of a + ib\n");
        printf("\nEnter first complex number\n");
        printf("Enter real part (a1) : ");
        scanf("%lf",&a1);
        printf("Enter imaginary part (b1) : ");
        scanf("%lf",&b1);
        clearScreen();
        printf("Enter your inputs in the form of a + ib\n");
        printf("\nEnter second complex number\n");
        printf("Enter real part (a2) : ");
        scanf("%lf",&a2);
        printf("Enter imaginary part (b2) : ");
        scanf("%lf",&b2);
        clearScreen();
        printf("The first complex number is %.2lf + %.2lfi\n",a1,b1);
        printf("The second complex number is %.2lf + %.2lfi\n",a2,b2);
        if (choice == 1) {
            printf("\nThe addition of the two given complex number is %.2lf + %.2lfi",a1+a2,b1+b2);
        } else {
            printf("\nThe difference of the two given complex number is %.2lf + %.2lfi",a1-a2,b1-b2);
        }
    } else if (choice == 3) {
        double a,b;
        printf("Enter your inputs in the form of a + ib\n");
        printf("\nEnter first complex number\n");
        printf("Enter real part (a) : ");
        scanf("%lf",&a);
        printf("Enter imaginary part (b) : ");
        scanf("%lf",&b);
        clearScreen();
        printf("The given complex number is %lf + %lfi\n",a,b);
        double modulus = sqrt(pow(a,2) + pow(b,2));
        printf("\nThe modulus of given complex equation is %.2lf",modulus);
    }
}

//main
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
            "13. Round off to nearest integer\n"
            "14. Factorial (n!)\n"
            "15. Permutation (nPr)\n"
            "16. Combination (nCr)\n"
            "17. Quadratic Equation\n"
            "18. Trigonometry (sinx, cosx , tanx)\n"
            "19. Inverse Trigonometry (sin^-1, cos^-1, tan^-1)\n"
            "20. Matrix Operation (Addition, Substraction)\n"
            "21. Matrix Multiplication\n"
            "22. Hyperbolic Function\n"
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
                modulus();
                break;
            }
            case 9 : {
                inverse();
                break;
            }
            case 10 : {
                logarithm();
                break;
            }
            case 11 : {
                exponential();
                break;
            }
            case 12 : {
                average();
                break;
            }
            case 13 : {
                roundOff();
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
                trigonometry();
                break;
            }
            case 19 : {
                inverseTrigonometry();
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
                hyperbolic();
                break;
            }
            case 23 : {
                complexNumber();
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
    printf("\nPress any key to exit..........");
    //preventing the terminal to exit until user press enter
    getchar();
    getchar();

    return 0;
}