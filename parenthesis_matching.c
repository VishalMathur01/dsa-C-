#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char stringe[10];
int top = 0;
char h[10];

void get_info()
{
    printf("Enter an expression for which you want to check the parenthesis:\n");
    gets(stringe);
}

void display()
{
    printf("The entered string: ");
    puts(stringe);
    printf("\n");
}


boolean chk_parenthesis()
    {
        int i = 0;
        while (i < 9)
        {
            if (stringe[i] == '(')
            {
                if (top == 9)
                {
                    printf("The stack is full / overflow: \n:");
                    return 0;
                }
                else
                {
                    h[top] = '(';
                    top++;
                }
            }
            else if (stringe[i] == ')')
            {
                if (top == 0)
                {
                    printf("The stack is empty: \n");
                    return 0;
                }
                else
                    top--;
            }
            i++;
        }
        if (top == 0)
            return 1;
        else
            return 0;
    }

    int main()
    {
        get_info();
        if (chk_parenthesis() == 1)
            printf("There is no parenthesis error in the expression:\n");
        else
            printf("There is error in the parenthesis in the expression or the string enterd is >10 characters:\n");
        display();
        Beep(100, 300);
        return 0;
    }