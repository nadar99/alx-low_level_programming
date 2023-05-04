/**
 * leet - change string to uppercase
 *@s : the array
 * Return: string
 */
char *leet(char *s)
{
	int i = 0, j;
	char arr[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (s[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == arr[j] || s[i] == (arr[j] - 32))
			{
				s[i] = j + '0';
			}
		}
		i++;
	}

	return (s);
}
