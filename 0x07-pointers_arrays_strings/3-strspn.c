/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string to search
 * @accept: the char to search for
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		char *accept2 = accept;
		int is_found = 0;

		while (*accept2 != '\0')
		{
			if (*s == *accept2)
			{
				count++;
				is_found = 1;
				break;
			}
			accept2++;
		}
		if (!is_found)
		{
			break;
		}
		s++;

	}
	return (count);
}
