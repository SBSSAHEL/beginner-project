// #include <stdio.h>
// #include <stdbool.h> //if we use boolian datatype, we have to call this library

// int main(void) {
    
//     // int a = 20 ;
//     // float CGPA =  4.29;
//     // double bonus = 3333.33333;
//     // char name[] = "sahel"; // i have to use '[]' for long character data type. 
//     // bool single = true ;
//     // char sec = 'A';

//     // printf("A = %d\n",a);
//     // printf("GRADE = %f\n",CGPA);
//     // printf("bonus = %lf\n",bonus);
//     // printf("name = %s\n", name);           //for multiple or more than one character, function specefiar is %s
//     // printf("single: %d\n",single);
//     // printf("Sec= %c\n",sec);             //for single character, function specefiar is %c

//     // printf("A = %d\n CGPA = %f bonus = %lf\n name = %s\n ",a, CGPA, bonus , name);        //this way data can output in one line or one 'printf' function.


//     // //variable

//     // int num;
//     // float cgpa;
//     // char department;
    
//     // printf ("enter the number:");
//     // scanf(" %d",&num); //intputing data

//     // printf("enter the CGPA & department:");
//     // scanf(" %f  %c",&cgpa, &department); //inputing multiple data at once 

//     // //printing input:

//     // printf("Number: %d\n", num);

//     // printf("CGPA %f\n",cgpa);

//     // printf("Department %c\n", department);
    
//     /*ASCII stands for American Standard Code for Information Interchange. It's a character encoding standard used to represent text in computers, telecommunications equipment, and other devices*/

//     // char ascii = 'A'; //intputing character
//     // printf("ASCII num: %d", ascii); //showing the inputed characters ASCII value

//     //OPERATOR:

// //      int b = 5 , d = 25 , e= 100;
// //     float a = 20.5;
// //     float add, sub, div ; // declare as variable

// //     // Perform calculations

// //     add = a + b; //addition
// //     sub = a - b; //subtraction
// //     div = a / b; //division

// //     // Output all results in a single printf

// //     printf(" Addition (a + b): %.2f\n Subtraction (a - b): %.2f\n Division (a / b): %.2f  \n  ", add, sub, div);

// //   // increment & decrement operator
// //     printf(" increment(++d): %d \n decrement(--e): %d, %.3f\n", ++d, --e, --a );

// //   //assignment operator
    
//   //     int c ;
//   //     float x ;
//   //  //integer
//   //     c = b ;
//   //     c+= b ;
//   //     c*= b ;

//   //     printf(" c(=)= %d\n c(+=)= %d\n c(*=)= %d\n ", c);
//   //  //float 1
//   //     x = a ; 
//   //     x+= a ;
//   //     x*= a ;
    
// //     printf(" x(=)= %.2f\n x(+=)= %.2f\n x(*=)= %.2f\n ", x);


 
//  /*the code below⬇️ is corrected code of ⬆️upper code of '🏷️operator' by CHATgpt🤖 */


//     // int b = 5, d = 25, e = 100;
//     // float a = 20.5;
//     // float add, sub, div; // declare variables

//     // // Perform calculations
//     // add = a + b; // addition
//     // sub = a - b; // subtraction
//     // div = a / b; // division

//     // // Output all results in a single printf
//     // printf("Addition (a + b): %.2f\nSubtraction (a - b): %.2f\nDivision (a / b): %.2f\n", add, sub, div);

// // // Increment & Decrement Operators
//     // printf("Increment (++d): %d\n", ++d); // Pre-increment increases d by 1 before using it
//     // printf("Decrement (--e): %d\n", --e); // Pre-decrement decreases e by 1 before using it

//     // // Note: Avoid modifying `a` here if you plan to reuse it
//     // printf("Decrement (--a): %.2f\n", --a);

// // // Assignment Operators
//     // int c;
//     // float x;

//     // // Integer calculations
//     // c = b;
//     // printf("c(=): %d\n", c);

//     // c += b;
//     // printf("c(+=): %d\n", c);

