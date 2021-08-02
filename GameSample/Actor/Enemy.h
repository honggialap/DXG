#pragma	once

#include "GameObject.h"

namespace GameSample
{
	class CEnemy : public Engine::CGameObject
	{
	public:
		CEnemy();
		~CEnemy();

	private:

	};

	typedef CEnemy* pEnemy;
}