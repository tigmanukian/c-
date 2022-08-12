#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "am");

	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;
		
		for(int j = 0 ; j < i; j++){
			if (arr[j] == newRandomValue )
			{
				alreadyThere = true;
				break;
			}
		}
		if(!alreadyThere )
		{
			arr[i] = newRandomValue;
			i++;
		}
	}


	for(int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

}




































// #include <iostream>

// using namespace std;

// int main()
// {
// 	setlocale(LC_ALL, "am");
// 	// const  int size = 5;

// 	int  arr[6] = {5,8,34,87,2,3}; 

// 	double desimolNum = 23.5;
// 	bool isRight = false;
// 	string addText = "I am right people ";
// 	char  symbol = '\\';

// 	for (int  i = 0; i < sizeof(arr)/ sizeof(arr[0]) ; i++)
// 	{
// 		if(arr[i] < 10)
// 		{
// 			cout << arr[i] << endl; 
// 		}
// 		// cout << arr[i] << endl; 
// 	}
  
// 	cout << sizeof(arr) << "   sizeof"<< endl;

	
// }






// #include <iostream>

// using namespace std;

// int main()
// {
// 	int width , height;

// 	cout << "please enter orthogonal height" << "\n";
// 	cin >> height;
// 	cout << " please enter orthogonal width" << "\n";
// 	cin >> width;
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width ; j++)
// 		{	
// 			cout << "*" ;
// 		}
// 		cout  << endl;
// 	}
// }  






// #include <iostream>

// using namespace std;

// int main()
// {
// 	setlocale(LC_ALL, "am");
// 	int symbolCount;
// 	char symbol;
// 	int lineType;
// 	int index = 0;

// 	cout << "please enter symbole line Count ";
// 	cin >>  symbolCount;

// 	cout << "enter sybol";
// 	cin >> symbol;

// 	cout << "choes type line" << endl
// 		 << " horizontal line" << endl
// 		 << " virtical line "  << endl;
// 	cin  >>  lineType;

// 	if(lineType != 1 && lineType != 2)
// 	{
// 		cout << "please enter right type" << endl;
// 		return;
// 	}

// 	while (index < symbolCount)
// 	{
// 		if(lineType == 1)
// 		{
// 			cout << symbol << "\n";
// 		}
// 		if(lineType == 2)
// 		{
// 			cout << symbol << "\n";

// 		}

// 		index++;
// 	}
// 	cout << endl << endl;
// }