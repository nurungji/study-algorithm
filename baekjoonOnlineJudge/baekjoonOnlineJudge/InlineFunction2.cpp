#include <iostream>

using namespace std;

class Chulsoo
{
public:
	void Eat(int SteakWeight);
	inline void EatInline(int SteakWeight)
	{
		cout << "EatInline() :: ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
	}
};

int main(void)
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.EatInline(500);
	return 0;
}

void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat() :: ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
}