#pragma once

/***************************
	   SwapChain
***************************/
class SwapChain
{
public:
	//	Function ================================
	void Init(const WindowInfo& info, ComPtr<ID3D12Device> device, ComPtr<IDXGIFactory> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue);
	void Present();
	void SwapIndex();

	ComPtr<IDXGISwapChain> GetSwapChain() { return _swapChain; }
	uint8 GetBackBufferIndex() { return _backBufferIndex; }

private:
	void CreateSwapChain(const WindowInfo& info, ComPtr<IDXGIFactory> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue);
	// ==========================================
private:
	// Variable =================================
	ComPtr<IDXGISwapChain>	_swapChain;
	uint32					_backBufferIndex = 0;
	// ==========================================
};

