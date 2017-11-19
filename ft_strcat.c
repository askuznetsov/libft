#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j])
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

int	main(void)
{
  char destination[100];
  const char *source = "Hello world!";

  printf("%s\n", ft_strcat(destination, source));
  return (0);
}
