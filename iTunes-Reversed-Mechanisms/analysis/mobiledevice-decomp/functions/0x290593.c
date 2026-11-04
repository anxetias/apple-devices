// rea decompile_all
// name: _AMAuthInstallFusingProgramRequestInternal
// address: 0x290593
// body: available
// range: 0x290593-0x29096b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallFusingProgramRequestInternal
              (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  int local_4c;
  undefined8 local_48;
  int local_3c;
  long local_38;
  
  local_4c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_90 = 0;
  local_48 = 0;
  iVar1 = 1;
  if ((param_2 == 0) || (param_3 == 0)) {
LAB_002908a6:
    local_48 = 0;
    lVar2 = 0;
    goto LAB_00290800;
  }
  lVar2 = 0;
  if (param_4 == (undefined8 *)0x0) goto LAB_00290800;
  local_88 = param_4;
  local_80 = param_5;
  lVar2 = _CFDictionaryCreateMutable
                    (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    iVar1 = 2;
    goto LAB_002908a6;
  }
  _CFDictionarySetValue(lVar2,&cf_ProfileSpecifier,param_3);
  local_38 = lVar2;
  iVar1 = __AMAuthInstallFusingProgramCreateRequest
                    (param_1,param_2,&cf_GetFusingProgram,lVar2,&local_70);
  if (iVar1 != 0) {
    local_48 = local_70;
    lVar2 = local_38;
    goto LAB_00290800;
  }
  _AMAuthInstallLog(6,"AMAuthInstallFusingProgramRequestInternal",
                    "requesting fusing program from %@",param_2);
  uVar3 = _CFDictionaryGetValue(param_3,&cf_ChipID);
  _CFNumberGetValue(uVar3,3,&local_4c);
  _AMAuthInstallLog(6,"AMAuthInstallFusingProgramRequestInternal","Chiup ID: %u",local_4c);
  if ((((local_4c == 0xe50e1) || (local_4c == 0x1440e1)) || (local_4c == 0x1720e1)) ||
     (((local_4c == 0x19f0e1 || (local_4c == 0x2af0e1)) || (local_4c == 0x1fe0e1)))) {
    local_48 = local_70;
    iVar1 = _AMAuthInstallHttpMessageSendSyncNewWithOption
                      (0x402e000000000000,param_1,local_70,&local_68,&local_3c,local_80);
    if (local_3c == 200) goto LAB_00290719;
    _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal","Failed with httpStatus(%d)");
LAB_0029093b:
    iVar1 = 0xe;
    lVar2 = local_38;
  }
  else {
    local_48 = local_70;
    iVar1 = _AMAuthInstallHttpMessageSendSyncNew
                      (0x402e000000000000,param_1,local_70,&local_68,&local_3c,local_80);
LAB_00290719:
    lVar2 = local_38;
    if (iVar1 != 0) goto LAB_00290800;
    if (local_68 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal",
                        "no response data (httpStatus=%d)",local_3c);
    }
    else {
      if (((local_4c == 0xe50e1) || (local_4c == 0x1440e1)) ||
         ((local_4c == 0x1720e1 ||
          (((local_4c == 0x19f0e1 || (local_4c == 0x2af0e1)) || (local_4c == 0x1fe0e1)))))) {
        local_58 = _CFPropertyListCreateFromXMLData(param_1,local_68,0,&local_90);
        uVar3 = 0;
        if (local_90 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal",
                            "Failed to get fusing response data from CFPropertyListCreateFromXMLData() error: %@"
                           );
          goto LAB_0029093b;
        }
      }
      else {
        iVar1 = __AMAuthInstallFusingProgramCopyResponseParameters
                          (param_1,local_68,&local_74,&local_60,&local_58);
        lVar2 = local_38;
        if (iVar1 != 0) goto LAB_00290800;
        uVar3 = local_60;
        if (local_74 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal","server error: %@ (%d)",
                            local_60);
          iVar1 = 99;
          lVar2 = local_38;
          goto LAB_00290800;
        }
      }
      lVar2 = local_58;
      _AMAuthInstallLog(6,"AMAuthInstallFusingProgramRequestInternal",
                        "httpStatus=%u, status=%d, message=%@",local_3c,0,uVar3);
      if (lVar2 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal",
                          "server failed to provide a fusing program");
        goto LAB_0029093b;
      }
      lVar4 = _CFGetTypeID(lVar2);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 == lVar5) {
        iVar1 = 0;
        _AMAuthInstallLog(6,"AMAuthInstallFusingProgramRequestInternal","data=%@",lVar2);
        uVar3 = _CFRetain(lVar2);
        *local_88 = uVar3;
        lVar2 = local_38;
        goto LAB_00290800;
      }
      _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequestInternal","fusing program type mismatch"
                       );
    }
    iVar1 = 0x11;
    lVar2 = local_38;
  }
LAB_00290800:
  _SafeRelease(lVar2);
  _SafeRelease(local_48);
  _SafeRelease(local_68);
  _SafeRelease(local_60);
  _SafeRelease(local_58);
  return iVar1;
}

