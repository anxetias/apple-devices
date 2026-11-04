// rea decompile_all
// name: _taDFU_deviceinterfaced_startDeviceDiscoveryForVIDPID
// address: 0x265c4d
// body: available
// range: 0x265c4d-0x265d58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x265d42 to 0x265d59 _taDFU_deviceinterfaced_startDeviceDiscoveryGeneric (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_taDFU_deviceinterfaced_startDeviceDiscoveryForVIDPID
          (int param_1,uint param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = "YES";
  pcVar3 = "YES";
  if (param_3 == 0) {
    pcVar3 = "NO";
  }
  if (param_4 == 0) {
    pcVar2 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s vid %u pid %u callbacks %s queue %s",
                    "taDFU_deviceinterfaced_startDeviceDiscoveryForVIDPID",param_1,param_2,pcVar3,
                    pcVar2);
  if ((param_3 != 0) && (param_4 != 0)) {
    _initServiceDiscoveryGlobals();
    if ((_vidPidCallbacksMap != 0) && (_unclaimedDevicesMatchingVidPidMap != 0)) {
      uVar4 = param_1 << 0x10 | param_2;
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s vid %u pid %u keyForVidPid %u",
                        "keyForVIDPID",param_1,param_2,uVar4);
      uVar1 = _taDFU_deviceinterfaced_startDeviceDiscoveryGeneric
                        (_vidPidCallbacksMap,_unclaimedDevicesMatchingVidPidMap,uVar4,param_3,
                         param_4);
      return uVar1;
    }
  }
  return 0xffffffffffffffea;
}

