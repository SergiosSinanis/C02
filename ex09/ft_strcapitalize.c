int is_char_alpha(char c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
 
int is_char_num(char c)
{
  return (c >= '0' && c <= '9');
}


int is_char_alphanum(char c)
{
  return (is_char_alpha(c) || is_char_num(c));
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        else if ((!(is_char_alphanum(str[i - 1]))) && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (is_char_alphanum(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
