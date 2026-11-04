// rea decompile_all
// name: __DLDeviceCreateDescription
// address: 0xd2d0
// body: available
// range: 0xd2d0-0xd3f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DLDeviceCreateDescription(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = _CFStringCreateMutable(0,0);
    if (*param_1 != 0) {
      uVar4 = _CFDictionaryGetValue(*param_1,&cf_DLDeviceNameKey);
    }
    iVar1 = _DLDeviceValidatePairing(param_1);
    pcVar8 = "un";
    if (iVar1 == 0) {
      pcVar8 = "";
    }
    if (*param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = _CFDictionaryGetValue(*param_1,&cf_DLDeviceUDIDKey);
    }
    if (param_1[1] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = _CFArrayGetCount();
    }
    _CFStringAppendFormat
              (uVar3,0,&cf_Device______spaired_UDID____ldendpoints,uVar4,pcVar8,uVar5,uVar6);
    if ((param_1[1] != 0) && (uVar2 = _CFArrayGetCount(), 0 < (int)uVar2)) {
      uVar9 = 0;
      do {
        uVar4 = _CFArrayGetValueAtIndex(param_1[1],uVar9);
        lVar7 = _DLEndpointCreateDescription(uVar4);
        _CFStringAppendFormat(uVar3,0,&cf___,lVar7);
        if (lVar7 != 0) {
          _CFRelease(lVar7);
        }
        uVar9 = uVar9 + 1;
      } while ((uVar2 & 0x7fffffff) != uVar9);
    }
  }
  return uVar3;
}

