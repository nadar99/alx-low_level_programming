/**
 * rot13 - shift every char by 13
 *@s : the array
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
				s[i] = (((s[i] - 'a') + 13) % 26) + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
				s[i] = (((s[i] - 'A') + 13) % 26) + 'A';
		}
		i++;
	}
	return (s);
}
