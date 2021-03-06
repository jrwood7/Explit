#pragma once
#include "../sdk.hpp"

class c_config
{
public:
	c_config(const std::string path);
	void load(const std::string name);
	void save(const std::string name);
	void refresh();
	struct {
		bool unhook = false;
		std::vector<std::string> config_list;
		std::string config_name;
		int config_id = 0;
		struct {
			struct {
				bool esp = true;
				bool box = true;
				int box_type = 1;
				bool fill_box = false;
				bool outline_box = true;
				int health = 0;
				bool distance = false;
				bool name = false;
				bool weapon = false;
				bool visible = false;
				bool ammo = false;
				bool skeletons = false;
				bool snaplines = false;
				bool vulnerability = false;
				int armor = 0;
				bool money = false;
				bool enemies = true;
				bool team = false;
				bool weapons = false;
				bool local = false;
				bool nades = false;
				bool chickens = false;
				struct {
					float team_invisible[3] = { 0,0,255 };
					float team_visible[3] = { 0,255,0 };
					float enemy_invisible[3] = { 255,255,0 };
					float enemy_visible[3] = { 255,0,0 };
					float weapons[3] = { 255,0,0 } ;
					float chickens[3] =  { 255,0,0 };
					float vulnerability[3] = {255,255,255};
					float local[4] = { 54, 251, 43 , 255 };
				}colors;
			}esp;
			struct {
				bool chams = false;
				bool local = false;
				bool enemy = false;
				bool team = false;
				bool wireframe = false;
				int material = 0;
				bool visible = false;
				bool arms = false;
				bool weapon = false;
				struct {
					float team_invisible[3] = { 0,0,255 };
					float team_visible[3] = { 0,255,0 };
					float enemy_invisible[3] = { 255,255,0 };
					float enemy_visible[3] = { 255,0,0 };
					float arms[3] = { 255,0,0 };
					float weapon[3] = { 255,0,0 };
					float local[3] = { 32,164,199 };
				}colors;
			}chams;
			struct {
				bool glow = false;
				bool local = false;
				bool chickens = false;
				bool weapons = false;
				bool team = false;
				bool visible = false;
				bool enemy = false;
				bool vulnerability = false;
				int style = 0;
				struct {
					float team_invisible[3] = { 0,0,255 };
					float team_visible[3] = { 0,255,0 };
					float enemy_invisible[3] = { 255,255,0 };
					float enemy_visible[3] = { 255,0,0 };
					float weapons[3] = { 255,0,0 };
					float chickens[3] = { 255,0,0 };
					float local[3] = { 32,164,199 };
					float vulnerability[3] = { 255,255,255 };
				}colors;
			}glow;
			struct {
				bool enable = false;
				bool local = false;
				bool enemy = false;
				bool team = false;
				float radius = 50.f;
			}dlights;
			struct {
				bool watermark = true;
			}others;
		}visuals;
		struct {
		}misc;
	} settings;
private:
	std::string directory_path;
};
extern c_config g_config;