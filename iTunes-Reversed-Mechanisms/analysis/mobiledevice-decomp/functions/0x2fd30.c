// rea decompile_all
// name: _taDFU_KISDaemon_download
// address: 0x2fd30
// body: available
// range: 0x2fd30-0x2ff9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _taDFU_KISDaemon_download(long param_1,FILE *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_c0 [4];
  ushort local_bc;
  ulong local_60;
  
  pcVar7 = "YES";
  pcVar5 = "YES";
  if (param_1 == 0) {
    pcVar5 = "NO";
  }
  pcVar6 = "YES";
  if (param_2 == (FILE *)0x0) {
    pcVar6 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device %s file %s address %lu.",
                    "taDFU_KISDaemon_download",pcVar5,pcVar6,param_3);
  if ((param_1 != 0) && (param_2 != (FILE *)0x0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      pcVar7 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_deviceData %s",
                      "taDFU_KISDaemon_download",pcVar7);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((((puVar1 != (undefined8 *)0x0) && (iVar4 = _fileno(param_2), iVar4 != -1)) &&
        (iVar4 = _fstat_INODE64(iVar4,local_c0), -1 < iVar4)) &&
       ((SBORROW2(0,local_bc & 0xf000) && (local_60 != 0)))) {
      pcVar5 = "YES";
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "%s file %s validated with transferSize %llu, deviceData->payloadCapacity %u"
                        ,"taDFU_KISDaemon_download","YES",local_60,*(undefined4 *)(puVar1 + 1));
      if (local_60 <= *(uint *)(puVar1 + 1)) {
        _initServiceDiscoveryGlobals();
        if (_globalXPCClient == 0) {
          pcVar5 = "NO";
        }
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s globalDeviceDiscoveryClient %s",
                          "taDFU_KISDaemon_download",pcVar5);
        if (PTR__tadfu_transport_client_download_data_004413c0 != (undefined *)0x0 &&
            _globalXPCClient != 0) {
          cVar2 = _tadfu_transport_client_download_data(_globalXPCClient,puVar1[4],*puVar1,param_2);
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s downloadBlockResult %d",
                            "taDFU_KISDaemon_download",cVar2);
          if ((PTR__tadfu_transport_client_complete_dfu_004413b0 != (undefined *)0x0) &&
             (cVar2 != '\0')) {
            bVar3 = _tadfu_transport_client_complete_dfu
                              (_globalXPCClient,puVar1[4],local_60 & 0xffffffff);
            __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s completeDFUResult %d",
                              "taDFU_KISDaemon_download",bVar3 & 1);
            if ((bVar3 & 1) != 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  _taDFU_KISDaemon_download_cold_1(param_1);
  return 0xfffffff7;
}

