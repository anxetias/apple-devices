// rea decompile_all
// name: _AMSBackupWithOptions
// address: 0xc07e3
// body: available
// range: 0xc07e3-0xc0ae6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int _AMSBackupWithOptions
              (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auVar10 [12];
  long local_58 [2];
  int local_44;
  long local_40;
  undefined8 local_38;
  
  if (param_1 == 0) {
    pcVar8 = "AMSBackup: No device identifier passed in\n";
LAB_000c09d2:
    __AMSDebugLog(pcVar8);
    return 3;
  }
  if (param_2 == 0) {
    pcVar8 = "AMSBackup: No target identifier passed in\n";
    goto LAB_000c09d2;
  }
  if (param_3 == 0) {
    pcVar8 = "AMSBackup: No device info passed in\n";
    goto LAB_000c09d2;
  }
  local_58[0] = 0;
  local_40 = param_6;
  local_38 = param_4;
  _AMSGetBackupPasswordFromKeychainForTarget(param_2,local_58);
  if (local_58[0] != 0) {
    _CFRelease();
  }
  lVar3 = __copyBackupDirPath();
  if (lVar3 == 0) {
    pcVar8 = "AMSBackup: Cant get backup directory root\n";
    goto LAB_000c09d2;
  }
  lVar4 = _CFStringCreateWithFormat(0,0,&cf_______,lVar3,&cf__,param_2);
  _CFRelease(lVar3);
  if (lVar4 == 0) {
    pvVar7 = (void *)__copyCStr(param_2);
    __AMSDebugLog("AMSBackup: Can\'t get backup directory for target %s\n",pvVar7);
    if (pvVar7 == (void *)0x0) {
      return 3;
    }
    _free(pvVar7);
    return 3;
  }
  __ensureDirectoryExists(lVar4);
  iVar2 = __runBackupTool(&cf_AMSBackupRequest,param_1,param_2,0,param_5,0,local_38,local_40);
  if (iVar2 != 0) goto LAB_000c0ada;
  local_40 = lVar4;
  uVar5 = _CFStringCreateWithFormat(0,0,&cf_______,lVar4,&cf__,&cf_Info_plist);
  uVar6 = _CFDictionaryCreateMutableCopy(0,0,param_3);
  _CFAbsoluteTimeGetCurrent();
  local_38 = _CFDateCreate(0);
  _CFDictionarySetValue(uVar6,&cf_LastBackupDate,local_38);
  _CFDictionarySetValue(uVar6,&cf_TargetIdentifier,param_2);
  _CFDictionaryAddValue(uVar6,&cf_TargetType,&cf_Device);
  local_58[1] = 0;
  lVar3 = _CFURLCreateWithFileSystemPath(0,uVar5,0,0);
  lVar4 = _CFWriteStreamCreateWithFile(0,lVar3);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 == 0) {
    pvVar7 = (void *)__copyCStr(uVar5);
    __AMSDebugLog("Could not create a write stream for the file at \'%s\'",pvVar7);
    if (pvVar7 != (void *)0x0) {
      _free(pvVar7);
    }
  }
  else {
    cVar1 = _CFWriteStreamOpen(lVar4);
    if (cVar1 == '\x01') {
      _CFPropertyListWriteToStream(uVar6,lVar4,100,local_58 + 1);
      _CFWriteStreamClose(lVar4);
    }
    else {
      pvVar7 = (void *)__copyCStr(uVar5);
      auVar10 = _CFWriteStreamGetError(lVar4);
      iVar9 = auVar10._8_4_;
      if (auVar10._0_8_ == 2) {
        pcVar8 = "MacOStatus error number %d while writing to the file at \'%s\'";
LAB_000c0a9c:
        __AMSDebugLog(pcVar8,iVar9,pvVar7);
      }
      else {
        if (auVar10._0_8_ != 1) {
          pcVar8 = "Unknown error number %d while writing to the file at \'%s\'";
          goto LAB_000c0a9c;
        }
        local_44 = iVar9;
        pcVar8 = _strerror(iVar9);
        __AMSDebugLog("Error number %d while writing to the file at \'%s\': %s",local_44,pvVar7,
                      pcVar8);
      }
      if (pvVar7 != (void *)0x0) {
        _free(pvVar7);
      }
    }
    _CFRelease(lVar4);
  }
  _CFRelease(local_38);
  _CFRelease(uVar6);
  _CFRelease(uVar5);
  lVar4 = local_40;
LAB_000c0ada:
  _CFRelease(lVar4);
  return iVar2;
}

