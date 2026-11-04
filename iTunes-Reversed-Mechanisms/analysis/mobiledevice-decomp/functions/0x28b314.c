// rea decompile_all
// name: _AMAuthInstallBundleCopyURLForKey
// address: 0x28b314
// body: available
// range: 0x28b314-0x28b73c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallBundleCopyURLForKey
                (long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_80;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  ulong local_40;
  char local_31;
  
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_31 = '\0';
  uStack_80 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    lVar7 = 0;
    lVar6 = 0;
    lVar9 = 0;
    lVar5 = 0;
    uVar8 = 0;
    uVar3 = 0;
    if (param_5 == (undefined8 *)0x0) goto LAB_0028b50d;
    local_50 = param_4;
    local_48 = param_3;
    uVar3 = __AMAuthInstallIsRecoveryVariant(param_1,param_3);
    uStack_80 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,local_50,&local_70);
    if ((int)uStack_80 == 0) {
      cVar1 = _CFBooleanGetValue(uVar3);
      uVar3 = _CFGetAllocator(param_1);
      if (cVar1 == '\0') {
        uVar3 = _CFStringCreateCopy(uVar3,param_2);
      }
      else {
        uVar3 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar3,param_2);
      }
      uVar4 = _CFGetAllocator(param_1);
      local_40 = _CFStringCreateWithFormat(uVar4,0,&cf__________,&cf_Manifest,uVar3,&cf_Info);
      uStack_80 = 2;
      if (local_40 == 0) {
        uVar8 = 0;
        lVar7 = 0;
LAB_0028b6a2:
        lVar6 = 0;
        lVar9 = 0;
        lVar5 = 0;
        goto LAB_0028b50d;
      }
      local_58 = uVar3;
      uVar3 = _CFGetAllocator(param_1);
      lVar7 = _CFStringCreateMutableCopy(uVar3,0,local_40);
      if (lVar7 == 0) {
        lVar7 = 0;
        lVar6 = 0;
        lVar9 = 0;
        uStack_80 = 2;
        lVar5 = 0;
        uVar8 = local_40;
        uVar3 = local_58;
        goto LAB_0028b50d;
      }
      _CFStringAppend(lVar7,&cf_PersonalizedPath);
      uVar3 = _CFGetAllocator(param_1);
      lVar5 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar3,local_70,lVar7);
      if (lVar5 != 0) {
        local_48 = 0;
        lVar9 = 0;
        uVar3 = local_58;
LAB_0028b48f:
        uVar4 = _CFGetAllocator(param_1);
        lVar6 = _CFURLCreateCopyAppendingPathComponent(uVar4,local_50,lVar5,0);
        lVar5 = local_48;
        if (lVar6 != 0) {
          uVar4 = _CFRetain(lVar6);
          *param_5 = uVar4;
          uStack_80 = 0;
          lVar5 = local_48;
          uVar8 = local_40;
          goto LAB_0028b50d;
        }
        goto LAB_0028b72f;
      }
      lVar5 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),param_2);
      uVar3 = local_58;
      if (lVar5 != 0) {
        uVar3 = _CFRetain(lVar5);
        *param_5 = uVar3;
        uStack_80 = 0;
        lVar6 = 0;
        lVar9 = 0;
        lVar5 = 0;
        uVar8 = local_40;
        uVar3 = local_58;
        goto LAB_0028b50d;
      }
      uVar2 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,local_50,local_48,&local_68);
      uVar8 = local_40;
      if (uVar2 != 0) {
        uStack_80 = (ulong)uVar2;
        _AMAuthInstallLog(3,"AMAuthInstallBundleCopyURLForKey","failed to copy variant");
        goto LAB_0028b6a2;
      }
      uVar4 = _CFGetAllocator(param_1);
      lVar5 = _CFStringCreateMutableCopy(uVar4,0,uVar8);
      if (lVar5 == 0) {
        lVar9 = 0;
        lVar5 = 0;
LAB_0028b72f:
        uStack_80 = 2;
        lVar6 = 0;
        uVar8 = local_40;
      }
      else {
        _CFStringAppend(lVar5,&cf_Path);
        uVar4 = _CFGetAllocator(param_1);
        local_48 = lVar5;
        lVar5 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar4,local_68,lVar5);
        if (lVar5 == 0) {
          uStack_80 = 8;
        }
        else {
          uVar4 = _CFGetAllocator(param_1);
          uVar2 = _AMAuthInstallSupportCreatePrependedFilePath(uVar4,uVar3,lVar5,&local_60);
          if (uVar2 == 0) {
            uVar4 = _CFGetAllocator(param_1);
            lVar9 = _CFURLCreateCopyAppendingPathComponent(uVar4,local_50,local_60,0);
            if (lVar9 != 0) {
              uStack_80 = _AMAuthInstallSupportFileURLExists(lVar9,&local_31);
              if ((int)uStack_80 != 0) {
                lVar6 = 0;
                lVar5 = local_48;
                uVar8 = local_40;
                goto LAB_0028b50d;
              }
              if (local_31 != '\0') {
                lVar5 = local_60;
              }
              goto LAB_0028b48f;
            }
            lVar9 = 0;
            lVar5 = local_48;
            goto LAB_0028b72f;
          }
          uStack_80 = (ulong)uVar2;
          _AMAuthInstallLog(3,"AMAuthInstallBundleCopyURLForKey",
                            "failed to prepend entry name to path");
        }
        lVar6 = 0;
        lVar9 = 0;
        lVar5 = local_48;
        uVar8 = local_40;
      }
      goto LAB_0028b50d;
    }
    _AMAuthInstallLog(3,"AMAuthInstallBundleCopyURLForKey","failed to create receipt dict");
  }
  lVar7 = 0;
  lVar6 = 0;
  lVar9 = 0;
  uVar3 = 0;
  lVar5 = 0;
  uVar8 = 0;
LAB_0028b50d:
  local_50 = lVar9;
  local_40 = uStack_80;
  _SafeRelease(local_60);
  _SafeRelease(local_70);
  _SafeRelease(uVar3);
  _SafeRelease(uVar8);
  _SafeRelease(lVar7);
  _SafeRelease(lVar5);
  _SafeRelease(local_68);
  _SafeRelease(lVar6);
  _SafeRelease(local_50);
  return local_40;
}

