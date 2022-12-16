#include <stdio.h>
#include <cmath>
#include <iostream>
#include <fstream>
#include <ctime>
#define NUM_POINTS 10
using namespace std;

/*int a;
char b, c;
cin >> a >> b >> c; // a=33, b=2.5 c=-8
cout << a << b << c; //imprimeix 332. perque conta com a char b=2 i c=.

int a, b;
char c;
cin >> a >> b >> c; // a=33, b=2.5 c=-8
cout << a << b << c << a; //imprimeix 332.5 perque conta com a int b=2 char c=. i int afinal=5
*/

/*
struct point
{
	float x;
	float y;
};

float distance2P(point p1, point p2)
{
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float PerimeterOfPolygon(point poly[], int size)
{
	float perimeter = 0.0f;
	for (int i = 0; i < size; i++)
	{
		perimeter += distance2P(poly[i], poly[(i + 1)%size]);
	}
	return perimeter;
}

int main()
{

	point polygon[NUM_POINTS];
	float x, y;
	int i = 0;

	ifstream myFile("prova.txt");

	if (myFile.is_open())
	{
		while (myFile >> x >> y)
		{
			polygon[i].x = x;
			polygon[i].y = y;
			i++;
			cout << x << "\t" << y << endl;
		}
		myFile.close();

		ofstream myFile2("perimeter.txt");
		myFile2 << PerimeterOfPolygon(polygon, NUM_POINTS) << endl;
		myFile2.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	return 0;

}
*/

int RandomNumber(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

bool CorrectLeter(int& x, char letra)
{
	bool correct = false;
	int modul = x % 23;
	char lletra;
	switch (modul)
	{
	case 0:
		lletra = 'T';
		break;
	case 1:
		lletra = 'R';
		break;
	case 2:
		lletra = 'W';
		break;
	case 3:
		lletra = 'A'; 
		break;
	case 4:
		lletra = 'G'; 
		break;
	case 5:
		lletra = 'M';
		break;
	case 6:
		lletra = 'Y';
		break;
	case 7:
		lletra = 'F';
		break;
	case 8:
		lletra = 'P'; 
		break;
	case 9:
		lletra = 'D';
		break;
	case 10:
		lletra = 'X'; 
		break;
	case 11:
		lletra = 'B';
		break;
	case 12:
		lletra = 'N';
		break;
	case 13:
		lletra = 'J';
		break;
	case 14:
		lletra = 'Z';
		break;
	case 15:
		lletra = 'S';
		break;
	case 16:
		lletra = 'Q';
		break;
	case 17:
		lletra = 'V';
		break;
	case 18:
		lletra = 'H';
		break;
	case 19:
		lletra = 'L';
		break;
	case 20:
		lletra = 'C';
		break;
	case 21:
		lletra = 'K';
		break;
	case 22:
		lletra = 'E';
		break;
	}
	if (letra == lletra)
		correct = true;
	return correct;
}

void PrintCodi(int msg[], int size)
{
	for (int i = 0; i < size; i++)
		cout << msg[i] << ' ';
}

int main()
{
	//1. Create a program that generates x random numbers and saves them in a file (separated by ' ')
	/*
	srand(time(NULL));
	int x = 25;

	ofstream myFile("randomNumbers.txt");
	if (myFile.is_open())
	{
		for(int i =0; i<x;i++)
			myFile << RandomNumber(1, 100) << ' ';
		myFile.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	return 0;
	*/

	//2. Create a porgram that reads a file with some numbers(int) separated by ' '. 
	//Then it must print in another file the sum of all of them and the average of all the numbers from the input file.
	/*
	float x;
	float sum = 0.0f;
	int numbers = 0;

	ifstream myFile("prova.txt");
	if (myFile.is_open())
	{
		while (myFile >> x)
		{
				sum += x;
				numbers++;
		}
		myFile.close();

		ofstream myFile2("copy of prova.txt");
		myFile2 << sum << endl << sum/numbers;
		myFile2.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	return 0;
	*/

	//3. Create a program that reads a file that contains DNI numbers and characters. 
	//Then you have to save in another file OK/ERROR indicating whether the character is the correct one.
	/*
	int x;
	char letra;

	ifstream myFile("DNI.txt");
	if (myFile.is_open())
	{
		ofstream myFile2("isDNIcorrect.txt");
		while (myFile >> x >> letra)
		{
			if (CorrectLeter(x, letra) == true)
				myFile2 << x << letra << "\t" << "OK" << endl;
			else
				myFile2 << x << letra << "\t" << "ERROR" << endl;
		}
		myFile.close();
		myFile2.close();


	}
	else
		cout << "Error al orir arxiu" << endl;
	*/

	//4. Create a program that reads a message from a file (original_message.txt), encrypts it and writes it
	//to a file (encrypted_message.txt) the Ascii code of each character with a shift X.
	/*
	char letra;
	int x = 2;
	int msg, letraNum;

	ifstream myMessage("original_message.txt");
	if (myMessage.is_open())
	{
		ofstream encrypt("encrypted_message.txt");
		while (myMessage >> letra)
		{
			msg = letra + x;
			encrypt << msg << ' ';
		}
		myMessage.close();
		encrypt.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	// Create another program to decrypt the message and write it to a file (decrypted_message.txt)
	ifstream encrypt("encrypted_message.txt");
	if (encrypt.is_open())
	{
		ofstream decrypt("decrypted_message.txt");
		while (encrypt >> letraNum)
		{
			msg = letraNum - x;
			decrypt << (char)msg;
		}
		decrypt.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	return 0;
	*/
	
	//6. Create a program to process the highscores of CSCO reading them from a file with the following format(max 10 users / file) :
	//{player_name} {num_kills} {num_assists} {num_deaths} {g_won} {g_lost} -> Boji 5 1 4 1 0
	//The result should be a file with the following info : ● Most killer ● Most assistant ● Best K / D
	
	
	
	
	
	
	
	
	
}