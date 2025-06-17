#include <iostream>

#include <cstdlib>
using namespace std;


void FillMaterixOrderNumebr(int arr[3][3], int rows, int cols)
{
	int counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			counter++;
			arr[i][j] = counter;
		}

	}

}

void PrintMatrix(int arr[3][3], int rows, int cols)
{
	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cout << " " << arr[i][j] << "\t";
		}
		cout << "\n";
	}


}

void TransposedMatrix(int arr[3][3], int arrTransposed[3][3], int rows, int cols)
{

	int counter = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			counter++;
			arrTransposed[i][j] = arr[j][i];
		}

	}


}


int main()
{

	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrTransposed[3][3];

	FillMaterixOrderNumebr(arr, 3, 3);
	TransposedMatrix(arr,arrTransposed, 3, 3);

	cout << "\nThe following is a 3x3 ordered matrix : " << endl;
	PrintMatrix(arr, 3, 3);

	cout << "\n\nThe following is a 3x3 Transposed matrix : " << endl;
	PrintMatrix(arrTransposed, 3, 3);


	
}

