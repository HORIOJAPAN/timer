#include "Timer.h"
#include <iostream>

void main()
{
	char z;//getchar�p

	Timer t;//Timer�̐錾

	t.Start();//����J�n�_

	//��������쐬���ĕW���o�͂ɗ���
	for (int i = 1; i <= 100; i++)
	{
		string str("������i �O�ցO�j�� �ް�");
		cout << str << endl;

		//10�񂲂ƂɎ��Ԃ�ۑ����ĊJ�n���Ԃ̏��������s��
		if (!(i % 10))
		{
			t.getLapTime();
		}
	}

	t.Save("test.txt", Timer::millisec);//�S�̂̏������Ԃ̑��茋�ʕۑ�

	cout << t.getNowTime() << endl;

	z = getchar();

}