// rea decompile_all
// name: __AMDCopyUDIDForPairingIdentityIterationCallback
// address: 0x13aa98
// body: available
// range: 0x13aa98-0x13ab70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMDCopyUDIDForPairingIdentityIterationCallback(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  ulong uVar7;
  
  lVar2 = __CreateDictFromFileContents();
  uVar8 = (undefined7)((ulong)param_1 >> 8);
  if (lVar2 == 0) {
    uVar7 = CONCAT71(uVar8,1);
    goto LAB_0013ab45;
  }
  lVar3 = _CFDictionaryGetValue(lVar2,&cf_DeviceCertificate);
  if (lVar3 == 0) {
LAB_0013ab09:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,
                      "Record \'%@\' from path \'%s\' does not have a device certificate...",lVar2,
                      param_1);
LAB_0013ab3a:
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFDataGetTypeID();
    if (lVar4 != lVar5) goto LAB_0013ab09;
    cVar1 = _CFEqual(lVar3,*param_2);
    if (cVar1 == '\0') goto LAB_0013ab3a;
    uVar6 = __CreateUDIDStringFromFileName(param_1);
    param_2[1] = uVar6;
    uVar7 = 0;
  }
  _CFRelease(lVar2);
LAB_0013ab45:
  return uVar7 & 0xffffffff;
}

