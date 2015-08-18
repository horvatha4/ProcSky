#include "ProcSky.h"
#include <Urho3D/Script/APITemplates.h>
#include <Angelscript/angelscript.h>

using namespace Urho3D;

static ProcSky* GetProcSky() {
  return GetScriptContext()->GetSubsystem<ProcSky>();
}

static void RegisterProcSky(asIScriptEngine* engine) {
  RegisterComponent<ProcSky>(engine, "ProcSky");

  engine->RegisterGlobalFunction("ProcSky@+ GetProcSky()", asFUNCTION(GetProcSky), asCALL_CDECL);

  engine->RegisterObjectMethod("ProcSky", "void SetUpdateAuto(const bool)", asMETHOD(ProcSky, SetUpdateAuto), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "bool GetUpdateAuto() const", asMETHOD(ProcSky, GetUpdateAuto), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "void SetUpdateInterval(const bool)", asMETHOD(ProcSky, SetUpdateInterval), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "float GetUpdateInterval() const", asMETHOD(ProcSky, GetUpdateInterval), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "bool SetRenderSize(uint)", asMETHOD(ProcSky, SetRenderSize), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "uint GetRenderSize() const", asMETHOD(ProcSky, GetRenderSize), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "bool Initialize()", asMETHOD(ProcSky, Initialize), asCALL_THISCALL);
  engine->RegisterObjectMethod("ProcSky", "void Update()", asMETHOD(ProcSky, Update), asCALL_THISCALL);
}

void RegisterProcSkyAPI(asIScriptEngine* engine) {
  RegisterProcSky(engine);
}
