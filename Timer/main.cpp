#include "Timer.h"
#include <iostream>

void main()
{
	char z;//getchar�p

	Timer t;//Timer�̐錾

	t.Start(0);//����J�n�_
	t.Start(1);//2�ڂ̌v���J�n�_

	//��������쐬���ĕW���o�͂ɗ���
	for (int i = 1; i <= 10000; i++)
	{
		string str("������i �O�ցO�j�� �ް�");
		cout << str << endl;

		//10�񂲂ƂɎ��Ԃ�ۑ����ĊJ�n���Ԃ̏��������s��
		if (!(i % 1000))
		{
			t.End(1, "test.txt");
			t.Start(1);
		}
	}

	t.End(0,"test.txt","�����S��", Timer::sec);//�S�̂̏������Ԃ̑��茋�ʕۑ�


	z = getchar();

}