#pragma once


// �η� �繫�Ҵ���
/***************************
	   Device
***************************/
class Device
{
public:
	//	Function ================================
	void Init();

	ComPtr<IDXGIFactory> GetDXGI() { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() { return _device; }
	// ==========================================
private:
	// COM(Component Object Model)
	// - DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// - COM ��ü(COM �������̽�)�� ���. ���λ����� �츮���� ������
	// - ComPtr ������ ����Ʈ ������
	// Variable =================================
	ComPtr<ID3D12Debug>			_debugController;
	ComPtr<IDXGIFactory>		_dxgi; // ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device>		_device; // ���� ��ü ����
	// ==========================================
};

