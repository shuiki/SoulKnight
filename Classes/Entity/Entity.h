#pragma once

#include "cocos2d.h"
USING_NS_CC;
class Entity :public Node {
public:
	CREATE_FUNC(Entity);
	Entity();
	~Entity();

public:
	void bindSprite(Sprite* sprite);//绑定精灵对象
	Sprite* getSprite();//获取已经绑定的精灵对象

private:
	Sprite* m_sprite;//绑定的精灵
};