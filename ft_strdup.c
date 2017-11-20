#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *stri)
{
  int i;
 
  i = 0;
  while (stri[i])
    i++;
  return (i);
}

char	*ft_strdup(const char *str)
{
  char 	*string;
  int	i;
  
  string = (char *)malloc((size_t)ft_strlen(str) + 1);
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
