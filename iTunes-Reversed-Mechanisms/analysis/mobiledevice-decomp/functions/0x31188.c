// rea decompile_all
// name: _taDFU_Daemon_deviceRemovedCallback
// address: 0x31188
// body: available
// range: 0x31188-0x31359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x31346 to 0x3163b _taDFU_Daemon_deviceRemovedGeneric (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _taDFU_Daemon_deviceRemovedCallback(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  pcVar4 = "NO";
  pcVar7 = "YES";
  if (param_1 == 0) {
    pcVar7 = "NO";
  }
  if (param_2 != 0) {
    pcVar4 = "YES";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceRemoved %s context %s",
                    "taDFU_Daemon_deviceRemovedCallback",pcVar7,pcVar4);
  if (param_1 != 0) {
    plVar5 = (long *)_handleDevices(param_1);
    plVar6 = (long *)_handleDevices(param_1);
    puVar3 = PTR___os_log_default_004412f0;
    lVar1 = *plVar5;
    if ((((lVar1 != 0) && (lVar2 = *plVar6, lVar2 != 0)) && (*(long *)(lVar1 + 0x38) == 0)) &&
       (*(long *)(lVar2 + 0x38) == 0)) {
      pcVar4 = "YES";
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "%s deviceForLocationID %s deviceForVidPid %s",
                        "taDFU_Daemon_deviceRemovedCallback","YES","YES");
      __os_log_internal(0,puVar3,0,"%s device %s","taDFU_Daemon_deviceRemovedLocationIDHandler",
                        "YES");
      if ((_locationIDCallbacksMap != 0) && (_unclaimedDevicesMatchingLocationIDMap != 0)) {
        _taDFU_Daemon_deviceRemovedGeneric
                  (lVar1,_locationIDCallbacksMap,_unclaimedDevicesMatchingLocationIDMap,
                   *(undefined4 *)(lVar1 + 0x20));
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device %s",
                        "taDFU_Daemon_deviceRemovedVidPidHandler","YES",pcVar4);
      if ((_vidPidCallbacksMap != 0) && (_unclaimedDevicesMatchingVidPidMap != 0)) {
        uVar8 = CONCAT22(*(undefined2 *)(lVar2 + 0x24),*(undefined2 *)(lVar2 + 0x26));
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s vid %u pid %u keyForVidPid %u",
                          "keyForVIDPID",*(undefined2 *)(lVar2 + 0x24),*(undefined2 *)(lVar2 + 0x26)
                          ,uVar8);
        _taDFU_Daemon_deviceRemovedGeneric
                  (lVar2,_vidPidCallbacksMap,_unclaimedDevicesMatchingVidPidMap,uVar8);
        return;
      }
    }
  }
  return;
}

