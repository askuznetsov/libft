#include <stdio.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;

  i = 0;
  while ((s1[i] || s2[i]) && i <= n)
    {
      if (s1[i] == s2[i])
	i++;
      else
	return (s1[i] - s2[i]);
    }
  return (0);
}

int     main(void)
{
  const char *string1 = "Hello World!";
  const char *string2 = "Hellq World!";

  printf("%i\n", ft_strncmp(string1, string2, 5));
  return (0);
}