//     // c *= b;
//     // printf("c(*=): %d\n", c);

//     // // Float calculations
//     // x = a; // Assign the current value of a
//     // printf("x(=): %.2f\n", x);

//     // x += a; // Add a to x
//     // printf("x(+=): %.2f\n", x);

//     // x *= a; // Multiply x by a
//     // printf("x(*=): %.2f\n", x);

// // Relational operators:

//     // int a = 5, b = 4 , c = 2 , results ;
    
//     // // printf("a==b: %d\n",a==b); //equel to 
//     // // printf("a!=b:%d\n", a!=b); //not equel to 
//     // // printf("a>b:%d\n",a>b); //greater than 
//     // // printf("a<b:%d\n",a<b);//less than
//     // // printf("a>=b:%d\n",a>=b); //greater than or equel to


// // //Logical Operator

// // //AND:&&; OR:||; NOT:!;

// // //AND 

//     // if (a<b && b<c ) {
//     //     printf("condition true ");
//     // } else{
//     //     printf("false\n");
//     // }

// // //OR
//     // if (a>b || b<c) {
//     //     printf("true\n");
//     // } else{
//     //     printf("false\n");
//     // }

//     // //not
//     // if (!(a>b)){
//     //     printf("true\n");
    
//     // }
//     // else{
//     //     printf("false\n");
//     // }



// //size of variable
//     //  int inttype ;
//     //  float fltype ;
//     //  char chartype ;

//     //  printf("int size: %zu\nfloat size:%zu\nchar size:%zu\n",sizeof(inttype),sizeof(fltype),sizeof(chartype));

    
// /* Q1:C program to print an integer, float, double & character value entered by the user
//     */
//     // char name[50] ;
//     // int roll ;
//     // float cgpa ;
//     // double Tmark ;

//     // printf("NAME:");
//     // scanf(" %[^\n]",&name);

//     // printf("ROLL:");
//     // scanf("%d",&roll);

//     // printf("CGPA:");
//     // scanf("%f",&cgpa);

//     // printf("TOTAL MARK:");
//     // scanf("%lf",&Tmark);

//     // printf("NAME:%s\n",name);
//     // printf("ROLL:%d\n",roll);
//     // printf("CGPA:%f\n",cgpa);
//     // printf("MARK:%lf\n",Tmark);

// /*C program to find ASCII value of a character entered by the user*/
//     // char ch;

//     // // Taking input from the user
//     // printf("Enter a character: ");
//     // scanf("%c", &ch);

//     // // Printing ASCII value
//     // printf("ASCII value of '%c' is: %d\n", ch, ch);

 
// /* IF/ Nested if /Else statement*/

//     // int A;
//     // printf("enter a number:");
//     // scanf("%d",&A);

//     // if (A<0)
//     // {
//     //     printf("the number is negetive.");
//     // }
//     // else if (A>0){
//     //     printf("the number is positive.");
//     // }
//     // else
//     // {
//     //     printf(" you  enterd zero.");
//     // }
    
    
//     //  int num1 , num2 , add , sub ;
//     // printf("enter first number:");
//     // scanf("%d",&num1);
//     //  printf("enter second number:");
//     // scanf("%d",&num2);

//     // add = num1+num2;
//     // sub= num1-num2;
//     // printf("addition is %d\nand subtraction is %d\n",add,sub);

//     // //Nested if 
//     // if (add>=sub)
//     // {
//     //     if (add==sub)
//     //     {
//     //         printf("result: %d=%d\n",add,sub);
//     //     }
//     //     else
//     //     {
//     //         printf("result: %d>%d\n",add,sub);
//     //     }
        
//     // }
//     // else
//     // {
//     //     printf("result: %d<%d\n",add,sub);
//     // }
    

    




// //A 'variable' is a named container in 'memory' that stores 'data'.

//     return 0;
// }

       //for loop.

// #include<stdio.h>
// #include<stdbool.h>

// int main() {
//     int i;

//     for ( i = 1; i <=10; ++i)
//     {
//         printf("%d\n",i);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main() {

