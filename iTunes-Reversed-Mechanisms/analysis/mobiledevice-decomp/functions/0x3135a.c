// rea decompile_all
// name: _taDFU_Daemon_deviceAddedGeneric
// address: 0x3135a
// body: available
// range: 0x3135a-0x3157b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _taDFU_Daemon_deviceAddedGeneric
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = "YES";
  pcVar3 = "YES";
  if (param_2 == 0) {
    pcVar3 = "NO";
  }
  pcVar4 = "YES";
  if (param_3 == 0) {
    pcVar4 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,
                    "%s device %s callbacksMap %s unclaimedDevicesMap %s deviceKey %lu",
                    "taDFU_Daemon_deviceAddedGeneric","YES",pcVar3,pcVar4,param_4);
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar1 = (long *)_CFDictionaryGetValue(param_2,param_4);
    if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "%s calling callback->discoveryCallback for device %s",
                        "taDFU_Daemon_deviceAddedGeneric","YES");
                    /* WARNING: Could not recover jumptable at 0x0003143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar1)(param_1);
      return;
    }
    lVar2 = _CFDictionaryGetValue(param_3,param_4);
    pcVar3 = "YES";
    if (lVar2 == 0) {
      pcVar3 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s unclaimed devices array %s",
                      "taDFU_Daemon_deviceAddedGeneric",pcVar3);
    if (lVar2 == 0) {
      lVar2 = _CFArrayCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1);
      if (lVar2 == 0) {
        pcVar5 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s created array %s",
                        "taDFU_Daemon_deviceAddedGeneric",pcVar5);
      if (lVar2 == 0) {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s adding unclaimed device to array %s"
                          ,"taDFU_Daemon_deviceAddedGeneric","NO");
        return;
      }
      _CFDictionarySetValue(param_3,param_4,lVar2);
      _CFRelease(lVar2);
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s adding unclaimed device to array %s",
                      "taDFU_Daemon_deviceAddedGeneric","YES");
    _CFArrayAppendValue(lVar2,param_1);
  }
  return;
}

