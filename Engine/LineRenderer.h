#pragma once
#include "Component.h"
#include "Mesh.h"

// ************************
//		  LineRenderer
// ************************
class LineRenderer : public Component
{
public:
	//	Function ================================
	LineRenderer();
	virtual ~LineRenderer();

	shared_ptr<Mesh> GetMesh() { return _mesh; }

	void SetMesh(shared_ptr<Mesh> mesh) { _mesh = mesh; }

	void Render();
	void Render(shared_ptr<class InstancingBuffer>& buffer);
	void RenderShadow();
	// ==========================================
private:
	//	Variable ================================
	shared_ptr<Mesh> _mesh;
	// ==========================================
};

