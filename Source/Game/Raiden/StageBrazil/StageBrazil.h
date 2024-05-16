#pragma once
#include "../Stage/Stage.h"
#include "../Player/Player.h"
#include "../GameObjectPool/GameObjectPool.h"
#include "../Fighter/Fighter.h"
#include "../Bullet/Bullet.h"

namespace Raiden
{
	class StageBrazil : public Stage
	{
	public:
		void InitDerived(StageData &&stage_datas) override;
		void UpdateDerived(const Player &player) override;
	};
}
