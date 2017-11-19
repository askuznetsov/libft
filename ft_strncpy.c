#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i;

  i = 0;
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  while (dest[i])
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}

int 	main(void)
{
  const char *source = "Hello World!";
  char *destination = (char *)malloc(sizeof(char));
  char *destination2 = (char *)malloc(sizeof(char));
  
  printf("%s\n", strncpy(destination, source, 3));
  printf("%s\n", ft_strncpy(destination2, source, 3));
  return (0);
}
