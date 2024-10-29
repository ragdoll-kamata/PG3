#pragma once

enum class Phase {
	Approach,
	Shot,
	Breakaway,
};

class Enemy
{
public:
	void Updata();

private:
	static void (Enemy::* pPhaseTable[])();

	void Approach();

	void Shot();

	void Breakaway();

	Phase phase = Phase::Approach;
};

