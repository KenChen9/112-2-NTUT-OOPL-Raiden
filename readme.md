# 112-2 NTUT OOPL — 雷電 (Raiden)

本專案為 **國立臺北科技大學 112 學年度第 2 學期（2024 - Spring）物件導向程式設計實習** 的專題成果。本遊戲基於 **LGF (Leistungsstarkes Game Framework)** 遊戲框架進行開發。

> **[ 專案聲明 ] Upstream 來源說明**
> 本專案源自主要開發倉庫（[NTUT-Chinoococo/2024OOPL](https://github.com/NTUT-Chinoococo/2024OOPL)）。因先前專案封存（Archive）導致 GitHub 預設的 Fork 關聯中斷，特此於本專案（[KenChen9/112-2-NTUT-OOPL-Raiden](https://github.com/KenChen9/112-2-NTUT-OOPL-Raiden)）手動聲明 Upstream 來源。

---

## 專案視覺與進度管理

![遊戲截圖](https://github.com/Chinococo/2024OOPL/assets/58754099/42b6bae8-836e-4830-9dfe-f2043de8df97)

* **工作看板 (To-do List)：** [GitHub Projects 5](https://github.com/users/Chinococo/projects/5)

---

## 核心架構：LGF (Leistungsstarkes Game Framework)

**LGF** 是一款基於陳偉凱老師開發的 `Game Framework` 並加以擴充功能的強大遊戲框架。
* 原始專案倉庫：[ntut-xuan/LeistungsstarkesGameFramework](https://github.com/ntut-xuan/LeistungsstarkesGameFramework)
* *註：本專案不保證長期維護，若有任何問題或功能建議，歡迎提交 Issue 討論。*

### 使用手冊與函式庫
| 資源名稱 | 連結地址 |
| :--- | :--- |
| **LGF 官方使用手冊** | [Read the Docs 說明文件](https://lgf-readthedocs.readthedocs.io/zh_TW/latest/index.html) |
| **LGF 函式庫文件** | [GitHub Pages API 參考](https://ntut-xuan.github.io/LeistungsstarkesGameFramework) |

---

## 開發時程與里程碑 (Roadmap)

### 階段性目標
* **期中目標：** 完成各角色的基礎邏輯與互動、圖片素材導入以及地圖配置。
* **期末目標：** 完成音效優化、動畫精細化，並視情況新增額外關卡。

### 每週進度規劃
* **W1 ~ W3**：準備圖片素材 / 專案架構設計
* **W4 ~ W6**：主選單實作 / 關卡架構搭建 / 主要角色邏輯
* **W7 ~ W9**：【關卡 1】實作（地圖、敵人、子彈、道具）
* **W10 ~ W12**：【關卡 1】Boss 戰實作
* **W13 ~ W15**：【關卡 2】實作（地圖、Boss 戰）
* **W16 ~ W18**：音效與動畫整合 / 【關卡 3】實作（地圖、Boss 戰）

---

## 編碼規範 (Coding Style)

為了確保團隊協作的程式碼品質與一致性，請嚴格遵守以下開發規範：

### 1. 命名規則 (Naming Conventions)
* **PascalCase**：函式 (Functions)、類別 (Classes)、列舉 (Enums)、命名空間 (Namespaces)
* **snake_case**：成員變數 (Member Variables)、區域變數 (Local Variables)、函式參數 (Parameters)
* **ALL_UPPERCASE**：常數 (Constants)、列舉成員 (Enum Members)

### 2. 檔案與排版規範
* 標頭檔副檔名固定為 `.h`，原始檔副檔名固定為 `.cpp`。
* **留白原則**：在函式定義（Implementation）、`for` 迴圈、`if` 判斷式的**上方與下方**請留一行空白行（函式宣告則不需留白）。

### 3. C++ 開發注意事項
* **繼承規範**：C++ 預設繼承類型為 `private`，繼承時**請務必明確註明 `public`**，盡可能避免使用 private 繼承。
* **命名空間**：**禁止**使用任何 `using namespace;`（如 `using namespace std;`），請完整書寫命名空間。
* **程式碼精簡**：遵守 DRY (Don't Repeat Yourself) 原則，盡可能不要重複程式碼。
* **型別與轉換**：
  * 優先使用 `double` 避免使用 `float`。
  * 嚴禁使用 C-style 的 `(Type)value` 強制轉型，請使用 `static_cast` 或 `dynamic_cast`。
* **變數初始化**：
  * 基本型別（如 `int`、`double`、`bool`、`std::size_t`）**必須**明確進行初始化。
  * 複雜資料結構（如自訂 Struct/Class）若有預設建構子則不需刻意手動初始化，讓編譯器採用預設建構子即可。
* **修飾字選用**：
  * 傳參時請盡可能使用 `const reference` (例如 `const T&`)。
  * 若成員函式不會更動成員變數，請務必標記為 `const`。

---

## 偵錯工具 (Debugging Tools)

在 Windows 環境下開發時，可使用以下程式碼將偵錯資訊輸出至 Visual Studio 的輸出（Output）視窗。請將 `<data>` 替換為想要顯示的資料：

```cpp
// 輸出偵錯訊息至 Output 視窗
OutputDebugStringW(std::to_wstring( <data> ) + L"\n");
```

---

## 銘謝 (Acknowledgements)

* 感謝 **國立臺北科技大學 陳偉凱教授** 開發並提供如此完善的遊戲框架。
* 感謝 **國立臺北科技大學 陳碩漢教授** 同意並授權此框架公開使用，使本專題得以順利完成。