//     int num, i , sum = 0;

//     printf("enter the positive number:");
//     scanf("%d", &num);

//     for ( i = 0; i <=num; ++i)
//     {
//         sum+= i; //+= | a += b | a = a+b 
//     }
//     printf("Sum= %d\n",sum);

//     return 0;
// }

      //While loop

    //   #include <stdio.h>

    //   int main() {
    //       int i = 1, num;         // Initialize i and declare num
      
    //       printf("Type the number: ");  
    //       scanf("%s ", &num);            // User inputs the number
      
    //       while (i <= num) {             // Loop from 1 to num
    //           printf("%d\n", i);             // Print the current value of i
    //           ++i;                 // Increment i by 1
    //       }
      
    //       return 0;
    //   }


          //do...while loop
    
        //   #include<stdio.h>

        //   int main() {
        //       int num , pass = 12345 ;
        //       do{
        //           printf("Enter the Pa$$:");
        //           scanf("%d",&num);
      
        //       }
        //       while (num != 12345);
        //       {
        //           printf("pass:%d",pass);
        //       }
              
        //       return 0;
        //   }

       //Pass varificition system using do...while Loop
    
    //    #include<stdio.h>

    //    int main() {
    //        int num , pass = 12345 ;
    //        do{
    //            printf("Enter the Pa$$:");
    //            scanf("%d",&num);
   
    //        }
    //        while (num != 12345);
    //        {
    //            printf("pass:%d",pass);
    //        }
           
    //        return 0;
    //    }


       //Break Statement
    
    // #include<stdio.h>

    // int main() {
        
    //     for (int i = 0; i <=10; i++)
    //     {
    //         if (i==6)
    //         {
    //             break;
    //         }
    //         printf("%d\n",i);
    //     }
        
    //     return 0;
    // }

         //contine
    // #include<stdio.h>
    
    // int main() {
        
    //     for (int i = 0; i <=10; i++)
    //     {
    //         if (i==6)
    //         {
    //             continue;
    //         }
    //         printf("%d\n",i);
    //     }
        
    //     return 0;
    // }

          //switch statement

    // #include<stdio.h>

    // int main() {
    //     char op;
    //     double n1 , n2 ;

    //     printf("enter an Operator(+ , - , / , *):");
    //     scanf("%c", &op);

    //     printf("enter two operand:");
    //     scanf("%lf %lf",&n1 , &n2); 

    //     switch (op)
    //     {
    //         case '+':
    //         printf("Result: %.1lf\n", n1 + n2);
    //         break;
    //     case '-':
    //         printf("Result: %.1lf\n", n1 - n2);
    //         break;
    //     case '*':
    //         printf("Result: %.1lf\n", n1 * n2);
    //         break;
    //     case '/':
    //     if (n2 != 0)
    //     printf("Result: %.1lf\n", n1 / n2);
    // else
    //     printf("Error! Division by zero is not allowed.\n");
    // break;
        
    //     default:
    //         printf("Invalid choice!\n");

    //         break;
    //     }
    //     return 0;
    // }

                  //GOTO statement
    // #include <stdio.h>

    //     int main() {
    //         char op;
    //         double n1, n2;
           
    //         jump:
    //            printf("Enter an Operator (+ , - , / , *): ");
    //            scanf(" %c", &op);                   /*Added space before %c to ignore newline  ||  scanf("%c", &op); reads the leftover \n from the previous input || ✔️🙋‍♂️Solution: Use a space before %c: scanf(" %c", &op); || The space ignores any leftover whitespace or newline characters in the buffer. */


           
    //            printf("Enter two operands: ");
    //            scanf("%lf %lf", &n1, &n2); 
           
    //         switch (op) {
    //                case '+':
    //                    printf("Result: %.1lf\n", n1 + n2);
    //                    break;
    //                case '-':
    //                    printf("Result: %.1lf\n", n1 - n2);
    //                    break;
    //                case '*':
    //                    printf("Result: %.1lf\n", n1 * n2);
    //                    break;
    //                case '/':
    //                    if (n2 != 0)
    //                        printf("Result: %.1lf\n", n1 / n2);
    //                    else
    //                        printf("Error! Division by zero is not allowed.\n");
    //                    break;
    //             default:
    //                    printf("Invalid choice! Try Again.\n");
    //                    goto jump;  // GOTO statement to restart input
    //            }
    //            return 0;
    //     }
           

       //control flow statement

