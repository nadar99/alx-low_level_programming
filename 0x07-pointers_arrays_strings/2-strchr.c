/**
 * _strchr - a function that locates a character in a string.
 * @s: the string to search
 * @c: the char to search for
 *
 * Return: pointer to the first occurrence of the character c if found,
 * NULL, if not found
 */
char *_strchr(char *s, char c)
{
	char null_char = '\0';
	char *Null = &null_char;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (Null);
}
