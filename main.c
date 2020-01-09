/*
  if the number ends with 1 then use the ordinal "1st"
  1st, 11th, (<!), 21st, 31st, 41st, 51st, 61th, 71st, 81st, 91st, 101st, 111th (<!)...
  Q: How can we handle occurences of 1, 21,31 ,41 ...?
  A: We can check the remainder of the number divided by 10 (num % 10)
  Q: How can we handle occurences of 11, 111, 211, 311, ...?
  A:
*/
#include <stdio.h>

int main(void) {

  unsigned int max;
  printf("Max: ");
  scanf("%u", &max);

  for (int i = 1; i <= max; i++)
  {
    switch(i % 100) {
      case 11:
      case 12:
      case 13:
        printf("%ith\n", i);
        continue;
    }

    switch(i % 10) // 1, 2, 3, 4-9
    {
      case 1: // 1
        printf("%ist\n", i);
        continue;
      case 2: // 2
        printf("%ind\n", i);
        continue;
      case 3: // 3
        printf("%ird\n", i);
        continue;
      default: // 4-9
        printf("%ith\n", i);
        continue;
    }
  }

  return 0;
}