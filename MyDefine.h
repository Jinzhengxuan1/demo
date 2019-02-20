#pragma once
#ifndef _MyDefine_H_
#define _MyDefine_H_
#include<mutex>
using namespace std;
	extern mutex g_lock;//线程锁
	extern float Stroke;//条带的宽度
	extern int StreakNum;//拖尾的最大长度
	extern int threadTime;//拖尾消失时间
	extern float lineColor[];//拖尾颜色
	extern const float MAX_LIFE_SPAN = 1.5f;//最大生命周期
	extern const float LIFE_SPAN_STEP = 0.05f;//生命周期步进
	extern int SRC_BLEND;//源混合因子
	extern int DST_BLEND;//目标混合因子
	extern int BLEND_FUNC;//混合方式
	extern int THREAD_BEGIN;
	extern int THREAD_END;
#endif // !_MyDefine_H_

