/**
 * rev_string - string in reverse
 *@s : pointer to a charachter
 * Return: void.
 */
void rev_string(char *s)
{
	int size = 0, i = 0;
	char *s2 = s, *s3 = s;
	char temp;

	while (*s2 != '\0')
	{
		size++;
		s2++;
	}
	s2--;
	while (i != (size / 2))
	{
		temp = *s3;
		*s3 = *s2;
		*s2 = temp;
		s2--;
		s3++;
		i++;
	}
}
