// rea decompile_all
// name: _AMAuthInstallUpdaterSetTags
// address: 0x1b4f1b
// body: available
// range: 0x1b4f1b-0x1b5101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterSetTags(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterSetTags_cold_5(param_5);
  }
  else if (param_2 == 0) {
    _AMAuthInstallUpdaterSetTags_cold_4(param_5);
  }
  else if (param_3 == 0) {
    _AMAuthInstallUpdaterSetTags_cold_3(param_5);
  }
  else {
    if (param_4 != 0) {
      lVar1 = _AMAuthInstallUpdater(param_1,param_2,0,&local_30);
      if (lVar1 == 0) {
        _AMAuthInstallUpdaterSetTags_cold_1(&local_30,param_5);
        return 2;
      }
      lVar2 = _CFStringCompare(param_3,&cf_RequestTags,0);
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x10) != 0) {
          _CFRelease();
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        uVar3 = _CFRetain(param_4);
        *(undefined8 *)(lVar1 + 0x10) = uVar3;
      }
      else {
        lVar2 = _CFStringCompare(param_3,&cf_RequestHeaderTags,0);
        if (lVar2 == 0) {
          if (*(long *)(lVar1 + 0x18) != 0) {
            _CFRelease();
            *(undefined8 *)(lVar1 + 0x18) = 0;
          }
          uVar3 = _CFRetain(param_4);
          *(undefined8 *)(lVar1 + 0x18) = uVar3;
        }
        else {
          lVar2 = _CFStringCompare(param_3,&cf_ResponseTags,0);
          if (lVar2 != 0) {
            lVar2 = _CFStringCompare(param_3,&cf_BuildIdentityTags,0);
            if (lVar2 == 0) {
              if (*(long *)(lVar1 + 0x20) != 0) {
                _CFRelease();
                *(undefined8 *)(lVar1 + 0x20) = 0;
              }
              uVar3 = _CFRetain(param_4);
              *(undefined8 *)(lVar1 + 0x20) = uVar3;
              return 0;
            }
            lVar2 = _CFStringCompare(param_3,&cf_LoopInstance,0);
            if (lVar2 != 0) {
              return 0;
            }
            if (*(long *)(lVar1 + 0x30) != 0) {
              _CFRelease();
              *(undefined8 *)(lVar1 + 0x30) = 0;
            }
            uVar3 = _CFRetain(param_4);
            *(undefined8 *)(lVar1 + 0x30) = uVar3;
            return 0;
          }
          if (*(long *)(lVar1 + 0x28) != 0) {
            _CFRelease();
            *(undefined8 *)(lVar1 + 0x28) = 0;
          }
          uVar3 = _CFRetain(param_4);
          *(undefined8 *)(lVar1 + 0x28) = uVar3;
        }
      }
      return 0;
    }
    _AMAuthInstallUpdaterSetTags_cold_2(param_5);
  }
  return 1;
}

