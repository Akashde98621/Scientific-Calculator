#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

//function to clear screen
void clearScreen() {
    system("clear");
}

void remain() {
    printf("Welcome to Remainder Function\n\n");
    int numerator,denominator;
    printf("Enter the numberator : ");
    scanf("%d",&numerator);
    printf("Enter the denominator : ");
    scanf("%d",&denominator);
    if (denominator == 0) {
        printf("Dividing by zero is not defined.");
    } else {
        printf("Remainder from dividing %d and %d is %d.",numerator,denominator,numerator % denominator);
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
                //basicOperation();
                break;
            }
            case 2 : {
                remain();
                break;
            }
            case 3 : {
                //lcm();
                break;
            }
            case 4 : {
                //hcf();
                break;
            }
            case 5 : {
                //factor();
                break;
            }
            case 6 : {
                //power();
                break;
            }
            case 7 : {
                //squareRoot();
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
                //factorial();
                break;
            }
            case 15 : {
                //permutation();
                break;
            }
            case 16 : {
                //combination();
                break;
            }
            case 17 : {
                //quadraticEquation();
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
                //matrixOperation();
                break;
            }
            case 21 : {
                //matrixMultiplication();
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

    return 0;
}