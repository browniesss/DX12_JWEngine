#pragma once
#include "GameObject.h"
#include "ImguiEditor.h"
#include "ImguiManager.h"

// ************************
//		 Hierarchy
// ************************
class Hierarchy : public ImguiEditor
{
public:
	//	Function ================================
	Hierarchy() {}
	virtual ~Hierarchy() {}

	void Init() override;
	void Show() override;
	void End() override;

	void Hierarchy_Tree(const shared_ptr<GameObject>& obj);

	weak_ptr<GameObject> GetSelectObj() { return Selected_Obj; }

	static Hierarchy* GetInstance() {

		if (m_pInstance == nullptr) {
			m_pInstance = GET_SINGLE(ImguiManager)->GetWindow<Hierarchy>();
		}
		return m_pInstance;

	}
	// ==========================================
private:
	//	Variable ================================
	inline static Hierarchy* m_pInstance = nullptr;

	string name = "";

	vector<weak_ptr<GameObject>> Objects;
	weak_ptr<GameObject> Selected_Obj;
	// ==========================================
};

