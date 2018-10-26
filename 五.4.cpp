#include <iostream>
#include <Windows.h>

using namespace std;

float checkAgeScore (int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score > 5)
		throw score;
	cout << age <<"    " ;
	return score * 20;
}


int main()
{
	char name[20];
	int age;
	float score;
	cout << "请输入学生姓名、年龄、成绩：" << endl;
	cin >> name >> age >> score;
	cout << name <<"    " ;
	try
	{
		cout << checkAgeScore(age, score) << endl;
	}
	catch (int)
	{
		cout << "age error" << endl;
	}
	catch (float)
	{
		cout << "score error"<<endl;
	}

	system("pause");
	return 0;
}