//What does my cat want today?

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("What day of the week is it today? \n");
    printf("   ***    \n");
    printf("1 - monday \n");
    printf("2 - tuesday \n");
    printf("3 - wednesday \n");
    printf("4 - thursday \n");
    printf("5 - friday \n");
    printf("6 - saturday \n");
    printf("7 - sunday \n");
    printf("   ***    \n");

    int Day;
    scanf("%d", &Day);

    switch (Day)
    {
        case 1 : printf("Today is the working day... My cat wants to sleep...\n");
            break;
        case 2 : printf("Today is the working day... My cat wants to sleep...\n");
            break;
        case 3 : printf("Today is the working day... My cat wants to sleep...\n");
            break;
        case 4 : printf("Today is the working day... My cat wants to sleep...\n");
            break;
        case 5 : printf("Friday!!! My cat and I want to dance!!!\n");
            break;
        case 6 : printf("Saturday is the day of walking along the roofs!\n");
            break;
        case 7 : printf("Sunday is the day of delicacies and laziness...\n");
    }
    getchar();
    return 0;
}
