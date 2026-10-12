#include <stdio.h>

int main()
{
    int degree;
    float exp;
    int lang;

    
    printf("Do you have a BSCS degree? (1 for Yes, 0 for No): ");
    scanf("%d", &degree);

    if (degree == 1)
    {
        
        printf("Enter years of experience: ");
        scanf("%f", &exp);

        if (exp > 2)
        {
           
            printf("Enter primary language (1 for C++, 2 for Python): ");
            scanf("%d", &lang);

            if (lang == 1)
            {
                printf("Assigned to Systems Team\n");
            }
            else if (lang == 2)
            {
                printf("Assigned to AI Team\n");
            }
            else
            {
                printf("Invalid language choice.\n");
            }

           
            if (exp > 5)
            {
                printf("Senior Level\n");
            }
        }
        else
        {
           
            printf("Junior Associate\n");
        }
    }
    else
    {
        printf("Degree Requirement Not Met.\n");
    }

    return 0;
}
