// rea decompile_all
// name: _AMAuthInstallApExtractZippedDeviceMap
// address: 0x275f58
// body: available
// range: 0x275f58-0x2760bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApExtractZippedDeviceMap(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  uVar2 = _CFAllocatorGetDefault();
  iVar1 = _AMAuthInstallPlatformCopyURLToNewTempDirectory(uVar2,"device-map-XXXX",&local_30);
  if (iVar1 == 0) {
    uVar2 = _CFAllocatorGetDefault();
    lVar3 = _CFURLCreateCopyAppendingPathComponent(uVar2,local_30,&cf_device_map,0);
    if (lVar3 == 0) {
      iVar1 = 2;
      lVar3 = 0;
    }
    else {
      uVar2 = _CFAllocatorGetDefault();
      iVar1 = _AMAuthInstallSupportWriteDataToFileURL(uVar2,param_1,lVar3,1);
      if (iVar1 == 0) {
        lVar4 = _BbfwReaderOpen(lVar3);
        if (lVar4 == 0) {
          _AMAuthInstallLog(3,"AMAuthInstallApExtractZippedDeviceMap","failed to unzip file");
          iVar1 = 4;
        }
        else {
          iVar1 = _BbfwReaderCopyFileData(lVar4,&local_38);
          if (iVar1 == 0) {
            *param_2 = local_38;
          }
          else {
            _AMAuthInstallLog(3,"AMAuthInstallApExtractZippedDeviceMap",
                              "failed to copy data from %@",lVar3);
          }
          _BbfwReaderClose(lVar4);
        }
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallApExtractZippedDeviceMap","failed to write data to %@",
                          lVar3);
      }
    }
  }
  else {
    lVar3 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallApExtractZippedDeviceMap","failed to create temp dir");
  }
  _SafeRelease(lVar3);
  _SafeRelease(local_30);
  return iVar1;
}

