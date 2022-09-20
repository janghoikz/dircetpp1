#pragma once

class Engine
{
public:
	/*�ʱ�ȭ*/
	void Init(const WindowInfo& window);
	/*������*/
	void Render();

	void ResizeWindow();

private:
	//�׷��� ȭ�� ũ�� ����
	WindowInfo      _window;
	D3D12_VIEWPORT  _viewport = {};
	D3D12_RECT      _scissorRect = {};
};

