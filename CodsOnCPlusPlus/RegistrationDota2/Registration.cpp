#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include "Windows.h"
#include "conio.h"
#include <locale>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <string>
#include <cassert>
#include <sstream>
#include "Registration.h"
using namespace std;



void Registration::Print(string _string)
{
	
	
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
	
}

Registration::Registration()
{
}

void Registration::Hello()
{
	Print("����� ���������� �� ������ �� Dota 2. ����������� � ����������� � ��������� ���� ����.\n");
}

Registration::Registration(string name, int position, long numberz, int age, int mmr)
{
	this -> age = age;
	this -> position = position;
	this -> numberz = numberz;
	this -> mmr = mmr;
	Print("������� ���� ���:\n");
	cin >> name;
	Print(name);
	Print(" , ������� ����� �������, �� ������� �� ������ ������.\n1. �����\n2. ���\n3. �������\n4. ������� 4 �������\n5. ������� 5 �������\n");
	cin >> position;
	while (position >= 6 || position < 0)
	{
		position = 0;
		Print("������� ����������� � ������\n");
		cin >> position;
	}
	Print(name);
	Print(" , ������� ����� �������\n");
	cin >> numberz;
	while (numberz > 9999999999 || numberz < 1000000000 || numberz < 0)
	{
		numberz = 0;
		Print("����� ������� �����������!\n");
		cin >> numberz;
	}
	Print(name);
	Print(" , ������� ���� ���\n");
	cin >> mmr;
	while (mmr >= 10000 || mmr <= 0)
	{
		mmr = 0;
		Print("������ ���� �� ����������.\n");
		cin >> mmr;
	}
	Print("������ ������ �����:\n");
	cout << "��� - " << name << endl << "����� ������� - " << position << endl << "����� ������� - " << numberz << endl << "������� ��� - " << mmr << endl;
}


Registration::~Registration()
{
}
