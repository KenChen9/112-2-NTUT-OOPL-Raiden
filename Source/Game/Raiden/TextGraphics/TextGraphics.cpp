#include "stdafx.h"
#include "TextGraphics.h"
#include "../../../Library/gameutil.h"

namespace Raiden {
	std::size_t TextGraphics::RegisterText(CPoint pos, std::string text) {
		texts.push_back(text);
		return texts.size() - 1;
	}
	void TextGraphics::UpdateText(std::size_t index, std::string text) {
		texts.at(index) = text;
	}
	void TextGraphics::ShowTexts() {
		//game_framework::CTextDraw::Print();
	}
}
