#include <unistd.h>>

char  get_quotient(char c)
{
  char  *maphexa;

  maphexa = "0123456789abcdef";
  return (maphexa[c / 16]);
}

char  get_remainder(char c)
{
  char  *maphexa;

  maphexa = "0123456789abcdef";
  return (maphexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	char nb;
	i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= ' ' && str[i] <= '~'))
		{
			write(1, '\\',1);
                        nb = get_quotient(str[i]);
                        write(1, &nb,1);
                        nb = get_remainder(str[i]);
                        write(1, &nb,1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
