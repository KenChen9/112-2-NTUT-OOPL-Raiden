#include "stdafx.h"
#include "StageBrazil.h"
#include "../BossBrazil/BossBrazil.h"
#include "../../config.h"
namespace Raiden
{
	void StageBrazil::InitDerived(StageData &&stage_data)
	{
		boss = std::make_shared<BossBrazil>();
		boss->Init(stage_data.boss_data);
		
		for (auto &fighter_data : stage_data.fighters_data)
		{
			int index = fighter_pool.AddElement();
			fighter_pool[index]->Init(std::move(fighter_data));
		}
	}

	void StageBrazil::UpdateDerived(const Player &player)
	{
		
	}
}
