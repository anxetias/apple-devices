// rea decompile_all
// name: _taDFU_Daemon_deviceRemovedGeneric
// address: 0x3163b
// body: available
// range: 0x3163b-0x317dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x317c9 to 0x2661d6 _libDFU_release (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _taDFU_Daemon_deviceRemovedGeneric
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = "YES";
  pcVar4 = "YES";
  if (param_2 == 0) {
    pcVar4 = "NO";
  }
  pcVar5 = "YES";
  if (param_3 == 0) {
    pcVar5 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,
                    "%s device %s callbacksMap %s unclaimedDevicesMap %s deviceKey %lu",
                    "taDFU_Daemon_deviceRemovedGeneric","YES",pcVar4,pcVar5,param_4);
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = _CFDictionaryGetValue(param_2,param_4);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "%s calling callback->terminationCallback for device %s",
                        "taDFU_Daemon_deviceRemovedGeneric","YES");
                    /* WARNING: Could not recover jumptable at 0x0003171b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 8))(param_1);
      return;
    }
    lVar1 = _CFDictionaryGetValue(param_3,param_4);
    if (lVar1 == 0) {
      pcVar6 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s unclaimed devices array %s",
                      "taDFU_Daemon_deviceRemovedGeneric",pcVar6);
    if (lVar1 != 0) {
      uVar2 = _CFArrayGetCount(lVar1);
      lVar3 = _CFArrayGetFirstIndexOfValue(lVar1,0,uVar2,param_1);
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s index to remove %ld",
                        "taDFU_Daemon_deviceRemovedGeneric",lVar3);
      if (lVar3 != -1) {
        _CFArrayRemoveValueAtIndex(lVar1,lVar3);
      }
    }
    _libDFU_release(param_1);
    return;
  }
  return;
}

