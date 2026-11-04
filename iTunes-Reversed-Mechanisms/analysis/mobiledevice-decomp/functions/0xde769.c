// rea decompile_all
// name: __AMPortDFUDeviceInitParameters
// address: 0xde769
// body: available
// range: 0xde769-0xde932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMPortDFUDeviceInitParameters(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 local_30;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    __loadFirmwareInfoDFU(uVar4);
    lVar2 = __copyDFUDeviceSerialString(uVar4);
    if (lVar2 == 0) {
      pcVar6 = &cf_Failedtocopyserialstringfromdevice;
    }
    else {
      iVar1 = _AMDFUModeDeviceNonceForPort(uVar4);
      if (iVar1 == 0) {
        uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar3 = _CFStringCreateWithFormat(uVar4,0,&cf_NONC___,0);
        *(long *)(param_1 + 0x20) = lVar2;
        *(undefined8 *)(param_1 + 0x28) = uVar3;
        uVar4 = _CFDictionaryCreateMutable(uVar4,1,0,0);
        _CFDictionaryAddValue(uVar4,&cf_serialString,lVar2);
        _CFDictionaryAddValue(uVar4,&cf_nonceString,uVar3);
        local_30 = 0;
        lVar2 = _Ace3ExternalDFURestoreInfoInit(uVar4,__AMAuthInstallLogHandler,uVar4);
        if (lVar2 == 0) {
          pcVar6 = &cf_FailedtocreateExternalDFURestoreInfoobject_can_tdetermineAPBoardandChipID;
        }
        else {
          lVar2 = _Ace3ExternalDFURestoreInfoGetInfo(lVar2,uVar4,&local_30);
          if (lVar2 == 0) {
            pcVar6 = &cf_FailedtoretrieveAPBoardandChipIDfromExternalDFURestoreInfo;
          }
          else {
            lVar5 = _CFDictionaryGetValue(lVar2,&cf_APBoardID);
            lVar2 = _CFDictionaryGetValue(lVar2,&cf_APChipID);
            if (lVar5 == 0) {
              pcVar6 = &cf_boardIDnotfound;
            }
            else {
              if (lVar2 != 0) {
                _CFNumberGetValue(lVar5,9,param_1 + 0x1c);
                _CFNumberGetValue(lVar2,9,param_1 + 0x18);
                __setDFUDeviceBoardIDAndChipID(*(undefined8 *)(param_1 + 0x30),lVar5,lVar2);
                _AMRLog(6,&cf_LoadedAPBoardID__andAPChipID__fromRestoreInfoExternalDFU,lVar5,lVar2);
                return param_1;
              }
              pcVar6 = &cf_chipIDnotfound;
            }
          }
        }
      }
      else {
        pcVar6 = &cf_FailedtocopyNONCfromdevice;
      }
    }
    _AMRLog(3,pcVar6);
  }
  return param_1;
}

