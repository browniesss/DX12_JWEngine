#pragma once
#include "Object.h"

enum class COMPONENT_TYPE : uint8 /* COMPONENT_TYPE */
{
	TRANSFORM,
	MESH_RENDERER,
	CAMERA,
	LIGHT,
	PARTICLE_SYSTEM,
	TERRAIN,
	COLLIDER,
	ANIMATOR,
	LINE_RENDERER,
	// ...
	MONO_BEHAVIOUR,
	END,
};

enum
{
	FIXED_COMPONENT_COUNT = static_cast<uint8>(COMPONENT_TYPE::END) - 1
};

class GameObject;
class Transform;
class MeshRenderer;
class Animator;

// ************************
//	  Component
// ************************
class Component : public Object
{
public:
	//	Function ================================
	Component(COMPONENT_TYPE type);
	virtual ~Component();

public:
	virtual void Awake() { }
	virtual void Start() { }
	virtual void Update() { }
	virtual void LateUpdate() { }
	virtual void FinalUpdate() { }

	virtual void ComponentUpdate() { }

public:
	COMPONENT_TYPE GetType() { return _type; }
	bool IsValid() { return _gameObject.expired() == false; }

	shared_ptr<GameObject> GetGameObject();
	shared_ptr<Transform> GetTransform();
	shared_ptr<MeshRenderer> GetMeshRenderer();
	shared_ptr<Animator> GetAnimator();

private:
	friend class GameObject;
	void SetGameObject(shared_ptr<GameObject> gameObject) { _gameObject = gameObject; }
	// ==========================================
protected:
	//	Variable ================================
	COMPONENT_TYPE _type;
	weak_ptr<GameObject> _gameObject;
	// ==========================================
};

