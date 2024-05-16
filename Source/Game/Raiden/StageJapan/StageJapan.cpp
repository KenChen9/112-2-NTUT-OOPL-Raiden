#include "stdafx.h"
#include "StageJapan.h"
#include "../BossJapan/BossJapan.h"

namespace Raiden
{
	void StageJapan::InitDerived(StageData &&stage_data)
	{
		boss = std::make_shared<BossJapan>();
		boss->Init(stage_data.boss_data);

		for (auto &fighter_data : stage_data.fighters_data)
		{

			int index = fighter_pool.AddElement();
			fighter_pool[index]->Init(std::move(fighter_data));
		}
	}

	void StageJapan::UpdateDerived(const Player &player)
	{
		
	}
}
