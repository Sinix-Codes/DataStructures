# Here are some programs that you can use to learn more about the language and data structures. 😎

---

## 1.Hello world

```c
    #include <stdio.h>

    int main(void)
    {
        printf("hello, world");
    }
```

---

## 2.Program to assign values of two numbers and print their addition.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10,b=20;
    clrscr();

    int ans = a + b;

    printf("Addition is : %d",ans);

    getch();
    }
```

---

## 3.Program to print simple interest.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int p=1000,r=5,t=2;
    clrscr();

    int si = (p*r*t)/100;

    printf("Simple Interest is : %d",si);

    getch();
    }
```

---

## 4.Program to print area of a circle.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int r=5;
    clrscr();

    float area = 3.14*r*r;

    printf("Area of circle is : %f",area);

    getch();
    }
```

---

## 5.Program to print area of a rectangle.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int l=5,b=10;
    clrscr();

    int area = l*b;

    printf("Area of rectangle is : %d",area);

    getch();
    }
```

---

## 6.Program to print area of a triangle.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int b=10,h=5;
    clrscr();

    float area = 0.5*b*h;

    printf("Area of triangle is : %f",area);

    getch();
    }
```

---

## 7.Program to print area of a square.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int s=5;
    clrscr();

    int area = s*s;

    printf("Area of square is : %d",area);

    getch();
    }
```

---

## 8.Program to accept two number and print largest among them.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10,b=20;
    clrscr();

    if(a>b)
    {
    printf("a is greater");
    }
    else
    {
    printf("b is greater");
    }

    getch();
    }
```

---

## 9.Program to accept two number and print smallest among them.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10,b=20;
    clrscr();

    if(a<b)
    {
    printf("a is smaller");
    }
    else
    {
    printf("b is smaller");
    }

    getch();
    }
```

---

## 10. Program to accept three numbers from user and print them in ascending and decending order.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10,b=20,c=30;
    clrscr();

    if(a>b && a>c)
    {
    if(b>c)
    {
    printf("a>b>c");
    }
    else
    {
    printf("a>c>b");
    }
    }
    else if(b>a && b>c)
    {
    if(a>c)
    {
    printf("b>a>c");
    }
    else
    {
    printf("b>c>a");
    }
    }
    else
    {
    if(a>b)
    {
    printf("c>a>b");
    }
    else
    {
    printf("c>b>a");
    }
    }

    getch();
    }
```

---

## 11.Program to accept a number and print whether it is even or odd.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10;
    clrscr();

    if(a%2==0)
    {
    printf("a is even");
    }
    else
    {
    printf("a is odd");
    }

    getch();
    }
```

---

## 12.Program to accept a number and print whether it is positive or negative.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10;
    clrscr();

    if(a>0)
    {
    printf("a is positive");
    }
    else
    {
    printf("a is negative");
    }

    getch();
    }
```

---

## 13.Program to accept a number and print whether it is prime or not.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=10;
    clrscr();

    int i,flag=0;

    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
    flag=1;
    break;
    }
    }

    if(flag==0)
    {
    printf("a is prime");
    }
    else
    {
    printf("a is not prime");
    }

    getch();
    }
```

---

## 14.Program to accept a number and print whether it is palindrome or not.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=121;
    clrscr();

    int temp=a,rev=0;

    while(temp!=0)
    {
    rev=rev*10+temp%10;
    temp=temp/10;
    }

    if(rev==a)
    {
    printf("a is palindrome");
    }
    else
    {
    printf("a is not palindrome");
    }

    getch();
    }
```

---

## 15.Program to accept a number and print whether it is armstrong or not.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=153;
    clrscr();

    int temp=a,rev=0;

    while(temp!=0)
    {
    rev=rev*10+temp%10;
    temp=temp/10;
    }

    if(rev==a)
    {
    printf("a is armstrong");
    }
    else
    {
    printf("a is not armstrong");
    }

    getch();
    }
```

---

## 16.Program to accept a number and print whether it is perfect or not.

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int a=6;
    clrscr();

    int i,sum=0;

    for(i=1;i<a;i++)
    {
    if(a%i==0)
    {
    sum=sum+i;
    }
    }

    if(sum==a)
    {
    printf("a is perfect");
    }
    else
    {
    printf("a is not perfect");
    }

    getch();
    }
```

---

## 17. Program to find the roots of a quadratic equation.

```c
    #include<stdio.h>
    #include<conio.h>
    #include<math.h>

    void main()
    {
    int a=1,b=5,c=6;
    clrscr();

    int d=b*b-4*a*c;

    if(d>0)
    {
    printf("Roots are real and unequal");
    }
    else if(d==0)
    {
    printf("Roots are real and equal");
    }
    else
    {
    printf("Roots are imaginary");
    }

    getch();
    }
```

---

## 18.Pattern 1

```
    •
    • •
    • • •
    • • • •
    • • • • •
```

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int i,j;
    clrscr();

    for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
    {
    printf("• ");
    }
    printf("\n");
    }

    getch();
    }
```

---

## 19.Pattern 2

```
    • • • • •
    • • • •
    • • •
    • •
    •
```

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
    int i,j;
    clrscr();

    for(i=5;i>=1;i--)
    {
    for(j=1;j<=i;j++)
    {
    printf("• ");
    }
    printf("\n");
    }

    getch();
    }
```

---

## 20.Pattern 3

```
     •
    • •
   • • •
  • • • •
 • • • • •
```

```c
    #include<stdio.h>
    #include<conio.h>

    void main()
    {
        char ch = '•';
        int n,i, j, no_of_spaces = 0, spaceCount;

        printf("Enter number : ");
        scanf("%d", &n);
        printf("\n");
        no_of_spaces = n - 1;

        for (i = 1; i <= n; i++)
        {
            for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--)
            {
                printf("  ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%2c", ch);
            }
            printf("\n");
            no_of_spaces--;
        }
        getch();
    }
```
