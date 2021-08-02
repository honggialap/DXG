#pragma	once
#include "GameObject.h"

namespace GameSample
{
	class CCharacter : public Engine::CGameObject
	{
	public:
		CCharacter();
		~CCharacter();

	private:

	};
	typedef CCharacter* pCharacter;

}