
#include <stdio.h>

char getGrade(int m);

int main()
{
    int mark;
    scanf("%d", &mark);

    char gr = getGrade(mark);
    printf("Grade is %c", gr);

    return 0;
}

char getGrade(int m)
{
    char grad;
    if (m >= 80)
        return 'A';

    else if (m >= 60)
        return 'B';

    else if (m >= 40)
        return 'C';

    else
        return 'F';
}
