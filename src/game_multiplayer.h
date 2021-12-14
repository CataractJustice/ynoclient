#ifndef EP_GAME_MULTIPLAYER_H
#define EP_GAME_MULTIPLAYER_H

#include <string>
#include "game_system.h"

namespace Game_Multiplayer {
	void Connect(int map_id);
	void Quit();
	void Update();
	void MainPlayerMoved(int dir);
	void MainPlayerChangedMoveSpeed(int spd);
	void MainPlayerChangedSpriteGraphic(std::string name, int index);
	void SePlaySync(const lcf::rpg::Sound& sound);
	void WeatherEffectSync(int type, int sthrength);
	void VariableSync(int32_t id, int32_t val);
	void SwitchSync(int32_t id, int32_t val);
}

#endif