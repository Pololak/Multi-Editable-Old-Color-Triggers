#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/EditorUI.hpp>
#include <Geode/modify/ColorSelectPopup.hpp>

class $modify(PolzEditorUI, EditorUI) {
	void editObject(CCObject* p0) {
		if (this->m_selectedObjects) {
			for (auto obj : CCArrayExt<EffectGameObject*>(this->m_selectedObjects)) {
				if (obj) {
					switch (obj->m_objectID) {
						case 0x1d:
						case 0x1e:
						case 0x68:
						case 0x69:
						case 0x2e8:
						case 0x383:
						case 0x384:
						case 0x393:
							ColorSelectPopup::create(nullptr, this->m_selectedObjects)->show();
							return;
					}
				}
			}
		}
		EditorUI::editObject(p0);
	}
};
