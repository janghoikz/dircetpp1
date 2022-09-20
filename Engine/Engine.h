#pragma once

class Engine
{
public:
	/*초기화*/
	void Init(const WindowInfo& window);
	/*렌더링*/
	void Render();

	void ResizeWindow();

private:
	//그려질 화면 크기 관련
	WindowInfo      _window;
	D3D12_VIEWPORT  _viewport = {};
	D3D12_RECT      _scissorRect = {};
};

