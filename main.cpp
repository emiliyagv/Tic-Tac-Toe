#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
void Matrix()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			cout << "  " << matrix[i][j] << "  |";
		}
				cout << endl;
		std::cout << "--------------------" << endl;
	}
}

void Input()
{
	int a;
	cout << "Please give a number: ";
	cin >> a;


  switch (a) {
	case 1:
	    if(matrix[0][0] == '1'){
		matrix[0][0] = player;
		}else{
		    std::cout << "Try another field!" << std::endl;
		    Input();
		}
		 break;
	case 2:  
		if(matrix[0][1] == '2'){
		matrix[0][1] = player;
		}else{
			std::cout << "Try another field!" << std::endl;
			Input();
		}
		     break;
	case 3:
		if(matrix[0][2] == '3'){
		matrix[0][2] = player;
		}else{
			std::cout << "Try another field!" << std::endl;
			Input();
			}
			 break;
	case 4 :	   
	 if(matrix[1][0] == '4'){
		matrix[1][0] = player;
	   }else{
		    std::cout << "Try another field!" << std::endl;
		 	Input();
	 }
	         break;
	case 5 :
		if(matrix[1][1] == '5'){
		matrix[1][1] = player;
		}else{
		    std::cout << "Try another field!" << std::endl;
			Input();
		}
		        break;
	case 6 :
		if(matrix[1][2] == '6'){
		matrix[1][2] = player;
		}else{
			std::cout << "Try another field!" << std::endl;
			Input();
			}
			break;
	case 7 :
		if(matrix[2][0] == '7'){
		matrix[2][0] = player;
		}else{
			std::cout << "Try another field!" << std::endl;
			Input();
			}
			break;
	case 8 :
		if(matrix[2][1] == '8'){
		matrix[2][1] = player;
		}else{
			std::cout << "Try another field!" << std::endl;
			Input();
			}
			break;
	case 9 :
	    if(matrix[2][2] == '9'){
		matrix[2][2] = player;
		}else{
		    std::cout << "Try another field!: " << std::endl;
		    Input();
			}
			break;
    default: 
            std::cout << "Invalid number" <<std::endl;
    }
 
}



void Players()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	 if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

	//second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '#';
}
int main()
{
	Matrix();
	while (true)
	{
		n++;
		Input();
		Matrix();
		if (Win() == 'X')
		{
			cout << "X is the winner!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O is the winner!" << endl;
			break;
		}else if(Win() == '#' && n == 9){
            cout << "Game is over! There is no winner :(" << endl; 
		}
		Players();
	}
	system("pause");
	return 0;
}