// rea decompile_all
// name: _MDMCreateDeltaDirectory
// address: 0xaf51f
// body: available
// range: 0xaf51f-0xaf6b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_MDMCreateDeltaDirectory
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  
  puVar3 = (undefined8 *)_MDMCreateDeltaState();
  if (puVar3 == (undefined8 *)0x0) {
    _MDMCreateDeltaDirectory_cold_2();
    uVar7 = 0xffffffff;
  }
  else {
    cVar1 = _verbose();
    if (cVar1 != '\0') {
      _dmlog("MDMCreateDeltaDirectory",0x787,&cf_diffing__s_options___,param_1,param_5);
    }
    if (param_5 == 0) {
      lVar4 = _CFDictionaryCreateMutable
                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    }
    else {
      lVar4 = _CFDictionaryCreateMutableCopy(0,0,param_5);
    }
    lVar5 = _CFDictionaryGetValue(lVar4,&cf_InstallDeltaTypeKey);
    if (lVar5 == 0) {
      bVar8 = false;
    }
    else {
      cVar1 = _CFEqual(lVar5,&cf_InstallDeltaTypeSparseIPABinary);
      bVar8 = cVar1 != '\0';
    }
    lVar5 = _CFDictionaryGetValue(lVar4,&cf_PackageType);
    if (lVar5 == 0) {
      bVar9 = false;
    }
    else {
      cVar1 = _CFEqual(&cf_Developer,lVar5);
      bVar9 = cVar1 == '\0';
    }
    if (param_4 != 0) {
      _CFDictionarySetValue(lVar4,&cf_ALWAYS_XFER_LIST,param_4);
    }
    pcVar6 = "FALSE";
    if (bVar8 != false) {
      pcVar6 = "TRUE";
    }
    uVar7 = 0;
    _dmlog("MDMCreateDeltaDirectory",0x7a2,
           &
           cf_callingMDMDirectoryDiffwith_state_>old_bundle__sstate_>new_bundle__sstate_>dst_bundle__s_binaryDiffflag__sdst_ipa__s
           ,puVar3[1],*puVar3,puVar3[4],pcVar6,puVar3[2]);
    iVar2 = _MDMDirectoryDiff(puVar3,lVar4,0,bVar9,bVar8,0);
    if (iVar2 != 0) {
      _MDMCreateDeltaDirectory_cold_1();
      uVar7 = 0xffffffff;
    }
    _MDMDestroyDeltaState(puVar3);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
  }
  return uVar7;
}

