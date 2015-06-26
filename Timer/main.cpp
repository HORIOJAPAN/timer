#include "Timer.h"
#include <iostream>

void main()
{
	char z;//getchar用

	Timer t;//Timerの宣言

	t.Start(0);//測定開始点
	t.Start(1);//2つ目の計測開始点

	//文字列を作成して標準出力に流す
	for (int i = 1; i <= 10000; i++)
	{
		string str("⊂二二二（ ＾ω＾）二⊃ ﾌﾞｰﾝ");
		cout << str << endl;

		//10回ごとに時間を保存して開始時間の初期化を行う
		if (!(i % 1000))
		{
			t.End(1, "test.txt");
			t.Start(1);
		}
	}

	t.End(0,"test.txt","処理全体", Timer::sec);//全体の処理時間の測定結果保存


	z = getchar();

}