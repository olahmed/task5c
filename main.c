/**
 ******************************************************************************
 * @file           : task 5
 * @author         : ola ahmed
 * @brief          : Array
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */
    unsigned int val[5];
/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* *///functions

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    signed char indecator;
   // unsigned int maximum=val[0];
    printf("please enter the elements of the array\n");
    for(indecator=0;indecator<5;indecator++)
        {
            printf("\t");
            scanf("%i",&val[indecator]);
        }
        for(indecator=4;indecator>=0;indecator--)
        {
            printf("\t%i",val[indecator]);
        }
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      14 feb 2024           num3
*/
