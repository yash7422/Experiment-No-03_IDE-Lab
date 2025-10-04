#include <stdio.h>

int LinerSearch(int Arr1[], int Size, int Compare) {
  int Result;
  for(int i = 0; i != Size; i++) {
    if(Arr1[i] == Compare) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int Arr1[] = {1, 23, 2, 22, 33,3,0};
  int Size = sizeof(Arr1) / sizeof(Arr1[0]);
  int Compare = 0;

  printf("Enter the Compare paremeter: ");
  scanf("%d", &Compare);

  if(LinerSearch(Arr1, Size, Compare)) {
    printf("Array contains the given search Parameter.");
  } else {
    printf("Array does not contain the given search Parameter.");
  }

  return 0;
}