#include <stdio.h>
#include <stdlib.h>


#define INITIAL_CONTRIBUTION_DAPHNE 100 //Дефайны принято писать в таком стиле. Тогда в коде сразу понятно, что это не просто переменные. 
#define InitialContributionDeirdre 100
#define DaphnePercentage 10
#define DeirdrePercentage 5


int main()
{
    int numberOfYears = 0; //не стоит называть переменные с заглавной буквы) остальное поправишь сама? 
    int sumDaphne;
    int sumDeirdre;
    int riseDaphne;
    int riseDeirdre;

    do
    {
       NumberOfYears = NumberOfYears + 1; //все операторы типа =, + и прочее обычно пишут через " " (пробел), чтобы лучше читалось

       RiseDaphne=InitialContributionDaphne*DaphnePercentage/100*NumberOfYears;
       SumDaphne=InitialContributionDaphne+RiseDaphne;

       RiseDeirdre=(InitialContributionDeirdre+RiseDeirdre)*DeirdrePercentage/100*NumberOfYears;
       SumDeirdre=InitialContributionDeirdre+RiseDeirdre;

       NumberOfYears=NumberOfYears+1;

    }

    while(SumDeirdre<SumDaphne);

    printf("Sum Daphne is %d $\n",SumDaphne);
    printf("Sum Deirdre is %d $\n",SumDeirdre);
    printf("This will happen after %d years \n",NumberOfYears);
 
    return 0;
}
