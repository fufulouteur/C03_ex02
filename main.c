#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);

int main() {
  char tab[] = "coucou\0";
  char tab2[] = "coucou\0";
  printf("%s\n", ft_strcat(tab2, tab));
  return 0;
}
