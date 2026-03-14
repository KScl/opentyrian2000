/* 
 * OpenTyrian: A modern cross-platform port of Tyrian
 * Copyright (C) 2007-2009  The OpenTyrian Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef MENUS_H
#define MENUS_H

#include "opentyr.h"

#define GAMEPLAY_NAME_COUNT 6
extern char episode_name[6][31];
extern char difficulty_name[7][21];
extern char gameplay_name[GAMEPLAY_NAME_COUNT][26];
extern char timed_battle_name[4][23];

bool gameplaySelect(void);
bool episodeSelect(void);
bool difficultySelect(void);
bool timedBattleSelect(void);

#endif /* MENUS_H */
