#pragma once
#include "Component.h"

// ************************
//		  MonoBehaviour
// ************************
class MonoBehaviour : public Component
{
public:
	//	Function ================================
	MonoBehaviour();
	virtual ~MonoBehaviour();
	// ==========================================
private:
	//	Variable ================================
	virtual void FinalUpdate() sealed { }
	// ==========================================
};

