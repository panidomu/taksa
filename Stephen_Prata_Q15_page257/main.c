#include <stdio.h>
#include <stdlib.h>


#define InitialContributionDaphne 100
#define InitialContributionDeirdre 100
#define DaphnePercentage 10
#define DeirdrePercentage 5


int main()
{int NumberOfYears=0;
 int SumDaphne;
 int SumDeirdre;
 int RiseDaphne;
 int RiseDeirdre;

 do
 {
    NumberOfYears=NumberOfYears+1;

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
