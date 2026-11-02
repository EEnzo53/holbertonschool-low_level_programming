/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;
	int j;

	while (s[len] != '\0')
		len++;

	len--;
	i = 0;
	j = len;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
