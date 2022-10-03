#pragma once
#include "Component.h"

enum class ColliderType /* Collider Type */
{
	Sphere,
};

// ************************
//		 BaseCollider
// ************************
class BaseCollider : public Component
{
public:
	//	Function ================================
	BaseCollider(ColliderType colliderType);
	virtual ~BaseCollider();
	virtual void ComponentUpdate() override {}

	virtual bool Intersects(Vec4 rayOrigin, Vec4 rayDir, OUT float& distance) = 0;
	// ==========================================
private:
	//	Variable ================================
	ColliderType _colliderType = {};
	// ==========================================
};