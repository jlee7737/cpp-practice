/*
Junhak Lee
ITP 165, Fall 2014
Homework 8
junhak.lee@usc.edu
*/
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;

//FBORWICNKETXVJMUZLPSHDAGQY //letter1 cipher
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

void decrypt(std::string& cipher, std::string& encrypText)
{
	const int NUM_ALPH = 26; //make alphabet list
	char alphabet[NUM_ALPH];
	for (int i = 0; i < NUM_ALPH; i++)
	{
		alphabet[i] = 65 + i;
	}

	int encTextLength = encrypText.length(); //store length of cipher and message
	int cipherLength = cipher.length();
	
	for (int j = 0; j < encTextLength; j++)//goes through message
	{
		bool match = 0; //if there is a match variable
		for (int k = 0; k < NUM_ALPH; k++) //goes through alphabet
		{
			if (!match && (encrypText[j] == alphabet[k])) //if there is a match from alphabet
			{
				encrypText[j] = cipher[k]; //replace letter from cipher in same pos as alphabet
				match = 1;
			}
		}
	}
}

int main()
{
	std::string line;//to hold line of file
	std::string fileName; //create file name string variable
	std::string cipher; //string to hold cipher
	std::string secretMessage; //string to hold secret message

	cout << "Enter file name: "; //request file name and assigns fileName
	cin >> fileName; //choose from -->(letter1-enc.txt, letter2-enc.txt, letter3-enc.txt, simple-enc.txt)

	std::ifstream encFile(fileName); //create input fstream

	if (encFile.is_open()) //checks if file is open
	{
		cout << "File exists, processing..." << endl << endl;
						
		std::getline(encFile, line);//extract cipher
		cipher = line;

		while (encFile.eof() != true) //extract encrypted secret message
		{			
			std::getline(encFile, line); //gets line
			secretMessage = secretMessage + line; //makes full secret message in secretMessage
		}

		cout << "Cipher: " << endl;
		cout << cipher << endl << endl;
		cout << "--------------------------------------------------------------" << endl;

		cout << "Original Text: " << endl;
		cout << secretMessage << endl << endl;
		cout << "--------------------------------------------------------------" << endl;

		decrypt(cipher, secretMessage); //decrypt secret message
		
		cout << "Decoded Text: " << endl;
		cout << secretMessage << endl << endl;//prints decrypted message
	}
	else
	{
		cout << "Error! File not found!" << endl; //if error
	}
	return 0;
}

