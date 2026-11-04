// rea decompile_all
// name: _resolveSystemRestoreImageOptions
// address: 0x26ba65
// body: available
// range: 0x26ba65-0x26bfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _resolveSystemRestoreImageOptions(__AMRestoreModeDevice*, __CFDictionary*) */

int _resolveSystemRestoreImageOptions(__AMRestoreModeDevice *param_1,__CFDictionary *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy(param_2);
  if (cVar1 == '\0') {
    local_38 = 0;
    local_48 = (cfstringStruct *)0x0;
    lVar4 = _CFDictionaryGetValue(param_2,&cf_InstallRecoveryOS);
    lVar3 = *(long *)PTR__kCFBooleanFalse_00441108;
    if (lVar4 == lVar3) {
      lVar4 = 0;
      iVar2 = 0;
LAB_0026bbe2:
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      iVar2 = _AMRAuthInstallCopyURLForKeyInBundle
                        (*(undefined8 *)(param_1 + 0x150),param_2,&cf_RecoveryOSOS,
                         *(undefined8 *)PTR__kCFBooleanTrue_00441110,&local_38);
      if (iVar2 != 0) {
        _AMRLog(3,&cf__s_FailedtofindURLfor____key,"_resolveRecoveryOSImageOptions",&cf_RecoveryOSOS
               );
LAB_0026bbd4:
        lVar4 = 0;
        goto LAB_0026bbe2;
      }
      iVar2 = 0;
      lVar4 = _CFURLCopyFileSystemPath(local_38,0);
      if (lVar4 == 0) {
        _AMRLog(3,&cf_FailedtoconvertURLintostring);
        goto LAB_0026bbd4;
      }
      iVar2 = _AMRAuthInstallCreateRecoveryEntryURL
                        (*(undefined8 *)(param_1 + 0x150),param_2,&cf_RecoveryOSOS,&local_48);
      if (local_48 == (cfstringStruct *)0x0) {
        pcVar10 = &cf_FailedgetrecoveryOriginalOSImageURL_;
LAB_0026becc:
        _AMRLog(3,pcVar10);
        goto LAB_0026bbe2;
      }
      lVar6 = _CFURLCopyFileSystemPath(local_48,0);
      if (lVar6 == 0) {
        pcVar10 = &cf_FailedtoconvertoriginalrecoveryOSURLintostring;
        goto LAB_0026becc;
      }
      lVar7 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSUnpack);
      lVar9 = lVar4;
      if (lVar7 == 0) {
LAB_0026bd0b:
        lVar7 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 == 0) {
          iVar2 = 0x12;
LAB_0026bf88:
          lVar7 = 0;
          lVar4 = lVar9;
        }
        else {
          _CFDictionarySetValue(lVar7,&cf_RecoveryOSImageOriginalPath,lVar6);
          _CFDictionarySetValue(lVar7,&cf_ImageFile,lVar9);
          _CFDictionarySetValue(param_2,&cf_RecoveryOSImage,lVar7);
          lVar4 = lVar9;
        }
      }
      else {
        cVar1 = _CFBooleanGetValue(lVar7);
        if (cVar1 != '\0') goto LAB_0026bd0b;
        lVar7 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSOverlayRootsToInstall);
        if (lVar7 == 0) goto LAB_0026bd0b;
        lVar8 = _CFArrayGetCount(lVar7);
        if (lVar8 < 1) goto LAB_0026bd0b;
        lVar9 = _CFDictionaryGetValue(param_2,&cf_PersonalizedRecoveryOSBundlePath);
        if (lVar9 != 0) {
          lVar9 = _AMRestoreInsertRootsToDmgAndCreatePath(lVar4,lVar7,lVar9,0);
          _CFRelease(lVar4);
          if (lVar9 != 0) goto LAB_0026bd0b;
          lVar9 = 0;
          _AMRLog(3,&cf_failedcreatingmodifieddmgwhichcontaintheneededroots_);
          iVar2 = 0x1b;
          goto LAB_0026bf88;
        }
        lVar7 = 0;
        _AMRLog(3,&cf_failedtogetrecoveryosPersonlizedpath);
      }
    }
    if (local_38 != 0) {
      _CFRelease();
    }
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
    if (local_48 != (cfstringStruct *)0x0) {
      _CFRelease();
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (iVar2 == 0) {
      lVar4 = _CFDictionaryGetValue(param_2,&cf_ShouldRestoreSystemImage);
      if (lVar4 != 0 && lVar4 == lVar3) goto LAB_0026bc6a;
      iVar2 = _AMRAuthInstallCopyURLForKey
                        (*(undefined8 *)(param_1 + 0x150),param_2,&cf_OS,&local_40);
      if (iVar2 == 0) {
        iVar2 = 0;
        lVar3 = _CFURLCopyFileSystemPath(local_40,0);
        if (lVar3 == 0) {
          _AMRLog(3,&cf_FailedtoconvertURLintostring);
          goto LAB_0026bdd6;
        }
        lVar4 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar4 != 0) {
          _CFDictionarySetValue(lVar4,&cf_ImageFile,lVar3);
          _CFDictionarySetValue(param_2,&cf_SystemImage,lVar4);
          cVar1 = _CFStringHasSuffix(lVar3,&cf__dmg_aea);
          if (cVar1 == '\0') {
            pcVar10 = &cf_DiskImage;
          }
          else {
            pcVar10 = &cf_AEAWrappedDiskImage;
          }
          _CFDictionarySetValue(param_2,&cf_SystemImageFormat,pcVar10);
          iVar2 = 0;
          goto LAB_0026bddc;
        }
        iVar2 = 0x12;
      }
      else {
        lVar3 = 0;
        _AMRLog(3,&cf__s_FailedtofindURLfor____key,"_resolveSystemRestoreImageOptions",&cf_OS);
      }
    }
    else {
      lVar3 = 0;
      _AMRLog(3,&cf__resolveRecoveryOSImageOptionsfailed);
    }
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
LAB_0026bc6a:
      iVar2 = 0;
    }
    else {
      lVar4 = _CFDictionaryGetValue(param_2,&cf_SystemImageType);
      if (lVar4 == 0) goto LAB_0026bc6a;
      uVar5 = __AMRestoreCopyTargetForBoardConfig(*(undefined8 *)(param_1 + 0x108));
      local_38 = _AMRestoreCopySystemRestoreImagePath(lVar3,lVar4,uVar5);
      if (local_38 == 0) {
        iVar2 = 0;
        _AMRLog(4,&cf_nosystemimagepathfor____,lVar4,uVar5);
      }
      else {
        local_48 = &cf_ImageFile;
        lVar3 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_48,
                                    &local_38,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar3 == 0) {
          iVar2 = 0x12;
        }
        else {
          _CFDictionaryAddValue(param_2,&cf_SystemImage,lVar3);
          _CFRelease(lVar3);
          iVar2 = 0;
        }
        _CFRelease(local_38);
      }
      _CFRelease(uVar5);
    }
LAB_0026bdd6:
    lVar3 = 0;
  }
  lVar4 = 0;
LAB_0026bddc:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return iVar2;
}

