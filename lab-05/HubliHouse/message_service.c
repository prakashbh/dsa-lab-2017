#include "message_service.h"

void initialize_stacks(STACK *ps1, STACK *ps2)
{
    ps1->top = -1;
    ps2->top = -1;

    ps1->active = 1;
    ps2->active = 0;

    ps1->top++;
    strcpy(ps1->items[0].message_data,"Buffee Lunch");
    ps1->items[0].hour[0] = 1;
    ps1->items[0].hour[1] = 2;

    ps1->top++;
    strcpy(ps1->items[1].message_data,"Movie at PVR");
    ps1->items[1].hour[0] = 12;
    ps1->items[1].hour[1] = 3;

    ps1->top++;
    strcpy(ps1->items[2].message_data,"Sale at Discount");
    ps1->items[2].hour[0] = 11;
    ps1->items[2].hour[1] = 4;

    ps1->top++;
    strcpy(ps1->items[3].message_data,"Coffee");
    ps1->items[3].hour[0] = 10;
    ps1->items[3].hour[1] = 5;

    ps1->top++;
    strcpy(ps1->items[4].message_data,"Snacks");
    ps1->items[4].hour[0] = 9;
    ps1->items[4].hour[1] = 6;

}


int empty(STACK *ps)
{

}

void view_current_message(STACK *ps1, STACK *ps2)
{

}

void update_hour(STACK *ps1, STACK *ps2)
{

}


void push(STACK * ps, struct message s)
{

}

struct message pop(STACK *ps)
{

}


void peek( STACK *ps)
{

}


void print( STACK *ps1, STACK *ps2)
{
    int i = 0, j = 0;

    if(ps1->active == 1)
        printf("%s", "Stack1 is Active\n");
    else
        printf("%s", "Stack2 is Active\n");

    if(empty(ps1))
    {
        printf("%s", "Stack1 is empty\n");
    }
    else
    {
        printf("%s", "\nThe stack elements of first stack are listed below:\n");
        for(i = ps1->top ; i >= 0 ; i--)
        {
            printf("%s\n", ps1->items[i].message_data);
        }
    }

    if(empty(ps2))
    {
        printf("%s", "\n\nStack2 is empty\n");
    }
    else
    {
        printf("%s", "\nThe stack elements of second stack are listed below:\n");
        for(j = ps2->top ; j >= 0 ; j--)
        {
            printf("%s\n", ps2->items[j].message_data);
        }

    }
}
