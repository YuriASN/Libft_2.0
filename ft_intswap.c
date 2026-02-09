/** @brief Swap the value of 2 pointers to int.
 * @param x 1st pointer of value to swap.
 * @param y 2nd pointer of value to swap. */
void	ft_intswap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
