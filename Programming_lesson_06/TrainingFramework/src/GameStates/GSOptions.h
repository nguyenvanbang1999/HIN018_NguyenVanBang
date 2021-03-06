#pragma once
#include "GameStates/GameStatebase.h"
#include "GameButton.h"

class Sprite2D;
class Sprite3D;
class Text;

class GSOptions :
	public GameStateBase
{
public:
	GSOptions();
	~GSOptions();

	void Init();
	void Exit();

	void Pause();
	void Resume();

	void HandleEvents();
	void HandleKeyEvents(int key, bool bIsPressed);

	void HandleTouchEvents(int x, int y, bool bIsPressed);
	void Update(float deltaTime);
	void Draw();


	void SetNewPostionForBullet();

private:

	std::shared_ptr<Sprite2D> m_BackGround;
	std::list< std::shared_ptr<Text >> m_ListScore;
	std::shared_ptr<GameButton> m_BackButton;
	std::shared_ptr<GameButton> m_OnMusic;
	std::shared_ptr<GameButton> m_OffMusic;
	std::shared_ptr<GameButton> m_OnSound;
	std::shared_ptr<GameButton> m_OffSound;

};

