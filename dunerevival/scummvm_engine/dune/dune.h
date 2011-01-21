/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL: 
 * $Id: dune.h
 *
 */

#ifndef DUNE_H
#define DUNE_H
 
#include "common/random.h"

#include "engines/advancedDetector.h"
#include "engines/engine.h"

#include "gui/debugger.h"
 
namespace Dune {
 
class DuneConsole;
 
// our engine debug levels
enum {
	kQuuxDebugExample = 1 << 0,
	kQuuxDebugExample2 = 1 << 1
	// next new level must be 1 << 2 (4)
	// the current limitation is 32 debug levels (1 << 31 is the last one)
};
 
class DuneEngine : public Engine {
public:
	DuneEngine(OSystem *syst, const ADGameDescription *gameDesc);
	~DuneEngine();
 
	virtual Common::Error run();
 	virtual bool hasFeature(EngineFeature f) const;

	bool isCD();

private:
	DuneConsole *_console;
 
	// We need random numbers
	Common::RandomSource _rnd;
	const ADGameDescription *_gameDescription;
};
 

} // End of namespace Dune
 
#endif
