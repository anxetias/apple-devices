// rea decompile_all
// name: __AMDeviceDetachPairedDevices
// address: 0x133a79
// body: available
// range: 0x133a79-0x133b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x133b33 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDeviceDetachPairedDevices
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = (void *)0x0;
  __detachPairedGizmo(param_1,2,0,param_2,param_5,param_6,param_7,param_8,param_9);
  lVar1 = _CFDictionaryGetCount(*(undefined8 *)(param_1 + 0xc0));
  if (lVar1 != 0) {
    pvVar2 = _malloc(lVar1 * 8);
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 0xc0),pvVar2,0);
    if (0 < lVar1) {
      lVar3 = 0;
      do {
        __detachPairedGizmo(param_1,6,*(undefined8 *)((long)pvVar2 + lVar3 * 8),param_2,param_5,
                            param_6,param_7,param_8,param_9);
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
    }
  }
  _free(pvVar2);
  return;
}

