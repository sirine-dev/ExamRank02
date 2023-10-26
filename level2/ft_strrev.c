int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int     i;
    char    temp;
    int     len;

    i = 0;
    temp = 0;
    len = ft_strlen(str);
    len--;
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return(str);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}