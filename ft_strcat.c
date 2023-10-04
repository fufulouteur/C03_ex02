#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
  char *dest_forward;

  dest_forward = dest;
  while (*dest_forward != '\0') {
    dest_forward++;
    if (*dest_forward == '\0') {
      while (*src != '\0') {
        *dest_forward = *src;
        dest_forward++;
        src++;
      }
    }
  }
  if (*dest_forward != '\0') {
    while (*dest_forward != '\0') {
      *dest_forward = ' ';
      dest_forward++;
    }
  }
  return dest;
}
