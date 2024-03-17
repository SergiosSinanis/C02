unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int length ;

    i = 0;
    length = 0;

    while(src[length])
    {
        length++;
    }

    if(size == 0)
        return(length);

    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(length);
}
