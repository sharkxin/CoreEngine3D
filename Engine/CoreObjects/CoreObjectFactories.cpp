#include "CoreObjectFactories.h"
#include "../OpenGLRenderer.h"

CoreObjectFactory<CollisionBox> g_Factory_CollisionBox;
CoreObjectFactory<ScriptObject> g_Factory_ScriptObject;
CoreObjectFactory<ObjectGroup> g_Factory_ObjectGroup;
CoreObjectFactory<SoundPlayer> g_Factory_SoundPlayer;
CoreObjectFactory<TileAffector> g_Factory_TileAffector;
CoreObjectFactory<RenderableGeometry3D> g_Factory_Geometry_Normal;
CoreObjectFactory<RenderableGeometry3D> g_Factory_Geometry_UI;
CoreObjectFactory<RenderableGeometry3D> g_Factory_Geometry_Light;
CoreObjectFactory<RenderableSceneObject3D> g_Factory_RenderableSceneObject;
CoreObjectFactory<BasicParticle> g_Factory_BasicParticle;
CoreObjectFactory<Spawner> g_Factory_Spawner;

