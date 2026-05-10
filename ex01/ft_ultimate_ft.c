#include <unistd.h>

// Function found on the Internet - for testing
void ft_putnbr(int n) {
    // Handle the smallest possible integer to avoid overflow during negation
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    // Handle negative numbers
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    // Recursively print preceding digits
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    // Convert the current digit to ASCII and write it
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int	a;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	a = 2147483647;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;

	ft_putnbr(a);
	ft_ultimate_ft(p9);
	ft_putnbr(a);
	return (0);
}
