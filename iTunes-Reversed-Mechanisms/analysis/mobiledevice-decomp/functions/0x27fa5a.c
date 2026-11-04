// rea decompile_all
// name: _AMAuthInstallBasebandICE3MeasureModemStack
// address: 0x27fa5a
// body: available
// range: 0x27fa5a-0x27fc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandICE3MeasureModemStack
              (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar2 = _CFGetAllocator();
  lVar3 = _FlsParserCreate(uVar2);
  iVar1 = 2;
  local_50 = lVar3;
  if (lVar3 == 0) {
    local_40 = 0;
  }
  else {
    iVar1 = _FlsParserReadFromData(lVar3,param_2);
    if ((iVar1 == 0) && (iVar1 = _FlsParserCopyModemStack(lVar3,&local_38,&local_48), iVar1 == 0)) {
      uVar2 = _CFGetAllocator(param_1);
      uVar4 = _CFDataGetBytePtr(local_38);
      uVar5 = _CFDataGetLength(local_38);
      iVar1 = __AMAuthInstallCopyBufferMeasurement(uVar2,uVar4,uVar5,&local_60);
      uVar2 = local_60;
      local_40 = local_60;
      if (iVar1 == 0) {
        uVar4 = 0;
        _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureModemStack","Digest = %@",local_60);
        _CFDictionarySetValue(param_3,&cf_ModemStack_Digest,uVar2);
        uVar2 = _CFGetAllocator(param_1);
        uVar5 = _CFDataGetLength(local_38);
        lVar3 = _CFStringCreateWithFormat(uVar2,0,&cf_0x_08lx,uVar5);
        if (lVar3 == 0) {
          lVar3 = 0;
          iVar1 = 2;
        }
        else {
          _CFDictionarySetValue(param_3,&cf_ModemStack_Length,lVar3);
          uVar2 = _CFGetAllocator(param_1);
          uVar4 = _CFDataGetBytePtr(local_48);
          uVar5 = _CFDataGetLength(local_48);
          iVar1 = __AMAuthInstallCopyBufferMeasurement(uVar2,uVar4,uVar5,&local_58);
          uVar4 = local_58;
          if (iVar1 == 0) {
            iVar1 = 0;
            _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureModemStack","SecPack Digest = %@",
                              local_58);
            _CFDictionarySetValue(param_3,&cf_ModemStack_SecPackDigest,uVar4);
          }
        }
        goto LAB_0027fc11;
      }
    }
    else {
      local_40 = 0;
    }
  }
  uVar4 = 0;
  lVar3 = 0;
LAB_0027fc11:
  _SafeRelease(local_50);
  _SafeRelease(local_38);
  _SafeRelease(local_48);
  _SafeRelease(local_40);
  _SafeRelease(uVar4);
  _SafeRelease(lVar3);
  return iVar1;
}

