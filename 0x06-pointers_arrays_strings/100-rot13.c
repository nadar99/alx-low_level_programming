/**
 * root13 - shift every char by 13
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
			if (s[i] + 13 <= 'z')
			{
				s[i] += 13;
			}
			else
			{
				s[i] -= 13;
			}
			
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] + 13 <= 'Z')
			{
				s[i] += 13;
			}
			else
			{
				s[i] -=13;
			}
		}
		i++;
	}
	return (s);
}
