#include <iostream>

using namespace std;

int main()
{
	int width , height;

	cout << "please enter orthogonal height" << "\n";
	cin >> height;
	cout << " please enter orthogonal width" << "\n";
	cin >> width;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width ; j++)
		{	
			cout << "*" ;
		}
		cout  << endl;
	}
}  






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