#pragma once
#ifndef _MyDefine_H_
#define _MyDefine_H_
#include<mutex>
using namespace std;
	extern mutex g_lock;//�߳���
	extern float Stroke;//�����Ŀ��
	extern int StreakNum;//��β����󳤶�
	extern int threadTime;//��β��ʧʱ��
	extern float lineColor[];//��β��ɫ
	extern const float MAX_LIFE_SPAN = 1.5f;//�����������
	extern const float LIFE_SPAN_STEP = 0.05f;//�������ڲ���
	extern int SRC_BLEND;//Դ�������
	extern int DST_BLEND;//Ŀ��������
	extern int BLEND_FUNC;//��Ϸ�ʽ
	extern int THREAD_BEGIN;
	extern int THREAD_END;
#endif // !_MyDefine_H_

