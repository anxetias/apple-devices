// rea decompile_all
// name: __AMAuthInstallBasebandStitchICE3Psi
// address: 0x27f31c
// body: available
// range: 0x27f31c-0x27f44a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallBasebandStitchICE3Psi
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,cfstringStruct *param_4,
          undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  undefined8 uStack_40;
  
  lVar1 = _CFDictionaryGetValue(param_3,&cf_BasebandFirmware);
  pcVar7 = &cf_BasebandFirmware;
  if ((lVar1 == 0) || (lVar1 = _CFDictionaryGetValue(lVar1,param_4), pcVar7 = param_4, lVar1 == 0))
  {
    _AMAuthInstallLog(3,"_AMAuthInstallBasebandStitchICE3Psi","response missing \"%@\"",pcVar7);
    uStack_40 = 8;
  }
  else {
    _AMAuthInstallDebugWriteObject(param_1,param_2,param_4,1);
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _CFDataCreateMutableCopy(uVar2,0,param_2);
    if (lVar3 != 0) {
      lVar4 = _CFDataGetLength(lVar3);
      lVar5 = _CFDataGetLength(lVar1);
      _CFDataSetLength(lVar3,lVar4 - lVar5);
      uVar2 = _CFDataGetBytePtr(lVar1);
      uVar6 = _CFDataGetLength(lVar1);
      _CFDataAppendBytes(lVar3,uVar2,uVar6);
      uVar2 = _CFRetain(lVar3);
      *param_5 = uVar2;
      uStack_40 = 0;
      goto LAB_0027f3f2;
    }
    uStack_40 = 2;
  }
  lVar3 = 0;
LAB_0027f3f2:
  _SafeRelease(lVar3);
  return uStack_40;
}

