// rea decompile_all
// name: ___initServiceDiscoveryGlobals_block_invoke
// address: 0x2ff9f
// body: available
// range: 0x2ff9f-0x3015a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___initServiceDiscoveryGlobals_block_invoke(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  _vidPidCallbacksMap = _CFDictionaryCreateMutable(uVar1,0,0,0);
  _locationIDCallbacksMap = _CFDictionaryCreateMutable(uVar1,0,0,0);
  puVar2 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  _unclaimedDevicesMatchingVidPidMap =
       _CFDictionaryCreateMutable(uVar1,0,0,PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _unclaimedDevicesMatchingLocationIDMap = _CFDictionaryCreateMutable(uVar1,0,0,puVar2);
  if (PTR__tadfu_transport_client_usable_004413c8 != (undefined *)0x0 &&
      PTR__tadfu_transport_client_create_with_device_discovery_callbacks_004413b8 !=
      (undefined *)0x0) {
    cVar3 = _tadfu_transport_client_usable();
    if (cVar3 != '\0') {
      _globalXPCClient =
           _tadfu_transport_client_create_with_device_discovery_callbacks
                     (_taDFU_Daemon_deviceAddedCallback,0,_taDFU_Daemon_deviceRemovedCallback,0);
      pcVar4 = "YES";
      if (_globalXPCClient == 0) {
        pcVar4 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "%s created tadfu transport client with tadfu_transport_client_create_with_device_discovery_callbacks. globalDeviceDiscoveryClient %s"
                        ,"initServiceDiscoveryGlobals_block_invoke",pcVar4);
    }
  }
  puVar2 = PTR___os_log_default_004412f0;
  pcVar4 = "YES";
  pcVar5 = "YES";
  if (_vidPidCallbacksMap == 0) {
    pcVar5 = "NO";
  }
  pcVar6 = "YES";
  if (_locationIDCallbacksMap == 0) {
    pcVar6 = "NO";
  }
  pcVar7 = "YES";
  if (_unclaimedDevicesMatchingVidPidMap == 0) {
    pcVar7 = "NO";
  }
  pcVar8 = "YES";
  if (_unclaimedDevicesMatchingLocationIDMap == 0) {
    pcVar8 = "NO";
  }
  pcVar9 = "YES";
  if (_globalXPCClient == 0) {
    pcVar9 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,
                    "%s initialized discovery globals vidPidCallbacksMap %s locationIDCallbacksMap %s unclaimedDevicesMatchingVidPidMap %s unclaimedDevicesMatchingLocationIDMap %s globalDeviceDiscoveryClient %s"
                    ,"initServiceDiscoveryGlobals_block_invoke",pcVar5,pcVar6,pcVar7,pcVar8,pcVar9);
  if (_globalXPCClient == 0) {
    pcVar4 = "NO";
  }
  __os_log_internal(0,puVar2,0,"%s deviceinterfaced enabled: %s.",
                    "initServiceDiscoveryGlobals_block_invoke",pcVar4);
  return;
}

