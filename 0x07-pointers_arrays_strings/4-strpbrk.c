/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the char to search for
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept2 = accept;

		while (*accept2 != '\0')
		{
			if (*s == *accept2)
			{
				return (s);
			}
			accept2++;
		}
		s++;

	}
	return (0);
}
