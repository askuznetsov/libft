#include <stdio.h>

char *ft_strstr(const char *string1, const char *string2)
{
  int j;
  int i;
  
  i = 0;
  j = 0;
  while (string1[i])
    {
      while (string2[j] == string1[i + j])
	{
	  if (string2[j + 1] == '\0')
	    {
	      return (char *)(string1 + i);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int	main(void)
{
  const char *str1 = "So, this is my first line.";
  const char *str2 = "this is";

  printf("%s\n", ft_strstr(str1, str2));
  return (0);
}
