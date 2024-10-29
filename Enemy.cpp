#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::pPhaseTable[])() = {
	   &Enemy::Approach,
	   &Enemy::Shot,
	   &Enemy::Breakaway,
};;;

void Enemy::Updata()
{
	(this->*pPhaseTable[static_cast<size_t>(phase)])();
}

void Enemy::Approach()
{
	printf("Approach\n");
	phase = Phase::Shot;
}

void Enemy::Shot()
{
	printf("Shot\n");
	phase = Phase::Breakaway;
}

void Enemy::Breakaway()
{
	printf("Breakaway\n");
	phase = Phase::Approach;
}
