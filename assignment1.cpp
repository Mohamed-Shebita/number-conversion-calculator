//Mohamed tamer shebita   211000379
#include <iostream>
using namespace std;
#include <cmath>
#include<string>
#include<sstream>  

bool flag = true;
void bin_to_dec(int num);
void bin_to_oct(int num);
void bin_to_hex(int num);
void dec_to_bin(int num);
void dec_to_oct(int num);
void dec_to_hex(int num);
void hex_to_bin(string num);
void hex_to_dec(string num);
void hex_to_oct(string num);
void oct_to_bin(int num);
void oct_to_hex(int num);
void oct_to_dec(int num);

void check_decimal(string z);
void check_binary(string z);
void check_hexadecimal(string z);
void check_octal(string z);


int main()
{
	int i, k;
	cout << "Enter the type of the input number" << endl;
	cout << "1:Decimal" << endl << "2:Binary" << endl << "3:Hexadecimal" << endl << "4:Octal" << endl;
	cin >> i;

	cout << "Enter the type of the number converted to:" << endl;
	cout << "1:Decimal" << endl << "2:Binary" << endl << "3:Hexadecimal" << endl << "4:Octal" << endl;
	cin >> k;


	if (i == 2 && k == 1)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_binary(num1);
		if (flag) bin_to_dec(z);
	}
	else if (i == 2 && k == 3)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_binary(num1);
		if (flag) bin_to_hex(z);
	}
	else if (i == 2 && k == 4)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_binary(num1);
		if (flag) bin_to_oct(z);
	}
	else if (i == 1 && k == 2)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_decimal(num1);
		if (flag) dec_to_bin(z);
	}
	else if (i == 1 && k == 3)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_decimal(num1);
		if (flag) dec_to_hex(z);
	}
	else if (i == 1 && k == 4)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_decimal(num1);
		if (flag) dec_to_oct(z);
		
	}
	else if (i == 3 && k == 1)
	{
		string num,z;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num;
		z = num;
		// converting int to string
		stringstream ss;
		ss << z;
		string s;
		ss >> s;
		check_hexadecimal(s);
		if (flag) hex_to_dec(num);
		
	}
	else if (i == 3 && k == 2)
	{
		string num;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num;
		check_hexadecimal(num);
		if (flag) hex_to_bin(num);
	}
	else if (i == 3 && k == 4)
	{
		string num,z;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num;
		check_hexadecimal(num);
		if (flag) hex_to_oct(num);
	}
	else if (i == 4 && k == 1)
	{
		int z;
		string num1;
		cout << "********************************Enter a number********************************" << endl;
		cin >> num1;
		z = stoi(num1);
		check_octal(num1);
		if (flag) oct_to_dec(z);
	}
	else if (i == 4 && k == 2)
	{
	int z;
	string num1;
	cout << "********************************Enter a number********************************" << endl;
	cin >> num1;
	z = stoi(num1);
	check_octal(num1);
	if (flag) oct_to_bin(z);
	}
	else if (i == 4 && k == 3)
	{
	int z;
	string num1;
	cout << "********************************Enter a number********************************" << endl;
	cin >> num1;
	z = stoi(num1);
	check_octal(num1);
	if (flag) oct_to_hex(z);
	}
	else if (i == 1 && k == 1)
	{
		cout << "error";
	}
	else if (i == 2 && k == 2)
	{
	cout << "error";
	}
	else if (i == 3 && k == 3)
	{
	cout << "error";
	}
	else if (i == 4 && k == 4)
	{
	cout << "error";
	}
}


void bin_to_dec(int num)
{
	int reminder, decimal = 0, j = 0;
	cout << num;
	while (num != 0)
	{
		reminder = num % 10;
		decimal = decimal + reminder * pow(2, j);
		++j;
		num = num / 10;
	}
	if (decimal == 0)
		cout << "  is error";
	else
	cout << "=" << decimal << "in decimal";
}


void bin_to_oct(int num) // converting from binary to decimal and from decimal to octal
{
	int reminder, decimal = 0, j = 0, octal_num = 0, i = 1;
	cout << num;
	while (num != 0)
	{
		reminder = num % 10;
		decimal = decimal + reminder * pow(2, j);
		++j;
		num = num / 10;
	}
	i = 1;
	while (decimal != 0)
	{
		octal_num = octal_num + (decimal % 8) * i;
		i = i * 10;
		decimal = decimal / 8;
	}
		cout << "=" << octal_num << "in octal";
}


void bin_to_hex(int num)  // converting from binary to decimal and from decimal to hexadecimal
{
	int reminder, decimal = 0, j = 0,hexadecimal[50], i = 0;
	cout << num<<"=";
	while (num != 0)
	{
		reminder = num % 10;
		decimal = decimal + reminder * pow(2, j);
		++j;
		num = num / 10;
	}
	while (decimal != 0)
	{
		hexadecimal[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if(hexadecimal[j]<'9')
		{ 
			cout << hexadecimal[j];
		}
		else
		{
			cout << (char)(hexadecimal[j] + 55);
		}
	}
	cout << " in hexadecimal";
}


void dec_to_bin(int num)
{
	int binary[25], i = 0;
	cout << num;
	while (num != 0)
	{
		binary[i] = num % 2;
		i++;
		num = num / 2;
	}
	cout << "=";
	for (i = i - 1; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << " in binary";
}


void dec_to_oct(int num)
{
	int octal_num = 0, reminder, i = 1;
	cout << num;
	while (num != 0)
	{
		reminder = num % 8;
		octal_num = octal_num + (reminder * i);
		i = i * 10;
		num = num / 8;
	}
	cout << "=" << octal_num << " in octal";
}


void dec_to_hex(int num)
{
	string hexadecimal;
	int reminder;
	cout << num;
	while (num != 0)
	{
		reminder = num % 16;
		if (reminder <= 9)
		{
			hexadecimal.push_back(reminder + '0');
		}
		else
			hexadecimal.push_back(reminder - 10 + 'A');
		num = num / 16;
	}
	reverse(hexadecimal.begin(), hexadecimal.end());
	cout << "=" << hexadecimal << " in hexadecimal";
}


void hex_to_bin(string num)  // converting from hexadecimal to decimal and from decimal to binary
{
	cout << num << "=";
	int len = num.size(), decimal = 0, z, j = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			z = num[i] - 48;
			decimal = decimal + z * pow(16, j);
			j++;

		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			z = num[i] - 55;
			decimal = decimal + z * pow(16, j);
			++j;
		}
	}
	int binary[25], i2 = 0;
	while (decimal != 0)
	{
		binary[i2] = decimal % 2;
		i2++;
		decimal = decimal / 2;
	}
	for (i2 = i2 - 1; i2 >= 0; i2--)
	{
		cout << binary[i2];
	}
	cout << " in binary";
}


