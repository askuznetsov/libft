#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *str)
{
  char 	*string;
  int	i;
  
  string = (char *)malloc(sizeof(char));
  i = 0;
  while (str[i])
    {
      string[i] = str[i];
      printf("%c", string[i]);
      i++;
    }
  string[i] = '\0';
  return (string);
}

int	main(void)
{
  const char *strr = "hello, world!";
  ft_strdup(strr);
  return (0);
}
