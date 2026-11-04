// rea decompile_all
// name: _AMAuthInstallMonetStitchEBootLoader
// address: 0x1ac4c9
// body: available
// range: 0x1ac4c9-0x1ac711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetStitchEBootLoader
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          cfstringStruct *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  size_t sVar12;
  cfstringStruct *pcVar13;
  char *pcVar14;
  char *pcVar15;
  void *pvVar16;
  
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar1 = _CFStringCreateWithFormat(uVar2,0,&cf____Original,param_5);
  uVar2 = _CFStringCreateWithFormat(uVar2,0,&cf____Personalized,param_5);
  lVar3 = _CFDictionaryGetValue(param_3,&cf_BasebandFirmware);
  pcVar13 = &cf_BasebandFirmware;
  if ((lVar3 == 0) || (lVar3 = _CFDictionaryGetValue(lVar3,param_5), pcVar13 = param_5, lVar3 == 0))
  {
    _AMAuthInstallLog(3,"_AMAuthInstallMonetStitchFirstStage","response lacks %@",pcVar13);
    uVar6 = 8;
  }
  else {
    lVar4 = _CFDataGetLength(lVar3);
    lVar5 = _CFDataGetLength(param_2);
    if (lVar4 < lVar5) {
      uVar6 = _CFGetAllocator(param_1);
      lVar4 = _CFDataCreateMutableCopy(uVar6,0,param_2);
      if (lVar4 != 0) {
        lVar5 = _CFDataGetMutableBytePtr(lVar4);
        lVar7 = _CFDataGetLength(lVar4);
        lVar8 = _CFDataGetLength(lVar3);
        pvVar16 = (void *)((lVar7 - lVar8) + lVar5);
        pcVar14 = "NO";
        pcVar15 = "NO";
        if (((ulong)pvVar16 & 0x3f) == 0) {
          pcVar15 = "YES";
        }
        if (((ulong)pvVar16 & 0x7f) == 0) {
          pcVar14 = "YES";
        }
        uVar9 = _CFDataGetLength(lVar3);
        uVar10 = _CFDataGetLength(lVar4);
        uVar6 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallMonetStitchFirstStage",
                          "Stitch Debug: \n StitchAddress: 0x%x \n 64-Byte-Aligned: %s \n 128-Byte-Aligned: %s\n Len(stitchData)=%d Len(newFileData) = %d"
                          ,pvVar16,pcVar15,pcVar14,uVar9,uVar10);
        pvVar11 = (void *)_CFDataGetBytePtr(lVar3);
        sVar12 = _CFDataGetLength(lVar3);
        _memcpy(pvVar16,pvVar11,sVar12);
        uVar9 = _CFRetain(lVar4);
        *param_4 = uVar9;
        _SafeRelease(lVar4);
        _AMAuthInstallDebugWriteObject(param_1,param_2,uVar1,1);
        _AMAuthInstallDebugWriteObject(param_1,*param_4,uVar2,1);
        goto LAB_001ac696;
      }
      uVar6 = 2;
    }
    else {
      _AMAuthInstallMonetStitchEBootLoader_cold_1();
      uVar6 = 1;
    }
  }
  _SafeRelease(0);
LAB_001ac696:
  _SafeRelease(uVar1);
  _SafeRelease(uVar2);
  return uVar6;
}

