#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(int grille [8][8], int position, int compt)
{

}

int ft_eight_queens_puzzle(void)
{
	int compt;
	int grille[8][8] = 
	{
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0}
	};

	compt = 0;
	check(grille, 0, compt);
	ft_putchar (compt);
}

int main()
{
	ft_eight_queens_puzzle();
	return 0;
}
