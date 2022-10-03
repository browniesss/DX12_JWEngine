#pragma once


/***************************
	 RootSignature
***************************/
class RootSignature
{
public:
	//	Function ================================
	void Init();

	ComPtr<ID3D12RootSignature>	GetGraphicsRootSignature() { return _graphicsRootSignature; }
	ComPtr<ID3D12RootSignature>	GetComputeRootSignature() { return _computeRootSignature; }

private:
	void CreateGraphicsRootSignature();
	void CreateComputeRootSignature();
	// ==========================================
private:
	// Variable =================================
	D3D12_STATIC_SAMPLER_DESC	_samplerDesc; 
	ComPtr<ID3D12RootSignature>	_graphicsRootSignature;	
	ComPtr<ID3D12RootSignature>	_computeRootSignature;
	// ==========================================
};

