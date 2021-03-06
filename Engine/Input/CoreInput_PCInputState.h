//
//  CoreInput_PCInputState.h
//  CoreEngine3D
//
//  Created by Jody McAdams on 12/29/11.
//  Copyright (c) 2011 Jody McAdams. All rights reserved.
//

#ifndef CoreEngine3D_OSX__CoreInput_PCInputState_h
#define CoreEngine3D_OSX__CoreInput_PCInputState_h

#define MOUSESTATE_MAX_MOUSEBUTTONS 2

#include "Math/MathTypes.h"
#include "CoreInput.h"

struct MouseInputState
{
	MouseInputState();
	CoreInput_ButtonState buttonState[MOUSESTATE_MAX_MOUSEBUTTONS];
	intVec2 position;
	intVec2 lastPosition;
	bool sleeping;
};

struct KeyboardInputState
{
	KeyboardInputState();
	CoreInput_ButtonState buttonState[256];	//TODO: come up with a better way
	u8 skippedBegan[256];
	
	
};

#endif
