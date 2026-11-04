// rea decompile_all
// name: _AMAuthInstallFusingProgramAck
// address: 0x29096c
// body: available
// range: 0x29096c-0x290b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallFusingProgramAck
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar5 = 0;
  lVar2 = _CFDictionaryCreateMutable
                    (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    iVar1 = 2;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    local_38 = lVar2;
    _CFDictionarySetValue(lVar2,&cf_FusingProgram,param_3);
    lVar2 = local_38;
    puVar3 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
    if (param_4 == '\0') {
      puVar3 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
    }
    _CFDictionarySetValue(local_38,&cf_Consumed,*puVar3);
    iVar1 = __AMAuthInstallFusingProgramCreateRequest
                      (param_1,param_2,&cf_AckFusingProgram,lVar2,&local_50);
    uVar6 = local_50;
    if (iVar1 == 0) {
      _AMAuthInstallLog(6,"AMAuthInstallFusingProgramAck","acknowledging fusing program from %@",
                        param_2);
      uVar6 = local_50;
      iVar1 = _AMAuthInstallHttpMessageSendSyncNew
                        (0x402e000000000000,param_1,local_50,&local_48,&local_3c,0);
      if (iVar1 == 0) {
        if (local_48 != 0) {
          iVar1 = __AMAuthInstallFusingProgramCopyResponseParameters
                            (param_1,local_48,&local_54,&local_68,&local_60);
          uVar5 = local_60;
          uVar4 = local_68;
          lVar2 = local_38;
          if (iVar1 == 0) {
            iVar1 = 0;
            _AMAuthInstallLog(6,"AMAuthInstallFusingProgramAck",
                              "httpStatus=%u, status=%d, message=%@, data=%@",local_3c,local_54,
                              local_68,local_60);
            lVar2 = local_38;
          }
          goto LAB_00290aca;
        }
        _AMAuthInstallLog(3,"AMAuthInstallFusingProgramAck","no response data (httpStatus=%u)",
                          local_3c);
        iVar1 = 0x11;
      }
    }
    uVar5 = 0;
    uVar4 = 0;
    lVar2 = local_38;
  }
LAB_00290aca:
  _SafeRelease(lVar2);
  _SafeRelease(uVar6);
  _SafeRelease(local_48);
  _SafeRelease(uVar4);
  _SafeRelease(uVar5);
  return iVar1;
}