void hex_to_dec(string num)
{
	int len = num.size(), decimal = 0, z, j = 0;
	cout << num<<"=";
	for (int i = len - 1; i >= 0; i--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			z = num[i] - 48;
			decimal = decimal + z * pow(16, j);
			j++;
			
		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			z = num[i] - 55;
			decimal = decimal + z * pow(16, j);
			++j;
		}
	}
	cout << decimal << " in decimal";
}


void hex_to_oct(string num)  // converting from hexadecimal to decimal and from decimal to octal
{
	cout << num<<"=";
	int len = num.size(), decimal = 0, z, j = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			z = num[i] - 48;
			decimal = decimal + z * pow(16, j);
			j++;

		}
		else if (num[i] >= 'A' && num[i] <= 'F')
		{
			z = num[i] - 55;
			decimal = decimal + z * pow(16, j);
			++j;

		}
	}
	int octal_num = 0, reminder, i2 = 1;
	while (decimal != 0)
	{
		reminder = decimal % 8;
		octal_num = octal_num + (reminder * i2);
		i2 = i2 * 10;
		decimal = decimal / 8;
	}
	cout << octal_num << " in octal";
}


void oct_to_bin(int num)  // converting from octal to decimal and from decimal to binary
{
	int decimal = 0, binary = 0, reminder, i = 0;
	cout << num;
	while (num != 0)
	{
		reminder = num % 10;
		decimal = decimal + (reminder * pow(8, i));
		i++;
		num = num / 10;
	}
	i = 1;
	while (decimal != 0)
	{
		binary = binary + (decimal % 2) * i;
		decimal = decimal / 2;
		i = i * 10;
	}
	cout << "=" << binary << " in binary";
}


void oct_to_hex(int num)  // converting from octal to decimal and from decimal to hexadecimal
{
	int decimal = 0, i = 0, reminder1;
	cout << num;
	while (num != 0)
	{
		reminder1 = num % 10;
		decimal = decimal + reminder1 * pow(8, i);
		i++;
		num = num / 10;
	}

	string hexadecimal;
	int reminder2;
	while (decimal != 0)
	{
		reminder2 = decimal % 16;
		if (reminder2 <= 9)
		{
			hexadecimal.push_back(reminder2 + '0');
		}
		else
			hexadecimal.push_back(reminder2 - 10 + 'A');
		decimal = decimal / 16;
	}
	reverse(hexadecimal.begin(), hexadecimal.end());
	cout << "=" << hexadecimal << " in hexadecimal";
}


void oct_to_dec(int num)
{
	int decimal = 0, i = 0, reminder;
	cout << num;
	while (num != 0)
	{
		reminder = num % 10;
		decimal = decimal + reminder * pow(8, i);
		i++;
		num = num / 10;
	}
	cout << "=" << decimal << " in decimal";
}

void check_decimal(string z)
{
	int i = 0;
	while (i != (z.size() ))
	{
		if (z[i] == '1' || z[i] == '0'|| z[i] == '2' || z[i] == '3'|| z[i] == '4' || z[i] == '5'|| z[i] == '6' || z[i] == '7'|| z[i] == '8' || z[i] == '9')
		{
			i++;
		}
		else {
			cout << "error";
			flag = false;
			break;
		}
	}
}

void check_binary(string z)
{
	int i = 0;
	while (i != (z.size() ))
	{
		if (z[i] == '1' || z[i] == '0')
		{
			i++;
		}
		else {
			cout << "error";
			flag = false;
			break;
		}
	}
}

void check_hexadecimal(string z)
{
	int i = 0;
	while (i != (z.size() ))
	{
		if (z[i] == '1' || z[i] == '0' || z[i] == '2' || z[i] == '3' || z[i] == '4' || z[i] == '5' || z[i] == '6' || z[i] == '7' || z[i] == '8' || z[i] == '9'||z[i] == 'A' || z[i] == 'B' || z[i] == 'C' || z[i] == 'D' || z[i] == 'E' || z[i] == 'F')
		{
			i++;
		}
		else {
			cout << "error";
			flag = false;
			break;
		}
	}
}

void check_octal(string z)
{
	int i = 0;
	while (i != (z.size() ))
	{
		if (z[i] == '1' || z[i] == '0' || z[i] == '2' || z[i] == '3' || z[i] == '4' || z[i] == '5' || z[i] == '6' || z[i] == '7')
		{
			i++;
		}
		else {
			cout << "error";
			flag = false;
			break;
		}
	}
}