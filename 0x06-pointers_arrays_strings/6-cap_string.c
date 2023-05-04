/**
 * cap_string- change string to uppercase
 *@s : the array
 * Return: string
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
		{
			index++;
		}
		if (s[index] == ' ' || s[index] == '\t' ||
				s[index - 1] == '\n' || s[index - 1] == ',' ||
				s[index - 1] == ';' || s[index - 1] == '.' ||
				s[index - 1] == '!' || s[index - 1] == '?' ||
				s[index - 1] == '"' || s[index - 1] == '(' ||
				s[index - 1] == ')' || s[index - 1] == '{' ||
			       	s[index - 1] == '}' || index == 0)
		{
			s[index] -= 32;
		}
		index++;
	}
	return (s);
}
