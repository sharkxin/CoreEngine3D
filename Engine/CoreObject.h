//
//  CoreObject.h
//  CoreEngine3D(iOS)
//
//  Created by JodyMcAdams on 1/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef CoreEngine3D_iOS__CoreObject_h
#define CoreEngine3D_iOS__CoreObject_h

#include "MathTypes.h"
#include "stddef.h" //for NULL -_-

class CoreObject;
class CoreObjectManager;

enum CoreObjectType
{
	CoreObjectType_CoreObject,
	CoreObjectType_CoreGameObject,
};

typedef u32 CoreObjectHandle;
#define INVALID_COREOBJECT_HANDLE 0

struct CoreObjectHandleObject
{
	CoreObject* pObject;
	u32 handle;
};

class CoreObject
{
	friend class CoreObjectManager;
	
public:
	virtual CoreObjectType GetType(){return CoreObjectType_CoreObject;}
	static void InitClass(){};
	u32 GetEntityType();
	CoreObjectHandle GetHandle() const;
	
	virtual void UpdateHandle();	//Call when the memory location changes
	void DeleteObject();			//Use with new system

	virtual bool Init(u32 type);
	virtual bool SpawnInit(void* pSpawnStruct){return true;}
	virtual bool PostSpawnInit(void* pSpawnStruct){return true;}
	virtual void Uninit();
	virtual void Update(f32 timeElapsed){};
	
	virtual void ProcessMessage(u32 message){};	//Pass in a hash value
	
	bool m_markedForDeletion;//sigh
	
protected:

private:
	
	u32 m_entityTypeHash;
	CoreObjectHandle handle;
	
};

#endif
