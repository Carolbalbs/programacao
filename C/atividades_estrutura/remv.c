#include <stdio.h>

void print_list(int* list, int size) {
  printf("Current list: \n{");
  for (int x = 0; x < size; x++) {
    printf("%d", list[x]);
    if (x != (size - 1)) printf(", ");
  } 
  printf("}\n");
}

int get_index(int value, int* list, int size)  {
  for (int x = 0; x < size; x++) {
    if (list[x] == value) return x;
  }  
  return -1;  
}

int remove_node(int to_remove, int* list, int size) {
   int index = get_index(to_remove, list, size);
   if (index != -1) {
     for (int x = index; x < (size - 1); x++) {
       list[x] = list[x + 1]; 
     } 
     size--;
   } else {
     printf("The element is not in the list!\n");
   }
   print_list(list, size);
   return size;
}

int main() {
  int size = 20;
  int list[20] = {93, 37, 13, 33, 7, 88, 27, 95, 30, 100, 19, 53, 55, 99, 80, 31, 16, 48, 51, 94};
  char delete_another = 'y';
  
  print_list(list, size);

  while (delete_another == 'y') {
    int to_remove, invalid_input = 1;
    printf("Insert the value to be removed.\n");
    scanf("%d", &to_remove);
    size = remove_node(to_remove, list, size);
    printf("Do you want to remove another value? (y/n)\n");
    while (invalid_input) { 
      scanf("%c", &delete_another);
      if (delete_another == 'y' || delete_another == 'n') invalid_input = 0;
      if (invalid_input) printf("Please enter y (for yes) or n (for no).\n");
    }  
    
  }
  printf("Abort.\n");
}