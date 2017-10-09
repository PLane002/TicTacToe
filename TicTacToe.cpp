#include <iostream>
#include <cstdlib>

using namespace std;

#define WIDTH 3
#define HEIGHT 3

//int array[WIDTH][HEIGHT];


class Board
{
	public:
		int row;
		int column;
		int array[WIDTH][HEIGHT];



		void createBoard()
		{
			for(row = 0; row < WIDTH; row++)
			{

				for(column = 0; column < HEIGHT; column++)
				{
					array[row][column] = 0;
					//cout << array[row][column];
				}
				//cout << "\n";
			}
			
		}

		void printBoard()
		{
			for(row = 0; row < WIDTH; row++)
			{
				for(column = 0; column < HEIGHT; column++)
				{
					cout << array[row][column];
				}
				cout << "\n";
			}
			
		}		
};



int main()
{
	//const char* array[WIDTH][HEIGHT]; //for a string array
	/*int array[WIDTH][HEIGHT];
	int row;
	int column;*/
	int first_to_go;

	//initialize random seed
	srand (time(NULL));
	
	//generate a number between 1 and 2, this will be the first player to go.
	first_to_go = rand() % 2 + 1;

	cout << "Here is the starting board:" << "\n";

	/*
	//Create the board
	for(row = 0; row < WIDTH; row++)
	{

		for(column = 0; column < HEIGHT; column++)
		{
			array[row][column] = 0;
			cout << array[row][column];
		}
		cout << "\n";
	}*/

	Board b1;
	b1.createBoard();
	b1.printBoard();

	cout << "Player " << first_to_go << " is the first to go. \n";

	cout << "Player " << first_to_go << " , which row do you want to go to? \n";

	
}

