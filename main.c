#include <stdio.h>
#include <string.h>


/*
When is it an appropriate time to panic while skydiving? Individually, when the wind is blowing over 60 miles per hour or when you are 
still free-falling under 1,200 feet from the ground, it can be a scary experience, but it is not necessarily a time to panic. 
However, if both happen at the same time then it is an appropriate time to panic. Alternatively, if your parachute jams at any given time, panic. 
Or if you got a little eager and forgot your instructor before you jumped out of the airplane, also panic.
*/

int main ()
{
    int distanceFromGround;
    int windSpeed;     
    char parachuteJams[3];
    int instructorPresence;

    printf("\nWhat's your distance from the ground? ");
    scanf("%d", &distanceFromGround);
    do
    {   
        if (distanceFromGround < 0)
        {
            printf("Invalid distance, try again: ");
             printf("\nWhat's your distance from the ground? ");
            scanf("%d", &distanceFromGround);
        }
        
    } while (distanceFromGround < 0);
    
    
    printf("\nWhat's the wind speed? ");
    scanf("%d", &windSpeed);
    do
    {   
        if (windSpeed < 0)
        {
            printf("Invalid Speed, try again: ");
            printf("\nWhat's the wind speed? ");
            scanf("%d", &windSpeed);
        }
        
    } while (windSpeed < 0);

    if (windSpeed > 60 && distanceFromGround < 1200)
    {
        printf("Panic!");
    }
    else
    {
       
        printf("\nYou're safe, is your instructor here with you?\n");
        printf("Enter 1 for YES or 0 for NO: ");
        scanf("%d", &instructorPresence);
        do
        {   
            if (instructorPresence != 1 && instructorPresence != 0)
            {
                printf("Invalid entry. Enter 1 for YES or 0 for NO: ");
                scanf("%d", &instructorPresence);

            }
        
        } while (instructorPresence != 1 && instructorPresence != 0);
        


        if (instructorPresence == 1)
        {
            printf("You're safe");
        }

        else
        {
            printf("\nDo not panic yet, is your parachute jammed?\n");
            printf("Only enter Yes or No: ");
            scanf(" %s", parachuteJams);

            do
            {   
            if (strcmp(parachuteJams, "Yes") != 0 && strcmp(parachuteJams, "No") != 0)
                {
                    printf("Invalid entry. Only enter Yes or No: ");
                    scanf("%s", parachuteJams);
                }
        
            } while ( strcmp(parachuteJams, "Yes") != 0 && strcmp(parachuteJams, "No") != 0);

            if (strcmp(parachuteJams, "No") == 0)
            {
                printf("You're safe!");
            }
            else if (strcmp(parachuteJams, "Yes") == 0)
            {
                printf("Panic");
            }
        }
        
    }
    

    return 0;
}