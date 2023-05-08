/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the char to search for
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int is_found = 0;
	
	while (*s != '\0')
	{
		char *accept2 = accept;

		while (*accept2 != '\0')
		{
			if (*s == *accept2)
			{	
				is_found = 1;
			}
			else
			{
				is_found = 0;
				break;
			}
			accept2++;
		}
		s++;

	}
	return (0);
}
