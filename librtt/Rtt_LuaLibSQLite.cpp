//////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2018 Corona Labs Inc.
// Contact: support@coronalabs.com
//
// This file is part of the Corona game engine.
//
// Commercial License Usage
// Licensees holding valid commercial Corona licenses may use this file in
// accordance with the commercial license agreement between you and 
// Corona Labs Inc. For licensing terms and conditions please contact
// support@coronalabs.com or visit https://coronalabs.com/com-license
//
// GNU General Public License Usage
// Alternatively, this file may be used under the terms of the GNU General
// Public license version 3. The license is as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL3 included in the packaging
// of this file. Please review the following information to ensure the GNU 
// General Public License requirements will
// be met: https://www.gnu.org/licenses/gpl-3.0.html
//
// For overview and more information on licensing please refer to README.md
//
//////////////////////////////////////////////////////////////////////////////

#include "Core/Rtt_Build.h"

#ifdef Rtt_SQLITE

#include "Rtt_LuaLibSQLite.h"

#include "Rtt_LuaContext.h"

//#include <sqlite3.h>

// ----------------------------------------------------------------------------

Rtt_EXPORT int luaopen_lsqlite3(lua_State *L);

// ----------------------------------------------------------------------------

namespace Rtt
{

// ----------------------------------------------------------------------------
	
int
LuaLibSQLite::Open( lua_State *L )
{
	int result = luaopen_lsqlite3(L);

	return result;
}

// ----------------------------------------------------------------------------
	
} // namespace Rtt

// ----------------------------------------------------------------------------

#endif // Rtt_SQLITE
