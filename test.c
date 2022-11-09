#include <stdio.h>
int main()
{
    int total_count, i, j, swap_var;
    printf("How many number you want to input?\n");
    scanf("%d", &total_count);

    int array[total_count];

    printf("Please enter %d integers that has to be sorted\n", total_count);
    for (i=0; i<total_count; i++) scanf("%d", &array[i]);

    for (i=0; i<total_count-1; i++){
        for (j=0; j<total_count-i-1; j++){
            if (array[j] > array[j+1]) {
                swap_var=array[j];
                array[j]=array[j+1];
                array[j+1]=swap_var;
            }
        }
    }

    printf("Below is the list of elements sorted in ascending order:\n");
    for (i=0; i<total_count; i++) printf("%d\n", array[i]);
    return 0;
}