#pragma once
#include <atltypes.h>
#include <vector>

namespace Raiden {
	class TextGraphics {
	public:
		std::size_t RegisterText(CPoint pos, std::string text = "");
		void UpdateText(std::size_t index, std::string text);
		void ShowTexts();
	private:
		std::vector<std::string> texts;
	};
}
