#pragma once
#include "../../../Library/gameutil.h"

namespace Raiden
{
	/*
	 * Class Name癒GCollisionBox
	 * Class Purpose癒GDisplay CollisionBox and Create CollisionBox image
	 * Member Variables癒G
	 * game_framework::CMovingBitmap _display;
	 *	 - vector<tuple<int, int, int, int>> _boxCollisionBox;  CollisionBox vector of box,
			first and second data in tuple  is  TopLeft of  CollisionBox 
	 * 	 - int width;  CollisionBox image Width
	 * 	 - int height;  CollisionBox image Height
	 * Member Functions
	 *   - CollisionBox 癒GConstructors Function
	 *   - Update  : Update position of this object
	 *   - Show   癒GDisplay Object
	 * Constructors癒G
	 *   - Bullet癒GNeed vector<tuple<int, int, int, int>> to create CollisionBox image
	 * Destructor癒G
	 *  None
	*/
	class CollisionBox {
	public:
		CollisionBox() {};
		void Init(vector<tuple<int, int, int, int>>);
		void Show();
		void SetTopLeft(int, int);
		bool IsCollisionBoxOverlap(CollisionBox&);
		pair<int, int> GetTopLeft();
		vector<tuple<int, int, int, int>> GetBoxCollisionBox();
	private:
		HBITMAP CreateCollisionBoxBitmap(HDC, int);
		game_framework::CMovingBitmap display;
		vector<tuple<int, int, int, int>> box_collision_box;
		int width = 0;
		int height = 0;
	};
}