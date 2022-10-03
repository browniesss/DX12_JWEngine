#pragma once

enum PLANE_TYPE : uint8 /* PLANE TYPE */
{
	PLANE_FRONT,
	PLANE_BACK,
	PLANE_UP,
	PLANE_DOWN,
	PLANE_LEFT,
	PLANE_RIGHT,

	PLANE_END
};

// ************************
//		  Frustum
// ************************
class Frustum
{
public:
	//	Function ================================
	void FinalUpdate();
	bool ContainsSphere(const Vec3& pos, float radius);
	// ==========================================
private:
	//	Variable ================================
	array<Vec4, PLANE_END> _planes;
	// ==========================================
};

