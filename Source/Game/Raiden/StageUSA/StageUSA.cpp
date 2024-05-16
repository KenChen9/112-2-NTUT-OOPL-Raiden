#include "stdafx.h"
#include "StageUSA.h"
#include "../BossUSA/BossUSA.h"
#include "../../config.h"
namespace Raiden
{
	void StageUSA::InitDerived(StageData &&stage_data)
	{
		boss = std::make_shared<BossUSA>();
		boss->Init(stage_data.boss_data);
		
		for (auto &fighter_data : stage_data.fighters_data)
		{
			int index = fighter_pool.AddElement();
			fighter_pool[index]->Init(std::move(fighter_data));
		}
	}

	void StageUSA::UpdateDerived(const Player &player)
	{
	}
}
