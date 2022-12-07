
    #include <stdio.h>

    int getFactorial(int num);
    float getRatio(double x, double y);

    int main()
    {
        int a, b;

        scanf("%d %d", &a, &b);

        long long int fact_a = getFactorial(a);
        long long int fact_b = getFactorial(b);

        float ratio = getRatio(fact_a, fact_b);
        printf("ratio of two numbers is %.2f\n", ratio);

        return 0;
    }

    int getFactorial(int num)
    {
        long long int res = 1;

        for (int i = 1; i < num; i++)
            res += res * i;

        return res;
    }

    float getRatio(double x, double y) { return x / y; }

