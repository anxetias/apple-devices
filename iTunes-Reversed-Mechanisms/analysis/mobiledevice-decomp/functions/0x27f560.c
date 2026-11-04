// rea decompile_all
// name: _AMAuthInstallBasebandICE3StitchEbl
// address: 0x27f560
// body: available
// range: 0x27f560-0x27f70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandICE3StitchEbl
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  lVar2 = _CFDictionaryGetValue(param_3,&cf_BBTicket);
  lVar5 = 0;
  if (lVar2 == 0) {
    iVar1 = 8;
  }
  else if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
    iVar1 = 0;
    lVar5 = 0;
  }
  else {
    _AMAuthInstallDebugWriteObject(param_1,lVar2,&cf_BB_Ticket,1);
    uVar3 = _CFGetAllocator(param_1);
    lVar5 = _FlsParserCreate(uVar3);
    if (lVar5 == 0) {
      lVar5 = 0;
      iVar1 = 2;
    }
    else {
      iVar1 = _FlsParserReadFromData(lVar5,param_2);
      if ((iVar1 != 0) || (iVar1 = _FlsParserCopyEbl(lVar5,&local_38), iVar1 != 0)) {
        lVar2 = 0;
        goto LAB_0027f6c6;
      }
      uVar3 = _CFGetAllocator(param_1);
      lVar2 = _CFDataCreateMutableCopy(uVar3,0,lVar2);
      iVar1 = 2;
      if (lVar2 != 0) {
        iVar1 = _CFDataGetLength(lVar2);
        _CFDataAppendBytes(lVar2,&_AMAuthInstallBasebandICE3StitchEbl_kPaddingBytes,-iVar1 & 3);
        uVar3 = _CFDataGetBytePtr(local_38);
        uVar4 = _CFDataGetLength(local_38);
        _CFDataAppendBytes(lVar2,uVar3,uVar4);
        _AMAuthInstallDebugWriteObject(param_1,lVar2,&cf_EBL_Personalized,1);
        iVar1 = _FlsParserReplaceEbl(lVar5,lVar2);
        if ((iVar1 == 0) && (iVar1 = _FlsParserCopyAsData(lVar5,&local_40), iVar1 == 0)) {
          uVar3 = _CFRetain(local_40);
          *param_4 = uVar3;
          iVar1 = 0;
        }
        goto LAB_0027f6c6;
      }
    }
  }
  lVar2 = 0;
LAB_0027f6c6:
  _SafeRelease(lVar5);
  _SafeRelease(local_38);
  _SafeRelease(local_40);
  _SafeRelease(lVar2);
  return iVar1;
}

