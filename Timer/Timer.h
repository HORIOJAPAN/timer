#ifndef _INC_TIMER
#define _INC_TIMER

// 2015/09/25 ver0.1

#include <string>
#include <chrono>
#include <vector>

using namespace std;

class Timer
{
public:
	//�P�ʂ̎��
	enum tUnit { sec, millisec, microsec, nanosec };

private:
	//�����̂Ō^��Z����`
	typedef std::chrono::time_point<std::chrono::system_clock> _time;

	//�v���J�n�_�C���ԓ_���i�[����
	vector<_time>	rawLap;
	vector<int >	lapTime;

	//�P�ʂ̖��O��Ԃ�
	string unitname( tUnit unit);

	//�w�肵���P�ʂŎ��Ԃ�Ԃ�
	int getTime(_time start, _time end, tUnit unit);

public:
	//�v���J�n�_
	void Start();

	//�v�����ʕۑ�
	//�����̓t�@�C����,�P��
	//�w�肵���t�@�C�������ɑ��݂�����t�@�C���̍Ō���ɒǋL����
	void Save(string filename, tUnit unit = millisec);

	// �w�肵�����_����̌o�ߎ��Ԃ��擾
	int getLapTime(int Criteria = 1, tUnit unit = millisec, bool isSavaLap = true);

	// ���ݎ�����Ԃ�
	string getNowTime();
};

#endif