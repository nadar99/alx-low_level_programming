/**
 * string_toupper - change string to uppercase
 *@s : the array
 * Return: string
 */
char *cap_string(char *s)
{
	char *a = s;
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	while (*a != '\0')
	{
		int is_seperator = 0;
		int i;

		for (i = 0; i<13 ;i++)
		{
			if (seperators[i] == *a)
			{
				is_seperator = 1;
				a++;
			}
		}	
		if (*a >= 'a' && *a <= 'z')
		{
			if (is_seperator)
				*a -= 32;
		}
		a++;
	}
	return (s);
}
