#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:

private:
	char *name;
	int age;
};

class Professor:Person
{
public:
	int getdata(char* name, int age, int publications)
	{
		
	}
	void* putdata()
	{
		cout << name << age << publications << cur_id << endl;
	}
private:
	int publications;
	int cur_id;
};

class Student:Person
{
public:
};