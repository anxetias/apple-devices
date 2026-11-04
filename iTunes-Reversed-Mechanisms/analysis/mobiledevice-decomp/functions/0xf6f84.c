// rea decompile_all
// name: __AMRAuthInstallCopySigningServerURL
// address: 0xf6f84
// body: available
// range: 0xf6f84-0xf70f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRAuthInstallCopySigningServerURL
          (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  int iVar5;
  cfstringStruct *pcVar6;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  uVar1 = _CFStringGetTypeID();
  lVar2 = __AMRAuthInstallCopyOptionOrPreference
                    (param_1,param_2,&cf_AuthInstallSigningServerURL,uVar1);
  if (lVar2 == 0) {
    uStack_38 = CONCAT26(0x1bb,(undefined6)uStack_38);
    if (param_1 == 0) {
      pcVar3 = (cfstringStruct *)0x0;
      lVar2 = 0;
    }
    else {
      pcVar3 = (cfstringStruct *)_CFDictionaryGetValue(param_1,&cf_AuthInstallSigningServerHost);
      lVar2 = _CFDictionaryGetValue(param_1,&cf_AuthInstallSigningServerPort);
    }
    if (pcVar3 == (cfstringStruct *)0x0 && lVar2 == 0) {
      pcVar3 = &cf_https;
      pcVar6 = &cf_gs_apple_com;
      iVar5 = 0x1bb;
    }
    else {
      pcVar6 = &cf_gs_apple_com;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar6 = pcVar3;
      }
      uStack_38 = CONCAT26(0x50,(undefined6)uStack_38);
      pcVar3 = &cf_http;
      if (lVar2 == 0) {
        iVar5 = 0x50;
      }
      else {
        _CFNumberGetValue(lVar2,8,(long)&uStack_38 + 6);
        iVar5 = (int)uStack_38._6_2_;
      }
    }
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFStringCreateWithFormat(uVar1,0,&cf__________u,pcVar3,pcVar6,iVar5);
    if (lVar2 == 0) {
      return 0x12;
    }
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  }
  lVar4 = _CFURLCreateWithString(uVar1,lVar2,0);
  if (lVar4 == 0) {
    uVar1 = 0x12;
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      uVar1 = _CFRetain(lVar2);
      *param_3 = uVar1;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar1 = _CFRetain(lVar4);
      *param_4 = uVar1;
    }
    _CFRelease(lVar2);
    uVar1 = 0;
    lVar2 = lVar4;
  }
  _CFRelease(lVar2);
  return uVar1;
}

