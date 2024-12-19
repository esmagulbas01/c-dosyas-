/*
#include <stdio.h>
int main() {
    printf("Hello,Mars!\n");               EXAMPLE " 1 "
    return 0;
}
// YORUM

*/




/*
#include <stdio.h>
int main() {
    int x = 5;
    int y = 10;
    printf("%d\n" ,x + y);
    return  0;
}
*/





/*
#include <stdio.h>
int main (){
    //int number1 = 10;
    //int number2 = 2;
    int number1 = 10, number2 = 2;
    int sum = number1 + number2;
    printf("sumation: %d,: %d\n",sum);
    return 0;
}
*/





/*
#include <stdio.h>
int main () {
    int number1 = 10;
    int number2 = 2;
    int sum = number1 + number2;
    int modula = number1 % number2;
    printf("sumation: %d,: %d\n",sum,modula);
    return 0;
}
*/





/*

#include <stdio.h>
int main () {
    int number1 ,number2;
    printf("please give me number1:");
    scanf("%d",&number1);
    printf("please give me number2:");                                EXAMPLA " 6 "
    scanf("%d",&number2);
    int sum = number1 + number2;
    int mod = number1 % number2;
    printf("summation : %d, and modula : %d\n ",sum,mod);
    return 0 ;
}
*/




/*
#include <stdio.h>
int main () {
    int a = 5;
    int b = a++;
    int c = ++a;
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);
    return 0;
}
*/














/*
#include <stdio.h>
int main () {
    int tamsayý = 5;
    printf("int:\t%d\n",tamsayý);
    char karakter = 'hello';
    printf("char:\t%c\n",karakter);
    float ondalýk = 0.53;
    printf("float:\t%f\n",ondalýk);
    return 0;
}

*/





/*

#include <stdio.h>
int main () {

    char name [30];                                                 EXAMPLE " 2 "
    printf("enter a name:");
    scanf("%s",&name);
    printf("your name is %s",name);
    return 0;
}

*/



/*

#include <stdio.h>
int main () {

                                                                        EXAMPLE " 3 "
    char lecture [30]="intro to programming";
    printf("your lecture is %s\n",lecture);
    return 0;
}

*/





/*

#include <stdio.h>
int main () {
    int number1 = 21;
    printf("%d\n",number1);                          EXAMPLE " 4 "
    return 0;
}

*/




/*

#include <stdio.h>;
int main () {
    float number2 = 2.50;
    printf("%f\n",number2);                             EXAMPLE " 5 "
    return 0;
}

*/




/*
#include <stdio.h>
int main () {
    int sum,sub,multi,x,y,mod;
    float div;
    x=5;
    y=2;
    sum=x+y;
    sub=x-y;                                                          EXAMPLE " 7 "
    multi=x*y;
    div=x/y;
    mod=x%y;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",multi);
    printf("%f\n",div);
    printf("%d\n",mod);
    return 0;
}
*/




/*
#include <stdio.h>
int main () {
    for (int i=1;i<=101;i+=2){                                  example8
            printf("%d\n",i);
    }
    return 0;
}
*/







/*

#include <stdio.h>
int main (){

    for (int i = 1; i < 101; i++){
            if(i % 2 != 0){
                    printf("%d\n",i);               example 9
            }
    }
    return 0;

}

*/








/*
#include <stdio.h>
int main (){
    int i;
    for(i=0;i<101;i++){
            if(i % 2!=0){
                    continue;          example 10
            }
            printf("%d\n\n"i);
    }
    return 0;
}

*/



/*

#include <stdio.h>
int main(){
    int i;
    while (i<100){
            printf("%d\n",i);                      example 11
            i = i+2;
    }
    return 0;
}

*/



/*

#include <stdio.h>
int main(){
    int number = 0;
    while(1){
        if(number % 2 == 0){
                printf("%d\n",number);                                    example 12
        }
        number = number +1;
        if (number == 101){
                break;
        }
    }
    return 0;
}

*/




/*
#include <stdio.h>
int main(){
    int number = 0;
    while(number<=100){
            if(number % 2 != 0 ){
                    printf("number: %d\n", number);                    example 13
            }
            number +=1;
    }
    return 0;
}

*/



/*

#include <stdio.h>
#include <string.h>

int main() {
    char *students[] = {"Ahmet", "Onur", "Mehmet", "Enes", "Oğuz"};
    int n = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i], "Mehmet") == 0) {
            printf("%s : 100\n", students[i]);
        } else {
            printf("%s : 50\n", students[i]);
        }
    }

    return 0;
}
*/










/*
#include <stdio.h>

int main() {
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            for (int z = 1; z < 4; z++) {
                printf("(%d, %d, %d) ", i, j, z);                   example 14
            }
        }
        printf("\n");
    }
    return 0;
}


*/





/*
#include <stdio.h>
int main(){
    for(int i=1;i<5;i++){
            for(int j=1;j<5;j++){
                    printf("%d x %d = %d\n",i,j,i*j);                           example 15
            }
            printf("\n");
    }
    return 0;
}

*/











/*
#include <stdio.h>
int factorialFor(int number);

int main(){
    int number = 6;
    printf("factorial of %d is %d\n",number,factorialFor(number));
    return 0;
}                                                                                  example 16 for ıle factorial

int factorialFor(int number){
    if (number<0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    for (int i = 1;i<=number;i++){
        result *= i;
    }
    return result;
}

*/



/*
#include <stdio.h>
int factorialWhile(int number);

int main(){
    int number = 5;
    printf("factorial of %d is %d\n",number,factorialWhile(number));
    return 0;
}

int factorialWhile(int number){                                                 example 17   while ıle factorial
    if (number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    while (number > 0){
        result = result * number;
        number--;
    }
    return result;
}
*/










