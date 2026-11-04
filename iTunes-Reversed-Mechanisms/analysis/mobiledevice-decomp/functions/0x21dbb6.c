// rea decompile_all
// name: RTKitFirmware::openFirmwareInRestoreOptions
// address: 0x21dbb6
// body: available
// range: 0x21dbb6-0x21dcaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RTKitFirmware::openFirmwareInRestoreOptions(__CFDictionary const*) */

undefined4 __thiscall
RTKitFirmware::openFirmwareInRestoreOptions(RTKitFirmware *this,__CFDictionary *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  __CFDictionary *p_Var3;
  long lVar4;
  long lVar5;
  __CFDictionary *p_Var6;
  __CFDictionary *p_Var7;
  __CFDictionary *local_30;
  
  p_Var6 = param_1;
  p_Var3 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_FirmwareData);
  if (p_Var3 == (__CFDictionary *)0x0) {
    openFirmwareInRestoreOptions(p_Var6);
    uVar2 = 0xfa1;
  }
  else {
    _AMSupportSafeRetain(p_Var3);
    p_Var6 = p_Var3;
    lVar4 = _CFGetTypeID();
    lVar5 = _CFDataGetTypeID();
    if (lVar4 == lVar5) {
      ACFUFTABFile::create((ACFUFTABFile *)&local_30,p_Var3,*(undefined4 *)(this + 0x54),0xffff);
      p_Var6 = local_30;
      local_30 = (__CFDictionary *)0x0;
      plVar1 = *(long **)(this + 0x20);
      *(__CFDictionary **)(this + 0x20) = p_Var6;
      p_Var7 = (__CFDictionary *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
        p_Var7 = local_30;
        local_30 = (__CFDictionary *)0x0;
        if (p_Var7 != (__CFDictionary *)0x0) {
          (**(code **)(*(long *)p_Var7 + 0x38))();
        }
        p_Var6 = *(__CFDictionary **)(this + 0x20);
      }
      if (p_Var6 == (__CFDictionary *)0x0) {
        openFirmwareInRestoreOptions(p_Var7);
        uVar2 = 1000;
      }
      else {
        uVar2 = ACFUFirmware::openFirmwareInRestoreOptions((ACFUFirmware *)this,param_1);
      }
    }
    else {
      openFirmwareInRestoreOptions(p_Var6);
      uVar2 = 0xfa2;
    }
    _CFRelease(p_Var3);
  }
  return uVar2;
}

