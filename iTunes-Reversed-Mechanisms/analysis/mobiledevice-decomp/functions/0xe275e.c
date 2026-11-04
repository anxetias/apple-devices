// rea decompile_all
// name: __AMRestoreCopySystemPartitionPaddingDictionary
// address: 0xe275e
// body: available
// range: 0xe275e-0xe2a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreCopySystemPartitionPaddingDictionary(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined1 auVar12 [16];
  undefined8 local_60;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_50 = 0;
  local_48 = param_1;
  lVar2 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
  if (lVar2 == 0) {
    pcVar9 = &cf_Failedtogetrestorebundlepathfromoptions;
LAB_000e280c:
    _AMRLog(3,pcVar9);
    return 0;
  }
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFStringCreateWithFormat(uVar10,0,&cf____cRestore_plist,lVar2,0x2f);
  if (lVar3 == 0) {
    pcVar9 = &cf_FailedtocreatepathtoRestore_plistinbundle;
    goto LAB_000e280c;
  }
  iVar1 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar3,&local_50);
  if (iVar1 != 0) {
    lVar4 = 0;
    _AMRLogWithFilePath(3,lVar3,&cf_unabletoloadRestore_plist__d,iVar1);
    pvVar7 = (void *)0x0;
    pvVar6 = (void *)0x0;
    lVar2 = local_50;
    goto LAB_000e2a26;
  }
  local_38 = local_50;
  lVar4 = _CFDictionaryGetValue(local_50,&cf_SystemPartitionPadding);
  if (lVar4 == 0) {
    lVar4 = 0;
    _AMRLog(4,&
              cf_Can_treturnpaddinginformationsinceit_snotintheRestore_plist_lookinginBuildManifest_plist
           );
    uVar8 = _CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
    lVar2 = _AMRestoreCopyBuildManifestInfo(lVar2,local_48,uVar8,0);
    if (lVar2 != 0) {
      lVar4 = _CFDictionaryGetValue(lVar2,&cf_SystemPartitionPadding);
      if (lVar4 == 0) {
        lVar4 = 0;
        _AMRLog(4,&cf_Can_treturnpaddinginformationsinceit_snotintheBuildManifest_plist);
      }
      else {
        uVar8 = _CFDictionaryGetCount(lVar4);
        lVar4 = _CFDictionaryCreateMutableCopy(uVar10,uVar8,lVar4);
      }
      _CFRelease(lVar2);
    }
    pvVar7 = (void *)0x0;
    pvVar6 = (void *)0x0;
    lVar2 = local_38;
    goto LAB_000e2a26;
  }
  sVar5 = _CFDictionaryGetCount(lVar4);
  pvVar6 = _calloc(sVar5,8);
  pvVar7 = _calloc(sVar5,8);
  _CFDictionaryGetKeysAndValues(lVar4,pvVar6,pvVar7);
  if ((long)sVar5 < 1) {
LAB_000e2957:
    pcVar9 = &cf_Therewasnopaddingentryforboardconfig__inRestore_plist;
    uVar10 = 4;
    lVar2 = local_48;
  }
  else {
    sVar11 = 0;
    local_60 = 0;
    local_40 = 0;
    do {
      lVar2 = *(long *)((long)pvVar6 + sVar11 * 8);
      if (lVar2 == 0) {
        _AMRLog(3,&cf_InvalidNULLkeyinpaddingdictionary);
      }
      else {
        uVar8 = *(undefined8 *)((long)pvVar7 + sVar11 * 8);
        auVar12 = _CFStringFind(local_48,lVar2,1);
        if ((auVar12._0_8_ == 0 && auVar12._8_8_ != -1) &&
           ((local_40 == 0 || (lVar4 = _CFStringGetLength(local_40), lVar4 < auVar12._8_8_)))) {
          local_60 = uVar8;
          local_40 = lVar2;
        }
      }
      sVar11 = sVar11 + 1;
    } while (sVar5 != sVar11);
    if (local_40 == 0) goto LAB_000e2957;
    uVar8 = _CFDictionaryGetCount(local_60);
    lVar4 = _CFDictionaryCreateMutableCopy(uVar10,uVar8,local_60);
    lVar2 = local_38;
    if (lVar4 != 0) goto LAB_000e2a26;
    pcVar9 = &cf_Failedtocopypaddingdictionaryforbestmatch__;
    uVar10 = 3;
    lVar2 = local_40;
  }
  lVar4 = 0;
  _AMRLog(uVar10,pcVar9,lVar2);
  lVar2 = local_38;
LAB_000e2a26:
  if (lVar2 != 0) {
    _CFRelease();
  }
  if (pvVar6 != (void *)0x0) {
    _free(pvVar6);
  }
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  _CFRelease(lVar3);
  return lVar4;
}

