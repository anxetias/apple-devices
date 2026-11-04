// rea decompile_all
// name: ___taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke
// address: 0x2fb93
// body: available
// range: 0x2fb93-0x2fd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2fd1c to 0x2a95fa _CFDictionaryRemoveValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  pcVar5 = "YES";
  if (lVar2 == 0) {
    pcVar5 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,
                    "%s go through the unclaimed devices. array %s",
                    "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke",pcVar5);
  if (lVar2 != 0) {
    lVar3 = _CFArrayGetCount(lVar2);
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s found count %ld devices",
                      "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke",lVar3);
    if (0 < lVar3) {
      lVar6 = 0;
      do {
        lVar4 = _CFArrayGetValueAtIndex(lVar2,lVar6);
        puVar1 = PTR___os_log_default_004412f0;
        pcVar5 = "YES";
        if (lVar4 == 0) {
          pcVar5 = "NO";
        }
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s got device %s from array",
                          "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke",pcVar5);
        if (lVar4 != 0) {
          __os_log_internal(0,puVar1,0,"%s calling callbacks->discoveryCallback on device %s",
                            "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke","YES")
          ;
          (*(code *)**(undefined8 **)(param_1 + 0x30))(lVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s removing key %lu from map",
                      "taDFU_deviceinterfaced_startDeviceDiscoveryGeneric_block_invoke",
                      *(undefined8 *)(param_1 + 0x28));
    _CFDictionaryRemoveValue(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}

