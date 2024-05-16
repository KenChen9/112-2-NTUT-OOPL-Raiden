#pragma once
#include "../../../Library/gameutil.h"
#include "../Control/Control.h"
#include "../Data/PlayerData.h"
#include "../GameObjectPool/GameObjectPool.h"
#include "../Bullet/Bullet.h"
#include "../Collidable/Collidable.h"
#include <set>
#include <ctime>

namespace Raiden
{
	class Player : public Collidable
	{
	public:
		void Init(PlayerData&& player_data);
		void Update(const Control &control);
		void Show();
		int GetScore() const;
		int GetHighScore() const;
		int GetLifeCount() const;
		int GetBombCount() const;
		void Damage();
		std::vector<std::shared_ptr<Bullet>> IsAttack();
		void RecovryBullet();
	private:
		void UpdateByKeyboard(const std::set<Key> &keys);
		void UpdateByMouse(CPoint point);
		const int MOVE_STEP = 10;
		game_framework::CMovingBitmap sprite;
		int sprite_index = 5;
		int score = 0;
		int high_score = 0;
		int life_count = 3;
		int bomb_count = 3;
		GameObjectPool<Raiden::Bullet> bullets;
		std::clock_t fire_cooldown_clock;
	};
}
