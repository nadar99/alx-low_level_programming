/**
 * _strcmp - compare between two strings
 *@s1 : first string
 *@s2 : second string
 * Return: 0 if the same , 1 if s1 > s2, 2 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
