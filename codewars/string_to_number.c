int	string_to_number(const char *src)
{
	int	response;
	int	counter;
	int	sign;

	counter = 0;
	response = 0;
	sign = 1;
	if (src[counter] == 45 || src[counter] == 43)
	{
		if (src[counter] == 45)
		{
			sign = -1;
		}
		counter++;
	}
	while (src[counter] >= 48 && src[counter] <= 57 && src[counter])
	{
		response = response * 10 + (src[counter] - 48);
		counter++;
	}
	return (response * sign);
}
