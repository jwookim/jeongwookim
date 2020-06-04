#pragma once
#include"Time.h"
#include"Character.h"


enum B_CATEGORY
{
	B_CATEGORY_MELEE_ENHANCE,
	B_CATEGORY_SPEED_UP,
	B_CATEGORY_HIDING,
	B_CATEGORY_SHIELD
};

enum D_CATEGORY
{
	D_CATEGORY_STUN,
	D_CATEGORY_BLIND,
	D_CATEGORY_SLOW,
	D_CATEGORY_SILENCE
};

class State
{
private:
	int m_iDuration;
	int m_iValue;
	int m_iStartTime;
public:
	bool TimeCheck();
};

class Debuff : public State
{
private:
	D_CATEGORY m_Category;
};

class Buff : public State
{
private:
	B_CATEGORY m_Category;
};
