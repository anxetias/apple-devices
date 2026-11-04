// rea decompile_all
// name: _AMRestoreCreatePathsForBundle
// address: 0xe3b50
// body: available
// range: 0xe3b50-0xe3e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRestoreCreatePathsForBundle
              (undefined8 param_1,cfstringStruct *param_2,cfstringStruct *param_3,long param_4,
              cfstringStruct *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_60 = 0;
  local_48 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_58 = param_2;
  lVar2 = _CFStringCreateWithFormat(local_48,0,&cf____cRestore_plist,param_1,0x2f);
  if (lVar2 == 0) {
    return 0x12;
  }
  local_40 = param_1;
  iVar1 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar2,&local_60);
  _CFRelease(lVar2);
  lVar2 = local_60;
  if (iVar1 != 0) {
    return iVar1;
  }
  local_38 = local_60;
  if (param_6 != (undefined8 *)0x0) {
    if (param_4 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = _CFDictionaryGetValue(local_60,&cf_KernelCachesByPlatform);
      lVar2 = _CFDictionaryGetValue(lVar2,&cf_KernelCachesByTarget);
      if (lVar2 == 0) {
        if (lVar3 == 0) {
          param_3 = &cf_RestoreKernelCaches;
          lVar2 = local_38;
        }
        else {
          param_3 = local_58;
          lVar2 = lVar3;
          if (local_58 == (cfstringStruct *)0x0) goto LAB_000e3cd6;
        }
LAB_000e3c57:
        lVar2 = _CFDictionaryGetValue(lVar2,param_3);
        if (lVar2 != 0) {
          local_50 = &cf_Release;
          lVar3 = _CFStringCompare(param_4,&cf_Release,0);
          if (lVar3 != 0) {
            uVar4 = 0;
            local_50 = &cf_Development;
            lVar3 = _CFStringCompare(param_4,&cf_Development,0);
            if (lVar3 != 0) goto LAB_000e3cdd;
          }
          lVar2 = _CFDictionaryGetValue(lVar2,local_50);
          if (lVar2 != 0) {
            uVar4 = _CFStringCreateWithFormat(local_48,0,&cf____c__,local_40,0x2f,lVar2);
            goto LAB_000e3cdd;
          }
        }
      }
      else if (param_3 != (cfstringStruct *)0x0) goto LAB_000e3c57;
LAB_000e3cd6:
      uVar4 = 0;
    }
LAB_000e3cdd:
    *param_6 = uVar4;
  }
  lVar2 = local_38;
  if (param_7 == (undefined8 *)0x0) goto LAB_000e3d9e;
  if (param_5 == (cfstringStruct *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetValue(local_38,&cf_RamDisksByPlatform);
    pcVar6 = local_58;
    if (lVar3 == 0) {
      pcVar6 = &cf_RestoreRamDisks;
      lVar3 = lVar2;
    }
    lVar3 = _CFDictionaryGetValue(lVar3,pcVar6);
    if (lVar3 == 0) {
LAB_000e3d5b:
      uVar4 = 0;
    }
    else {
      lVar5 = _CFStringCompare(param_5,&cf_UserOrInternal,0);
      if (lVar5 == 0) {
        lVar5 = _CFDictionaryGetValue(lVar3,&cf_User);
        if (lVar5 == 0) {
          param_5 = &cf_Internal;
          goto LAB_000e3d4b;
        }
      }
      else {
LAB_000e3d4b:
        lVar5 = _CFDictionaryGetValue(lVar3,param_5);
        if (lVar5 == 0) goto LAB_000e3d5b;
      }
      uVar4 = _CFStringCreateWithFormat(local_48,0,&cf____c__,local_40,0x2f,lVar5);
    }
  }
  *param_7 = uVar4;
LAB_000e3d9e:
  if (param_8 != (undefined8 *)0x0) {
    lVar3 = _CFDictionaryGetValue(lVar2,&cf_FirmwareDirectory);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _CFStringCreateWithFormat(local_48,0,&cf____c__,local_40,0x2f,lVar3);
    }
    *param_8 = uVar4;
  }
  _CFRelease(lVar2);
  return 0;
}

