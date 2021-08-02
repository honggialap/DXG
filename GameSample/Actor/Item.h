#pragma	once

#include "GameObject.h"

namespace GameSample
{
	class CItem : public Engine::CGameObject
	{
	public:
		CItem();
		~CItem();

	private:

	};

	typedef CItem* pItem;
}