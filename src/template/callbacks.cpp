#include "pch.h"
#include "pluginsdk.h"

void __cdecl engine_init([[maybe_unused]] const Version client_version);
bool  __cdecl init([[maybe_unused]] const Version version);
void __cdecl oep_notify([[maybe_unused]] const Version version);

extern "C" __declspec(dllexport) PluginInfo GPluginInfo = {
#ifdef NDEBUG
  .hide_from_peb = true,
  .erase_pe_header = true,
#endif
  .init = init,
  .oep_notify = oep_notify,
  .priority = 1, // Higher = more priority
  .target_apps = L"Client.exe;BNSR.exe"
  .engine_init = engine_init
};

void __cdecl engine_init([[maybe_unused]] const Version client_version)
{
  // Run whatever you need here for when the game engine has fully initialized
  // DO NOT hold this up
}

/*
  CALLED FIRST
  Good use to setup configuration, pattern scanning and other general checks
  If something doesn't add up you can return false and oep_notify & engine_init will not execute
*/
bool  __cdecl init([[maybe_unused]] const Version version)
{
  // Example usage if engine_init is needed or specific loader3.2+ version
  // loader3_version is only set by 3.2+ (major, minor, build, revision) either build or revision will change for when engine_init required an update
  if (!GPluginInfo.engine_init_available || GPluginInfo.loader3_version < Version { 3, 2, 1, 0 })
    return false;

  // do more stuff

  return true;
}

void __cdecl oep_notify([[maybe_unused]] const Version version)
{
  // Good place to commit hooks if everything checked out in init
}
