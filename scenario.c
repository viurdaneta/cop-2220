#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
    When is it an appropriate time to feel a bit flustered during a DIY cupcake decorating party? 
    Individually, piping frosting and adding colorful sprinkles can be a sweet experience, 
    but realizing you've run out of the bride-to-be's favorite toppings or forgetting to bring themed cupcake wrappers 
    might not be a time to panic. However, if both aspects align it becomes an appropriate time to feel a bit flustered.
    Alternatively, if the chosen cupcake decorating venue 
    unexpectedly changes, causing a momentary confusion, it's a cause for concern. Or, if in your cupcake party excitement, 
    you overlook confirming the dietary preferences of the guests, it's also a moment to be a little worried.
*/

int main()
{
    char favTopping[4];
    // Limit is 100 so that the max amount of wrappers is 999
    char themedWrappers[100];
    char venueChange[4];
    char dietaryPreferences[4];

    printf("\nThe cupcake party is coming up! Let's go through a checklist of some of the most important details of the party.\n");
    printf("Do you have enough of the bride's favorite topping? (Either Yes or No): ");
    scanf("%s", favTopping);

    // Validate input
    do
    {
        if ((strcmp(favTopping, "Yes")!=0) && (strcmp(favTopping, "No")!=0)) {
            printf("Invalid entry. Either Yes or No: ");
            scanf("%s", favTopping);
        }
        
   
    } while ((strcmp(favTopping, "Yes")!=0) && (strcmp(favTopping, "No")!=0));
    
    if ((strcmp(favTopping, "Yes")) == 0){
        printf("That's perfect, it would be a shame if you did not.");
    } else { 
        printf("\nDon't worry just yet, how many wrappers do you have? ");
        scanf("%s", themedWrappers);

        // Validate if the input is a positive integer
        while (atoi(themedWrappers) <= 0) {
            printf("Invalid entry, use only positive numbers: ");
            scanf("%s", themedWrappers);
        }

        // Check if the number of wrappers is 0
        if (atoi(themedWrappers) == 0) {
            printf("Now is a time be flustered.\n");
        } else {
            printf("That's good, it'd get real messy if you did not have any.\n");
        }
    }

    printf("\n\nHas your venue location chaged? (Either Yes or No): ");
    scanf("%s", venueChange);

    // Validate input
    do {
        if ((strcmp(venueChange, "Yes")!=0) && (strcmp(venueChange, "No")!=0)) {
            printf("Invalid entry. Either Yes or No: ");
            scanf("%s", venueChange);
   
        }
    } while ((strcmp(venueChange, "Yes")!=0) && (strcmp(venueChange, "No")!=0));

    if (strcmp(venueChange, "Yes") == 0 ) {
        printf("Now is a time to be flustered.\n");
    }
    else {
        printf("Thankfully, things would get difficult otherwise.\n");
    }

    printf("\nHave you confirmed the dietary preferences of the guests? (Either Yes or No): ");
    scanf("%s", dietaryPreferences);

    // Validate input
    do {
        if ((strcmp(dietaryPreferences, "Yes")!=0) && (strcmp(dietaryPreferences, "No")!=0)) {
            printf("Invalid entry. Either Yes or No: ");
            scanf("%s", dietaryPreferences);
        }
            
    } while ((strcmp(dietaryPreferences, "Yes")!=0) && (strcmp(dietaryPreferences, "No")!=0));
    


    if ((strcmp(dietaryPreferences, "Yes")==0)) {
        printf("Good job in that!.");
    }
    else {
        printf("You should confirm them as soon as you can!");
    }

    return 0;
}