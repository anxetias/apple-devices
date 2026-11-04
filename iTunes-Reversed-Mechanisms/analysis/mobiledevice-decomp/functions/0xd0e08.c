// rea decompile_all
// name: _checkAndAdjustSystemPartitionSize
// address: 0xd0e08
// body: available
// range: 0xd0e08-0xd10f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _checkAndAdjustSystemPartitionSize(__CFString const*, __AMRestoreModeDevice*, __CFDictionary*) */

int _checkAndAdjustSystemPartitionSize
              (__CFString *param_1,__AMRestoreModeDevice *param_2,__CFDictionary *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3d;
  int local_3c;
  int local_38;
  char local_31;
  
  lVar3 = _CFDictionaryGetValue(param_2,&cf_CreateFilesystemPartitions);
  if (lVar3 == 0) {
    bVar8 = true;
  }
  else {
    cVar1 = _CFBooleanGetValue(lVar3);
    bVar8 = cVar1 == '\x01';
  }
  local_3c = 0;
  local_38 = 0;
  local_31 = '\0';
  lVar3 = _CFDictionaryGetValue(param_2,&cf_InstallRecoveryOS);
  if ((lVar3 == 0) || (cVar1 = _CFBooleanGetValue(lVar3), cVar1 != '\0')) {
    local_48 = 0;
    local_44 = 0;
    local_3d = 0;
    iVar2 = __AMRestoreGetRecoveryOSPartitionSize(param_1,param_2);
    if (iVar2 != 0) {
      pcVar6 = &cf_failedongetingMinimumRecoveryOSPartitionSize_;
      uVar7 = 6;
      goto LAB_000d0ead;
    }
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFNumberCreate(uVar7,9,&local_48);
    lVar4 = _CFNumberCreate(uVar7,9,&local_44);
    if (lVar3 == 0 || lVar4 == 0) {
      pcVar6 = &cf_unabletocreateCFNumberforrecoveryOSpartitionsize;
      goto LAB_000d0f7d;
    }
    _AMRLog(7,&cf_willensureaminimum_dMiBrecoveryOSpartition_andmaximum_d,local_48,local_44);
    _CFDictionarySetValue(param_2,&cf_recoveryOSPartitionSize,lVar3);
    _CFDictionarySetValue(param_2,&cf_recoveryOSMaxPartitionSize,lVar4);
    _CFRelease(lVar3);
    _CFRelease(lVar4);
  }
  local_3c = -1;
  lVar3 = _CFDictionaryGetValue(param_2,&cf_SystemPartitionSize);
  if (lVar3 == 0) {
    if (bVar8) {
      return 0;
    }
  }
  else {
    _CFNumberGetValue(lVar3,9,&local_3c);
  }
  iVar2 = __AMRestoreGetMinimumSystemPartitionSize(param_1,param_2,&local_38,&local_31);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar6 = &cf_Disablingsystempartitionpadding_shrinkingsincepartitionsizewasuserspecified;
  puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
  if (local_3c == 0) {
    pcVar6 = &cf_Enablingsystempartitionpadding_shrinkingsincepartitionsizeisdefault;
    puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
  }
  uVar7 = *puVar5;
  _CFDictionarySetValue(param_2,&cf_AddSystemPartitionPadding,uVar7);
  _CFDictionarySetValue(param_2,&cf_FitSystemPartitionToContent,uVar7);
  _AMRLog(6,pcVar6);
  if (local_3c == 0) {
    lVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9,&local_38);
    if (lVar3 != 0) {
      _AMRLog(7,&cf_willneedtocreatea_dMiBsystempartition,local_38);
      _CFDictionarySetValue(param_2,&cf_SystemPartitionSize,lVar3);
      _CFRelease(lVar3);
      return 0;
    }
    pcVar6 = &cf_unabletocreateCFNumberforsystempartitionsize;
LAB_000d0f7d:
    _AMRLog(3,pcVar6);
    return 0x12;
  }
  if (local_3c < local_38) {
    iVar2 = 0;
    _AMRLog(4,&cf_newsystempartitionsize__d_islessthanminimum__d_);
    if (local_31 != '\0') {
      _AMRLog(3,&cf_strictminimum_imagerequiresalargersystempartition);
      return 0x27;
    }
    pcVar6 = &cf_minimumisnotstrict_allowingrestore;
    uVar7 = 4;
  }
  else {
    pcVar6 = &cf_requestedpartitionsizeislargeenoughforsystemimage;
    iVar2 = 0;
    uVar7 = 7;
  }
LAB_000d0ead:
  _AMRLog(uVar7,pcVar6);
  return iVar2;
}

