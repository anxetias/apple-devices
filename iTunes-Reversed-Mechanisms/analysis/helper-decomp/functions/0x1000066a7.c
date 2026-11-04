// rea decompile_all
// name: FUN_1000066a7
// address: 0x1000066a7
// body: available
// range: 0x1000066a7-0x100006bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006bb2 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100025b01 NSDictionary::initWithObjectsAndKeys: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000066a7(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  cfstringStruct *pcVar21;
  cfstringStruct *pcVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  
  uVar12 = FUN_100008654();
  IVar13 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  pcVar1 = (code *)PTR__objc_msgSend_100012170;
  uVar14 = (*(code *)PTR__objc_msgSend_100012170)(uVar12,"count");
  IVar13 = NSMutableArray::initWithCapacity_(IVar13,"initWithCapacity:",uVar14);
  uVar14 = _objc_autorelease(IVar13);
  lVar15 = (*pcVar1)(param_2,"objectForKey:",&cf_ProductVersion);
  lVar16 = (*pcVar1)(param_2,"objectForKey:",&cf_ProductType);
  cVar3 = _DLShouldLog(6);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_getCompatibleSourcesForRestore",6,&cf_Lookingforbackupscompatiblewith__,param_2);
  }
  uVar12 = (*pcVar1)(uVar12,"objectEnumerator");
  lVar17 = (*pcVar1)(uVar12,"nextObject");
  while (lVar17 != 0) {
    uVar18 = (*pcVar1)(lVar17,"objectForKey:",&cf_BackupPath);
    uVar19 = (*pcVar1)(lVar17,"objectForKey:",&cf_ContainsApplicationData);
    cVar3 = (*pcVar1)(uVar19,"boolValue");
    cVar4 = _DLShouldLog(6);
    if (cVar4 != '\0') {
      pcVar21 = &cf_doesn_tcontain;
      if (cVar3 != '\0') {
        pcVar21 = &cf_contains;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getCompatibleSourcesForRestore",6,&cf_Backup__appdata,pcVar21);
    }
    lVar20 = (*pcVar1)(lVar17,"objectForKey:",&cf_ProductVersion);
    pcVar21 = &cf_FullyCompatible;
    if ((lVar15 != 0) && (pcVar21 = &cf_NotCompatible, lVar20 != 0)) {
      cVar4 = (*pcVar1)(lVar20,"isEqualToString:",&cf_V1_0);
      pcVar21 = &cf_FullyCompatible;
      if (cVar4 == '\0') {
        dVar24 = (double)(*pcVar1)(lVar20,"doubleValue");
        dVar25 = (double)(*pcVar1)(lVar15,"doubleValue");
        pcVar21 = &cf_NotCompatible;
        if (dVar24 <= dVar25) {
          pcVar21 = &cf_FullyCompatible;
        }
      }
    }
    cVar4 = _DLShouldLog(6);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getCompatibleSourcesForRestore",6,&cf_Backupversionis_______vs______,pcVar21,lVar20
              ,lVar15,uVar18);
    }
    lVar20 = (*pcVar1)(lVar17,"objectForKey:",&cf_ProductType);
    puVar2 = PTR__objc_msgSend_100012170;
    pcVar22 = &cf_FullyCompatible;
    if ((lVar16 != 0) && (pcVar22 = &cf_NotCompatible, lVar20 != 0)) {
      cVar4 = (*(code *)PTR__objc_msgSend_100012170)(lVar20,"hasPrefix:",&cf_iPhone);
      cVar5 = (*(code *)puVar2)(lVar20,"hasPrefix:",&cf_iPod);
      cVar6 = (*(code *)puVar2)(lVar20,"hasPrefix:",&cf_iPad);
      cVar7 = (*(code *)puVar2)(lVar16,"hasPrefix:",&cf_iPhone);
      cVar8 = (*(code *)puVar2)(lVar16,"hasPrefix:",&cf_iPod);
      cVar9 = (*(code *)puVar2)(lVar16,"hasPrefix:",&cf_iPad);
      pcVar22 = &cf_ApplicationDataOnlyCompatible;
      if ((cVar5 == '\0' && cVar4 == '\0' || cVar9 == '\0') &&
         ((bVar23 = cVar7 == '\0' && cVar8 == '\0', cVar6 == '\0' ||
          (pcVar22 = &cf_ApplicationDataOnlyCompatible, bVar23)))) {
        pcVar22 = &cf_FullyCompatible;
        if ((cVar5 == '\0' && cVar4 == '\0' || bVar23) &&
           (pcVar22 = &cf_FullyCompatible, cVar6 == '\0' || cVar9 == '\0')) {
          cVar4 = (*(code *)PTR__objc_msgSend_100012170)(lVar20,"hasPrefix:",lVar16);
          pcVar22 = &cf_NotCompatible;
          if (cVar4 != '\0') {
            pcVar22 = &cf_FullyCompatible;
          }
        }
      }
    }
    cVar4 = _DLShouldLog(6);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getCompatibleSourcesForRestore",6,&cf_Backuptypeis_______vs______,pcVar22,lVar20,
              lVar16,uVar18);
    }
    uVar10 = FUN_100008a9f(pcVar21);
    uVar11 = FUN_100008a9f(pcVar22);
    if (uVar11 <= uVar10) {
      pcVar21 = pcVar22;
    }
    cVar4 = _DLShouldLog(5);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getCompatibleSourcesForRestore",5,&cf_Backupis_______,pcVar21,uVar18);
    }
    pcVar1 = (code *)PTR__objc_msgSend_100012170;
    (*(code *)PTR__objc_msgSend_100012170)
              (lVar17,"setObject:forKey:",pcVar21,&cf_RestoreCompatibility);
    cVar4 = (*pcVar1)(pcVar21,"isEqualToString:",&cf_NotCompatible);
    cVar5 = (*pcVar1)(pcVar21,"isEqualToString:",&cf_ApplicationDataOnlyCompatible);
    if ((cVar4 == '\0') && ((cVar5 == '\0' || (cVar3 != '\0')))) {
      (*pcVar1)(uVar14,"addObject:",lVar17);
    }
    lVar17 = (*pcVar1)(uVar12,"nextObject");
  }
  IVar13 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  NSDictionary::initWithObjectsAndKeys_
            (IVar13,"initWithObjectsAndKeys:",uVar14,&cf_AMSSourcesForRestoreKey,0);
  return;
}

