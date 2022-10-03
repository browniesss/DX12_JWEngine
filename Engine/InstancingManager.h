#pragma once
#include "InstancingBuffer.h"

class GameObject;

// ************************
//	  InstancingManager
// ************************
class InstancingManager
{
	//	Function ================================
	DECLARE_SINGLE(InstancingManager);

public:
	void Render(vector<shared_ptr<GameObject>>& gameObjects);

	void ClearBuffer();
	void Clear() { _buffers.clear(); }

private:
	void AddParam(uint64 instanceId, InstancingParams& data);
	// ==========================================
private:
	//	Variable ================================
	map<uint64/*instanceId*/, shared_ptr<InstancingBuffer>> _buffers;
	// ==========================================
};

