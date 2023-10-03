#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);

int main() {
  char tab[] = "coucou";
  char tab2[] = "coucou";
  printf("%s\n", strcat(tab2, tab));
  return 0;
}
