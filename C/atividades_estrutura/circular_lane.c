
#include <stdlib.h>
#include <stdio.h>

typedef struct person person; 

struct person {
   long password; //atendee password
   char name[10]; //atendee name
   person* next; //points to the next struct
};

int main() {
   char insertMode = ' '; //char that determines if person is inserted or removed
   int size = 10; //size of the lane
   person lane[size]; //array of structs that contain the nodes of the lane
   person* first = lane; //initializes first person to beginning of the lane;
   person* last = lane; //initializes last person to beginning of the lane;
   int index = 0; //index of lane;
   
   for (int x = 0; x < size; x++) {
      lane[x].next = NULL; //initializes null pointers for every node;
   }

   while(insertMode != 'f') {
      printf("Insert \"n\" to add a new person to the lane, \n\"a\" to attend the next person, and \"f\" to abort the program.\n");
      scanf(" %c", &insertMode); //check if insert node, remove node, or abort;
      if (insertMode == 'n') {
         if (last->next != first) { //checks if lane is full
            if (last->next != NULL) last = last->next; //jumps to next node if a new person is already inserted in current one
            printf("Insert the person's name.\n");
            scanf(" %s", last->name); //space in " %s" to prevent printf showing twice
            last->password = rand() / 1000000; //dividing the random numbber by 1000000 in order to have up to 4 digit random numbers 
            printf("%s's password: %d\n", last->name, last->password);
            index = (index + 1) % size; //advanding the index of next node each time one person is inserted 
            last->next = &lane[index]; //pointing the next node to the respective index
         } else {
            printf("The lane is full!\n");
         }
         
      } else if (insertMode == 'a') {
         if (first->next == NULL) { // if node of attendee points to null, that node was already attended, thus line is empty
            printf("The lane is empty.\n");
         } else {
            printf("Attended person: %s, password %d.\n", first->name, first->password);
            if (first == last) first->next = NULL;//(first == last) means current attendee is the last atendee, in which case its next pointer shall be null 
            else {
              first = first->next; //else we move the next atendee to the next node
              printf("Current lane:\n");
            }  
            person* current = first; //current pointer will travel trhough all nodes left to be attended so they can be printed
            while (current->next != NULL && current != last->next) { //null pointer means there is no next person in the line. current == last-> next means a full loop was done 
             printf("Name: %s, Password: %d\n", current->name, current->password);
             current = current->next;//go to next node to be attended
            }
         }
         
         
         
      }
      
   } 
   printf("Abort.\n");
}