/*
#include <stdio.h>
int factorialRecursive(int number);
int main(){
    int number = 5;
    printf("factorial of %d is %d\n",number,factorialRecursive(number));
    return 0;                                                                                         example 18 recursive ıle factorial
}
int factorialRecursive(int number){
    if(number == 0 || number == 1){
        return 1;
    }
    return number * factorialRecursive(number - 1);
}
*/








/*

#include <stdio.h>
int fibonacciFor(int number);
int main(){
    int number = 7;
    printf("fibonacci number at position %d is %d\n",number,fibonacciFor(number));
    return 0;
}                                                                                                         example 19   for ıle fibonacci
int fibonacciFor(int number){
    int first = 1, second =1,result = 0;
    if(number == 1 || number == 2){
        return 1;
    }
    for (int i = 3; i<=number;i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}
*/







/*

 #include <stdio.h>
 int fibonacciWhile(int number);
 int main(){
     int number = 7;
     printf("fibonacci number at position %d is %d\n",number,fibonacciWhile(number));
     return 0;
 }
 int fibonacciWhile(int number){
     int first = 1, second = 1 , result = 0;
     if (number == 1 || number == 2){                                                                      example 20 while ıle fibonacci
        return 1;
     }
     while (number >= 3){
        result = first + second;
        first = second;
        second = result;
        number--;
     }
     return result;
 }
*/




/*
#include <stdio.h>
int fibonacciRecursive(int number);
int main(){
    int number = 7;
    printf("fibonacci number at position %d is %d\n",number,fibonacciRecursive(number));                        example 21 recursive ıle fibonaccı
    return 0;
}

int fibonacciRecursive(int number){
    if(number == 1 || number ==2){
        return 1;
    }
    return fibonacciRecursive(number - 1)+ fibonacciRecursive(number - 2);
}

*/





/*
#include <stdio.h>

int main() {
    int age, how_much, real_estate;
    char car[4];
    int threshold_money = 100000;
    int threshold_house = 5;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("How much money is in your bank account? ");
    scanf("%d", &how_much);

    printf("How many houses do you have in Koteklı? ");
    scanf("%d", &real_estate);

    printf("Do you have a car? (yes/no): ");
    scanf("%s", car);


    if (how_much > threshold_money && real_estate > threshold_house) {

        if (car[0] == 'y' || car[0] == 'Y') {
            printf("You don't have to work all day.\n");
        } else {
            printf("You should buy a car.\n");
        }
    } else if (how_much > 50000 && (car[0] == 'y' || car[0] == 'Y')) {
        printf("You have to work one day a week!\n");
    } else {
        printf("You are so poor, you have to work to live.\n");
    }


    if (age > 60 && age <= 75) {
        printf("You should have 200,000.\n");
    } else if (age > 75 && age <= 90) {
        printf("You should have 350,000.\n");
    } else if (age > 90 && age <= 110) {
        printf("You should have 500,000.\n");
    } else if (age > 110 && age <= 150) {
        printf("You should have 700,000.\n");
    } else if (age > 150 && age <= 200) {
        printf("You should have 1,200,000.\n");
    } else {
        printf("Otherwise, you should have 2,000,000.\n");
    }

    return 0;
}

*/



/*
#include <stdio.h>

int main() {

  int day = 2;

    switch (day) {                                                    example 22  switch yapısı
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}


*/


/*

#include <stdio.h>
int myAbs(int number){
    if (number < 0){
        return -number;                                        example 23
    }
    return number;
}

int main() {
   printf("%d\n", myAbs(-10));
   return 0;
}

*/




/*
#include <stdio.h>
int triangularFor(int number){
    int result = 0;
    for (int i = number;i>0;i--){
        result += i;
    }
    return result;
}                                                                     example 24 for ıle triangular numbers
int main(){
    int number = 4;
    int result = triangularFor(number);
    printf("triangular of %d is %d\n",number,result);
    return 0;
}


*/





/*
#include <stdio.h>
int triangularWhile(int number){
    int result = 0;
    while (number > 0){
        result += number;
        number--;                                                       example 25 while ıle triangular numbers
    }
    return result;
}
int main(){
    int number = 4;
    int result = triangularWhile(number);
    printf("triangular of %d is %d\n",number,result);
    return 0;
}

*/




/*
#include <stdio.h>
int triangularRecursive(int number){
    if (number == 1) {
        return 1;
    }
    return number + triangularRecursive(number - 1);
}                                                                               example 26 recursive ile triangular numbers

int main(){
    int number = 4;
    int result = triangularRecursive(number);
    printf("Triangular of %d is %d\n", number, result);

    return 0;
}

*/



/*
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);

    return 0;
}

*/





/*
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}

*/


/*

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);
    return 0;
}
*/



/*

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 5, 30, 15};
    int max = numbers[0];  // Assume the first element is the maximum

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Maximum element: %d\n", max);
    return 0;
}
*/






/*
int x=3;
if (x=1){
    printf("True\n");
else
    print ( "false\n")


cevap True
*/
















/*
int myArray[10];
myArray[5]=5;
for(int i=0; i<10 ;i++){
        printf("%d\n",myArray[i]);
}
int multiArray
*/





/*
#include <studio.h>
void perfect(int array[] , int size,int element);
int main (){



int example[10]={};
for(int i)

*/





/*

int main() {
    /*
    int myArray[10];

    myArray[5] = 5;
    for (int i = 0; i < 10; i++) {
        printf("%d\n", myArray[i]);
    }

    int multiArray[3][4];
    for (int i = 0; i < 3; i++) {
        printf("%d\n", multiArray[i][0]);
    }

    */
/*
    int myArray3D[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                printf("%d,%d,%d\n", i, j, k);
            }
        }
    }
}
*/


















