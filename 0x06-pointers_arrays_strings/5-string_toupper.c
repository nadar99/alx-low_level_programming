/**
 * string_toupper - change string to uppercase
 *@s : the array
 * Return: string
 */
char *string_toupper(char *s)
{
	char *a = s;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;
		a++;
	}
	return (s);
}
