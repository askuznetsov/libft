#include <stdio.h>

int	ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

int	main(void)
{
  char	*string;
  int 	count;

  string = "Count of this string is: ";
  count = ft_strlen(string);
  printf("%s%i\n",string,count); 
  return (0);
}
