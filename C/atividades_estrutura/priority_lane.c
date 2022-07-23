#include <stdlib.h>
#include <stdio.h>

typedef struct person person; 

struct person {
   long password;
   char name[10];
   int priority;
   person* next; 
   person* previous;
};

int main() {
   char insertMode = ' ';
   person* first = NULL;
   
   while(insertMode != 'f') {
      printf("Insert \"n\" to add a new person to the line, \n\"a\" to attend the next person, and \"f\" to abort the program.\n");
      scanf(" %c", &insertMode);
      if (insertMode == 'n') {
         person* new = malloc(sizeof(person));
         printf("Insert the person's name.\n");
         scanf(" %s", new->name);
         printf("Insert the person's priority.\n");
         scanf(" %d", &new->priority);
         new->password = rand() / 1000000; 
         printf("%s's password: %d\n", new->name, new->password);
         if (first == NULL) first = new;
         else {
           person* current = first;
           while (current->next != NULL && current->priority >= new->priority)
             current = current->next;
           if (current->priority >= new->priority) {  
             new->next = current->next;
             if (current->next != NULL) current->next->previous = new;
             new->previous = current;
             current->next = new;
           } else {
             new->previous = current->previous;
             if (current == first) first = new;
             else current->previous->next = new;
             new->next = current;
             current->previous = new;
           }   
                   
         }
      } else if (insertMode == 'a') {
         if (first == NULL) printf("The lane is empty.\n");
         else {
            
            printf("Attended person: %s, priority:%d, password %d.\n", first->name, first->priority, first->password);
            person* freed = first;
            if (first->next != NULL) {
               first = first->next;
               printf("Current lane:\n");
               person* current = first;
               while (current != NULL) {
               printf("Name: %s, priority:%d, password: %d\n", current->name, current->priority, current->password);
               current = current->next;
               }
            }  
            else first = NULL;
            free(freed);
            
         }
      } else if (insertMode != 'f') {
         printf("Invalid option!\n");
      }
         
   }    
   printf("Abort.\n");
}


