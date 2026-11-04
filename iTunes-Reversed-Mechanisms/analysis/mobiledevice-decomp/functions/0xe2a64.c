// rea decompile_all
// name: __AMRestoreGetMinimumSystemPartitionSize
// address: 0xe2a64
// body: available
// range: 0xe2a64-0xe2d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestoreGetMinimumSystemPartitionSize
              (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  *param_3 = 0x9c4;
  *param_4 = 0;
  lVar3 = _CFDictionaryGetValue(param_2,&cf_SystemImage);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = _CFDictionaryGetValue(lVar3,&cf_ImageFile);
  if (lVar3 == 0) {
    lVar3 = 0;
    lVar8 = 0;
    iVar2 = 0;
    lVar6 = 0;
    goto LAB_000e2b6c;
  }
  local_60 = param_4;
  local_58 = param_3;
  local_40 = lVar3;
  local_38 = param_1;
  uVar4 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar5 = _CFStringCreateWithFormat(uVar9,0,&cf____cRestore_plist,uVar4,0x2f);
  iVar2 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar5,&local_48);
  if (iVar2 == 0) {
    local_50 = uVar9;
    lVar6 = _CFDictionaryGetValue(local_48,&cf_MinimumSystemPartition);
    lVar3 = local_40;
    if (lVar6 == 0) {
      local_40 = lVar6;
      uVar9 = _CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
      iVar2 = 0;
      lVar6 = _AMRestoreCopyBuildManifestInfo(uVar4,local_38,uVar9,0);
      local_38 = 0;
      lVar8 = 0;
      lVar3 = 0;
      if (lVar6 != 0) {
        lVar3 = _CFDictionaryGetValue(lVar6,&cf_MinimumSystemPartition);
        local_38 = 0;
        lVar8 = 0;
LAB_000e2cf7:
        if (lVar3 != 0) goto LAB_000e2cfc;
LAB_000e2d2b:
        puVar1 = local_58;
        if (local_40 == 0) goto LAB_000e2d68;
        _CFDictionaryApplyFunction(local_40,__findMaxMinimumSize,local_58);
        iVar2 = 0;
        _AMRLog(4,&cf_minimumsizeentrynotfoundfor_____using_d,lVar8,*puVar1);
        lVar3 = lVar6;
      }
    }
    else {
      lVar7 = _CFURLCreateWithFileSystemPath(local_50,local_40,0,0);
      if (lVar7 == 0) {
        local_38 = 0;
        _AMRLogWithFilePath(3,lVar3,&cf_unabletoconvertsystemimagepathtoURL);
        iVar2 = 0x1f;
        goto LAB_000e2b44;
      }
      lVar8 = _CFURLCopyLastPathComponent(lVar7);
      local_40 = lVar6;
      lVar3 = _CFDictionaryGetValue(lVar6,lVar8);
      local_38 = lVar7;
      if (lVar3 == 0) {
        local_68 = 0;
        _AMAuthInstallSupportCreateStringRemovingPrepend(local_50,lVar8,&cf__,&local_68);
        if (local_68 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = _CFDictionaryGetValue(local_40);
          _CFRelease(local_68);
        }
        lVar6 = 0;
        goto LAB_000e2cf7;
      }
      lVar6 = 0;
LAB_000e2cfc:
      lVar7 = _CFGetTypeID(lVar3);
      lVar10 = _CFNumberGetTypeID();
      if (lVar7 != lVar10) goto LAB_000e2d2b;
      _CFNumberGetValue(lVar3,9,local_58);
      *local_60 = 1;
LAB_000e2d68:
      iVar2 = 0;
      lVar3 = lVar6;
    }
  }
  else {
    local_38 = 0;
    _AMRLogWithFilePath(3,lVar5,&cf_unabletoloadRestore_plist__d,iVar2);
LAB_000e2b44:
    lVar8 = 0;
    lVar3 = 0;
  }
  lVar6 = local_38;
  if (lVar5 != 0) {
    _CFRelease(lVar5);
    lVar6 = local_38;
  }
LAB_000e2b6c:
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  return iVar2;
}

