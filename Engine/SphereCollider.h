#pragma once
#include "BaseCollider.h"

// ************************
//	  SphereCollider
// ************************
class SphereCollider : public BaseCollider
{
public:
	//	Function ================================
	SphereCollider();
	virtual ~SphereCollider();

	virtual void FinalUpdate() override;
	void ComponentUpdate() override;
	virtual bool Intersects(Vec4 rayOrigin, Vec4 rayDir, OUT float& distance) override;

	void SetRadius(float radius) { _radius = radius; }
	void SetCenter(Vec3 center) { _center = center; }

	void ShowCollider();

	bool& GetActive() { return _isShowCollider; }
	// ==========================================
private:
	//	Variable ================================
	// Local ±‚¡ÿ
	float		_radius = 1.f;
	Vec3		_center = Vec3(0, 0, 0);

	BoundingSphere _boundingSphere;

	bool _isShowCollider = false;
	// ==========================================
};

