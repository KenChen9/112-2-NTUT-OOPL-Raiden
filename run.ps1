Get-ChildItem -Recurse -Include *.cpp, *.h | ForEach-Object {
    $path = $_.FullName
    # 用 Big5 (Code Page 950) 讀取檔案
    $content = [System.IO.File]::ReadAllText($path, [System.Text.Encoding]::GetEncoding(950))
    # 用 UTF-8 (帶 BOM) 寫回檔案
    [System.IO.File]::WriteAllText($path, $content, [System.Text.Encoding]::UTF8)
    Write-Host "Converted: $_" -ForegroundColor Green
}
