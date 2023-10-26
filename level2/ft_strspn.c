#include <unistd.h>
#include <stdio.h>
#include <string.h>
// include for size_t
// #include <stdlib.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

int main() 
{
    const char *str1 = "jour, toi le monde !";
    const char *str2 = "Bonjour";
    
    size_t len = strspn(str1, str2);
    
    printf("La sous-chaîne initiale de str1 sans les caractères de str2 a une longueur de %zu\n", len);
    
    return 0;
}