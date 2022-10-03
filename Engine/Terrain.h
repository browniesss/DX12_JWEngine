#pragma once
#include "Component.h"

// ************************
//			Terrain
// ************************
class Terrain : public Component
{
public:
	//	Function ================================
	Terrain();
	virtual ~Terrain();

	void Init(int32 sizeX, int32 sizeZ);

	virtual void FinalUpdate() override;
	// ==========================================
private:
	//	Variable ================================
	int32 _sizeX = 15;
	int32 _sizeZ = 15;
	float _maxTesselation = 4.f;

	shared_ptr<class Material> _material;
	// ==========================================
};


