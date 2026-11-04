// rea decompile_all
// name: __resolveBundlePathOptions
// address: 0xf0225
// body: available
// range: 0xf0225-0xf0494 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __resolveBundlePathOptions(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  if (param_1 == 0) {
    pcVar5 = &cf_Cannotresolvebundlepathoptionswithoutdevicereference;
  }
  else {
    if (param_2 != 0) {
      cVar1 = _AMRestoreDeviceIsBootstrapOnly(param_2,param_1 + 0x58);
      cVar2 = _AMRestoreOptionsAreLegacy(param_2);
      if (cVar2 != '\0') {
        lVar4 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
        if (lVar4 != 0) {
          local_58 = 0;
          local_50 = 0;
          local_40 = 0;
          if (param_3 == 0 && param_4 == 0) {
            param_3 = 0;
            param_4 = 0;
            uVar6 = 0;
            uVar7 = 0;
            plVar8 = (long *)0x0;
            plVar9 = (long *)0x0;
          }
          else {
            uVar6 = _CFDictionaryGetValue(param_2,&cf_KernelCacheType);
            uVar7 = _CFDictionaryGetValue(param_2,&cf_BootImageType);
            plVar9 = &local_50;
            plVar8 = &local_58;
          }
          iVar3 = _AMRestoreCreatePathsForBundle
                            (lVar4,param_3,param_4,uVar6,uVar7,plVar8,plVar9,&local_40);
          if (iVar3 == 0) {
            if (local_58 != 0) {
              _CFDictionaryAddValue(param_2,&cf_RestoreKernelCacheFile);
              _CFRelease(local_58);
            }
            if (local_50 != 0) {
              _CFDictionaryAddValue(param_2,&cf_BootImageFile);
              _CFRelease(local_50);
            }
            if (local_40 != 0) {
              _CFDictionaryAddValue(param_2,&cf_FirmwareDirectory);
              _CFRelease(local_40);
            }
          }
        }
        goto LAB_000f02dd;
      }
      uVar6 = *(undefined8 *)(param_1 + 200);
      if (cVar1 == '\0') {
        iVar3 = _AMRAuthInstallCopyFileSystemPathForKey
                          (uVar6,param_2,&cf_RestoreKernelCache,&local_38);
        if (iVar3 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 200);
          goto LAB_000f0335;
        }
LAB_000f034f:
        _CFDictionarySetValue(param_2,&cf_RestoreKernelCacheFile,local_38);
      }
      else {
LAB_000f0335:
        iVar3 = _AMRAuthInstallCopyFileSystemPathForKey(uVar6,param_2,&cf_KernelCache,&local_38);
        if (iVar3 == 0) goto LAB_000f034f;
      }
      pcVar5 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_BootImageTagOverride);
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = &cf_RestoreRamDisk;
      }
      else {
        _AMRLog(5,&cf_Sendingcustomimagetagtomemboot___,pcVar5);
      }
      iVar3 = _AMRAuthInstallCopyFileSystemPathForKey
                        (*(undefined8 *)(param_1 + 200),param_2,pcVar5,&local_48);
      if (iVar3 == 0) {
        _CFDictionarySetValue(param_2,&cf_BootImageFile,local_48);
      }
      goto LAB_000f02dd;
    }
    pcVar5 = &cf_Cannotresolvebundlepathoptionswithoutoptions;
  }
  _AMRLog(3,pcVar5);
LAB_000f02dd:
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  return;
}

