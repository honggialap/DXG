#pragma once
#include "GameObject.h"

namespace GameSample
{
	class CPlatform : public Engine::CGameObject
	{
	public:
		CPlatform();
		~CPlatform();

	private:

	};
	typedef CPlatform* pPlatform;
}