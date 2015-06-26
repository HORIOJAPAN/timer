#ifndef _INC_TIMER
#define _INC_TIMER

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
	//�v���J�n�_�C�I���_���i�[����z��
	vector<std::chrono::time_point<std::chrono::system_clock>> start, end;

	//�w�肵���P�ʂŎ��Ԃ�Ԃ�
	int retTime(std::chrono::time_point<std::chrono::system_clock> start, std::chrono::time_point<std::chrono::system_clock> end, tUnit unit);

	//�P�ʂ̖��O��Ԃ�
	string unitname( tUnit unit);

public:
	//�v���J�n�_
	//�����ۑ�����ꍇ�͔ԍ�(int�^�̐���)���w��
	//�ԍ����A���łȂ��Ƃ��܂�����Ȃ��̂Œ���
	void Start( int timeNum );

	//�v�����ʕۑ�
	//�����͔ԍ��C�P�ʁC���x���C�ۑ����̃t�@�C����
	//�ԍ��ȊO�͏ȗ��\(�I�[�o�[���[�h����Ă���`�̂�)
	//�ۑ����̃t�@�C�������w�肷��Ƃ��̃t�@�C���̍Ō���ɒǋL����
	//�t�@�C�����w��Ȃ��̏ꍇ�͕ۑ����Ȃ�
	void End(int timeNum , string filename , string label, tUnit unit);
	void End(int timeNum , string filename);
	void End(int timeNum , string filename, string label);
	void End(int timeNum , tUnit unit);
	void End(int timeNum);

};

#endif