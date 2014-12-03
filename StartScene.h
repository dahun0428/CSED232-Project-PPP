#pragma once
#include "Scene.h"



class StartScene : public Scene
{
public:
	StartScene( Game* );
	~StartScene();
protected:
	Scene* update();
	bool mouseEvent( int x, int y, MouseFunction );
private:
	Scene* nextScene;
	QPoint lastCursor;


	QRect Button1;
	QRect Button2;
    QRect Button3;
	QRect alertButton;

	void clickButton1();
	void clickButton2();
    void clickButton3();
    void clickTest();

};