// #include<stdio.h>
// int main() {
//     int num;
//     st:
//     printf("Enter a number:");
//     scanf(" %d",&num);

//     if (num%2==0 )
//     {
//         printf("the number is even\n");
//     }
//     else
//     {
//        printf("the number is odd\n");
//     }
//     goto st;    // GOTO statement to restart input

//     return 0;
// }

         //C Programming Vowel & ASCII  code check with If Else

// #include<stdio.h>

// int main() {
//    char c;
//    st:
//    printf("enter a character:");
//    scanf(" %c",&c);

//    if (c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U')
//    {
//       printf("%c is vowel\n",c);
//       printf("ASCII code of the character:%d\n",c);
//    }
//    else
//    {
//       printf("%c is consonent\n",c);
//       printf("ASCII code of the character:%d\n",c);
   
//    }

//    goto st;
   
   
//    return 0;
// }

      //            //C Programming Vowel check with switch statement
      // #include<stdio.h>

      // int main() {

      //    char ch;
      //    st:
      //    printf("Enter a Character:");
      //    scanf(" %c",&ch);

      //    switch (ch)
      //    {
      //    case 'a': case 'A':
      //    case 'e': case 'E':
      //    case 'i': case 'I':
      //    case 'o': case 'O':
      //    case 'u': case 'U':
         
      //    printf("%C IS VOWEL. ^_^\n",ch);
      //       break;
         
      //    default:
      //    printf("%c IS CONSONENT. ^_~\n",ch);
      //       break;
      //    }

      //    goto st;


      //    return 0;
      // }

             //finding the largest number.
   
   // #include<stdio.h>

   // int main() {
   //    int a, b, c;

   //    printf("enter three number:");
   //    scanf("%d %d %d", &a, &b, &c);

   //    if (a>b && a>c)
   //    {
   //       printf("%d is largest.",a);
   //    }
   //    else if (b>c && b>a)
   //    {
   //       printf("%d is largest.",b);
   //    }
   //    else
   //    {
   //       printf("%d is largest.",c);
   //    }
      


   //    return 0;
   // }

           //problem solving
   
   // #include<stdio.h>

   // int main() {

   //    int a , b, c ;

   //    st: 
   //    printf("Enter the first number:");
   //    scanf("%d",&a);
   //    printf("Enter the second number:");
   //    scanf("%d",&b);
   //    printf("Enter the third number:");
   //    scanf("%d",&c);

   //    if (a>b)
   //    {
   //       if (a>c)
   //       {
   //          printf("%d is largest.\n",a);
   //       }

   //       else
   //       {
   //          if (b>c)
   //          {
   //             printf("%d is largest.",b);
   //          }
            
   //          else
   //          {
   //             printf("%d is largest.\n",c);
   //          }
            
   //       }
         
         
   //    }

   //    else
   //       {
   //             printf("%d is largest.\n",c);
   //       }
         
   //    goto st;

   //    return 0;
   // }

//    #include <stdio.h>

// int main() {
//     int a, b, c;

// st:
//     // Taking input
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);

//     // Finding the largest number
//     if (a >= b && a >= c) {
//         printf("%d is the largest.\n", a);
//     } 
//     else if (b >= a && b >= c) {
//         printf("%d is the largest.\n", b);
//     } 
//     else {
//         printf("%d is the largest.\n", c);
//     }

//     // Restart input using GOTO
//     goto st;

//     return 0;
// }



#include <stdio.h>

int main() {
    char n[100];

    scanf("%s",n);

    printf("Hello, %s\n",n);

    return 0;
}