// rea decompile_all
// name: _taDFU_deviceinterfaced_startDeviceDiscoveryGeneric
// address: 0x265d59
// body: available
// range: 0x265d59-0x265f1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_taDFU_deviceinterfaced_startDeviceDiscoveryGeneric
          (long param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar7 = "YES";
  pcVar8 = "YES";
  if (param_1 == 0) {
    pcVar8 = "NO";
  }
  pcVar9 = "YES";
  if (param_2 == 0) {
    pcVar9 = "NO";
  }
  pcVar10 = "YES";
  if (param_4 == (long *)0x0) {
    pcVar10 = "NO";
  }
  pcVar11 = "YES";
  if (param_5 == 0) {
    pcVar11 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,
                    "%s callbacksMap %s unclaimedDevicesMap %s deviceKey %lu callbacks %s queue %s",
                    "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric",pcVar8,pcVar9,param_3,
                    pcVar10,pcVar11);
  puVar4 = PTR___os_log_default_004412f0;
  uVar6 = 0xffffffffffffffea;
  if ((((param_4 != (long *)0x0) && (param_1 != 0)) && (param_2 != 0)) &&
     (((param_5 != 0 && (*param_4 != 0)) && (param_4[1] != 0)))) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,
                      "%s callbacks->discoveryCallback and callbacks->terminationCallback provided",
                      "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric");
    if (_globalXPCClient == 0) {
      pcVar7 = "NO";
    }
    __os_log_internal(0,puVar4,0,"%s globalDeviceDiscoveryClient %s",
                      "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric",pcVar7);
    uVar6 = 0xffffffffffffffea;
    if (_globalXPCClient != 0) {
      puVar5 = _malloc(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        uVar6 = 0xfffffffffffffff4;
      }
      else {
        uVar1 = *(undefined4 *)((long)param_4 + 4);
        lVar3 = param_4[1];
        uVar2 = *(undefined4 *)((long)param_4 + 0xc);
        *puVar5 = (int)*param_4;
        puVar5[1] = uVar1;
        puVar5[2] = (int)lVar3;
        puVar5[3] = uVar2;
        _CFDictionarySetValue(param_1,param_3,puVar5);
        _dispatch_async(param_5);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

