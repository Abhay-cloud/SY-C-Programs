#include <stdio.h>
#include <string.h>

// call by value function
void callByValue(int num)
{
    printf("Before addition in function %d\n", num);
    num += 100;
    printf("After addition in function %d\n", num);
}

// call by reference function
void callByRef(int *num)
{
    printf("Before addition in function %d\n", *num);
    *num += 100;
    printf("After addition in function %d\n", *num);
}

// structure of student
struct Student
{
    char name[20];
    int roll;
    int age;
};

// union
union Book
{
    char name[20];
    int pages;
    float price;
};

// factorial of number

int factorial(int num)
{
    int f;
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        f = num * factorial(num - 1);
    }
    return f;
}

// enum
enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{
    // voting
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // if (age >= 18)
    // {
    //     printf("You are eligible for voting\n");
    // }
    // else
    // {
    //     printf("You are not eligible for voting\n");
    // }

    // vowel
    // char input;
    // printf("Enter any character: ");
    // scanf("%c", &input);

    // switch (input)
    // {
    // case 'a':
    // case 'A':
    //     printf("Entered character is vowel\n");
    //     break;
    // case 'e':
    // case 'E':
    //     printf("Entered character is vowel\n");
    //     break;
    // case 'i':
    // case 'I':
    //     printf("Entered character is vowel\n");
    //     break;
    // case 'o':
    // case 'O':
    //     printf("Entered character is vowel\n");
    //     break;
    // case 'u':
    // case 'U':
    //     printf("Entered character is vowel\n");
    //     break;
    // default:
    //     printf("Entered character is not a vowel\n");
    // }

    // reverse number using for loop
    // int num, rem, reverse = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // printf("You entered %d\n", num);
    // for (; num != 0; num = num / 10)
    // {
    //     rem = num % 10;
    //     reverse = reverse * 10 + rem;
    // }
    // printf("Reverse of the given number %d", reverse);

    // check uppercase and lowercase letters
    // char c;
    // printf("Enter alphabet: ");
    // scanf("%c", &c);
    // if (c >= 'A' && c <= 'Z')
    // {
    //     printf("Entered alphabet is in uppercase.\n");
    // }
    // else if (c >= 'a' && c <= 'z')
    // {
    //     printf("Entered alphabet is in lowercase.\n");
    // }
    // else
    // {
    //     printf("Entered alphabet is not an alphabet.\n");
    // }

    // calculate addition until it becomes 100 using do while
    // int sum = 0, num;

    // do
    // {
    //     printf("Enter number: ");
    //     scanf("%d", &num);
    //     sum = sum + num;
    //     printf("Addition is %d \n", sum);
    // } while (sum < 100);

    // call by value
    // int val = 100;
    // printf("Before calling callByValue function %d\n", val);
    // callByValue(val);
    // printf("After calling callByValue function %d\n", val);

    // call by reference
    // int val = 100;
    // printf("Before calling callByRef function %d\n", val);
    // callByRef(&val);
    // printf("After calling callByRef function %d\n", val);

    // structure of student
    // struct Student s;
    // printf("Enter your name: ");
    // scanf("%s", &s.name);
    // printf("Enter your roll number: ");
    // scanf("%d", &s.roll);
    // printf("Enter your age: ");
    // scanf("%d", &s.age);
    // printf("Name is %s \n", s.name);
    // printf("Roll number is %d \n", s.roll);
    // printf("Age is %d \n", s.age);

    // union Book book;
    // you can use this
    // printf("Enter book name: ");
    // scanf("%s", &book.name);
    // printf("Book name is %s\n", book.name);
    // printf("Enter no. of pages: ");
    // scanf("%d", &book.pages);
    // printf("No. of pages are %d\n", book.pages);
    // printf("Enter the price of book: ");
    // scanf("%f", &book.price);
    // printf("Price of book is %f", book.price);

    // or
    // strcpy(book.name, "MyBook");
    // printf("Book name is %s\n", book.name);
    // book.pages = 100;
    // printf("No. of pages are %d\n", book.pages);
    // book.price = 129.43;
    // printf("Price of book is %f", book.price);

    // array of structure of student
    // struct Student s[2];
    // int i = 0, j = 0;
    // for (i = 0; i < 2; i++)
    // {
    //     printf("Enter the name of student %d ", (i + 1));
    //     scanf("%s", &s[i].name);
    //     printf("Enter the roll of student %d ", (i + 1));
    //     scanf("%d", &s[i].roll);
    //     printf("Enter the age of student %d ", (i + 1));
    //     scanf("%d", &s[i].age);
    // }

    // for (j = 0; j < 2; j++)
    // {
    //     printf("Name of student %d is %s \n", (j + 1), s[j].name);
    //     printf("Roll number of student %d is %d \n", (j + 1), s[j].roll);
    //     printf("Age of student %d is %d \n", (j + 1), s[j].age);
    // }

    // factorial of number
    // int num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    // printf("%d! = %d", num, factorial(num));

    // enum
    // enum week day;
    // day = Wed;
    // printf("%d", day);

    // star pattern
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // addition of 3x3 matrix
    // int mat1[3][3];
    // int mat2[3][3];
    // int mat3[3][3];
    // int i, j;

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("Enter element %d %d\n", i, j);
    //         scanf("%d", &mat1[i][j]);
    //     }
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("Enter element %d %d\n", i, j);
    //         scanf("%d", &mat2[i][j]);
    //     }
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         mat3[i][j] = mat1[i][j] + mat2[i][j];
    //     }
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d ", mat3[i][j]);
    //     }
    //     printf("\n");
    // }

    // find largest element in array
    // int arr[] = {1, 6, 8, 3, 4, 9, 2, 5};
    // int largest = arr[0];

    // for (int i = 1; i < sizeof(arr) / 4; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }

    // printf("The largest element in an array is %d", largest);

    // find divisibilty of number
    // int num1, num2;
    // printf("Enter num1\n");
    // scanf("%d", &num1);
    // printf("Enter num2\n");
    // scanf("%d", &num2);

    // if (num1 % num2 == 0)
    // {
    //     printf("Num1 is divisible by num2");
    // }
    // else
    // {
    //     printf("Num1 is not divisible by num2");
    // }

    return 0;
}