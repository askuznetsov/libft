#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
  int i;

  i = 0;
  while (s1[i] || s2[i])
    {
      if (s1[i] == s2[i])
	i++;
      else
	return (s1[i] - s2[i]);
    }
  return (0);
}

int 	main(void)
{
  const char *string1 = "Hello World!";
  const char *string2 = "Hello World!1";

  printf("%i\n", ft_strcmp(string1, string2));
  return (0);
}
