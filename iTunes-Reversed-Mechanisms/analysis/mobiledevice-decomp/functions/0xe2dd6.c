// rea decompile_all
// name: __AMRestoreGetRecoveryOSPartitionSize
// address: 0xe2dd6
// body: available
// range: 0xe2dd6-0xe3b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe3b4b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestoreGetRecoveryOSPartitionSize
          (long param_1,long param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  double dVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  ulong local_588 [19];
  long local_4f0;
  undefined1 *local_4e8;
  long local_4e0;
  cfstringStruct *local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  uint local_4ac;
  long local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  undefined8 local_488;
  ulong local_480;
  long local_478;
  int *local_470;
  long local_468;
  long local_460;
  int *local_458;
  long local_450;
  ulong local_448;
  int *local_440;
  ulong local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *param_3 = 0x28a;
  if (param_4 != (int *)0x0) {
    *param_4 = 0x28a;
  }
  *param_5 = 0;
  lVar8 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSBundlePath);
  if (lVar8 == 0) {
    _AMRLog(4,&
              cf_unabletofindkAMRestoreOptionsRecoveryOSBundlePathinrestoreoptionsusingminimumsizeof_d
            ,*param_3);
    goto LAB_000e3455;
  }
  local_4a0 = 0;
  local_480 = 0;
  local_4f0 = 0;
  local_4e8 = param_5;
  local_4c0 = lVar8;
  if (param_1 == 0 || param_2 == 0) {
    lVar10 = 0;
    _AMRLog(3,&cf__createRecoveryMinPartitionSizefailure_gotNULLargument);
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    local_488 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_470 = param_3;
    lVar8 = _CFDictionaryCreateMutableCopy(local_488,0,param_2);
    _AMRestoreOptionsApplyMacOSChangesIfNeeded(lVar8);
    local_450 = lVar8;
    lVar8 = _CFDictionaryGetValue(lVar8,&cf_AuthInstallRecoveryOSVariant);
    if (lVar8 == 0) {
      pcVar13 = &cf__createRecoveryMinPartitionSizefailure_norecoveryvariantinrestoreoptions_;
    }
    else {
      lVar9 = _CFStringCompare(lVar8,&cf_RecoveryInternalInstall,0);
      pcVar13 = &cf_LeavingRecoveryOScontainersizeasdefault;
      if (lVar9 == 0) {
        pcVar13 = &cf_InternalRecoveryOSinstalldetected_BumpingminimumrecoveryOScontainersize_;
      }
      local_4ac = 0x96;
      if (lVar9 == 0) {
        local_4ac = 200;
      }
      _AMRLog(7,pcVar13);
      lVar8 = _AMRestoreCopyBuildManifestInfo(local_4c0,param_1,lVar8,&local_4a0);
      lVar9 = local_4a0;
      if (lVar8 != 0) {
        local_438[0] = 0;
        iVar7 = _AMAuthInstallCreateRecoveryOSBuildIdentityAssetList();
        param_3 = local_470;
        if (iVar7 == 0) {
          local_4b8 = lVar9;
          lVar10 = _CFArrayCreateMutableCopy(local_488,0,local_438[0]);
          lVar9 = local_450;
          if (lVar10 == 0) {
            local_440 = (int *)0x0;
            _AMRLog(3,&cf_failedtocreateentriesToInstallarrayfromtheassetList);
            local_458 = (int *)0x0;
            local_448 = 0;
            lVar10 = 0;
          }
          else {
            local_468 = lVar10;
            iVar7 = _AMAuthInstallBundleAppendRecoveryOSiBootFirmwareEntriesToAssetArray
                              (local_4b8,lVar10);
            if (iVar7 == 0) {
              local_4c8 = _CFDictionaryGetValue(lVar9,&cf_RecoveryOSUnpack);
              local_4d0 = _CFDictionaryGetValue(lVar9);
              if (local_4d0 == 0) {
                pcVar13 = &cf_couldn_tgetbundlePathpath;
                goto LAB_000e304f;
              }
              local_4e0 = _CFArrayGetCount(local_468);
              if (0 < local_4e0) {
                local_4d8 = &cf_OS;
                lVar9 = 0;
                local_448 = 0;
                local_460 = lVar8;
                do {
                  local_498 = lVar9;
                  lVar9 = _CFArrayGetValueAtIndex(local_468);
                  uVar4 = local_488;
                  if (lVar9 == 0) {
                    local_440 = (int *)0x0;
                    _AMRLog(3,&cf_didn_tfindrecoveryOSassetatindex_d,local_498);
                    local_458 = (int *)0x0;
                    lVar10 = local_468;
                    lVar9 = local_450;
                    goto LAB_000e30bb;
                  }
                  local_440 = (int *)_AMAuthInstallICreateTranslationOfRecoveryEnteryName
                                               (local_488,lVar9);
                  if (local_440 == (int *)0x0) {
                    local_440 = (int *)0x0;
                    _AMRLog(3,&cf_couldn_tgetassetupdatednameof___,lVar9);
                    local_458 = (int *)0x0;
                    lVar10 = local_468;
                    lVar9 = local_450;
                    lVar8 = local_460;
                    goto LAB_000e30bb;
                  }
                  local_458 = (int *)_CFStringCreateWithFormat(uVar4,0,&cf____Info_Path,local_440);
                  lVar8 = _CFDictionaryGetValue(local_450,&cf_BundleOverrides);
                  if ((lVar8 == 0) || (lVar8 = _CFDictionaryGetValue(lVar8,lVar9), lVar8 == 0)) {
                    uVar4 = local_488;
                    lVar9 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                      (local_488,local_4b8,local_458);
                    lVar8 = local_460;
                    if (lVar9 != 0) {
                      lVar9 = _CFStringCreateWithFormat(uVar4,0,&cf______,local_4d0,lVar9);
                      if (lVar9 == 0) {
                        pcVar13 = &cf_FailedcreatingFullpathtotheentry__;
                        piVar12 = local_440;
                        goto LAB_000e3b38;
                      }
                      goto LAB_000e35e8;
                    }
                    _AMRLog(4,&cf_Couldn_tgetasset_dpath_skipingtonextasset_,local_498);
                    bVar2 = true;
                    local_478 = 0;
                  }
                  else {
                    lVar9 = _AMRestoreCopyFileSystemPathFromString(lVar8);
                    lVar8 = local_460;
                    if (lVar9 == 0) {
                      pcVar13 = &cf_FailedcreatingFullpathtotheoverridekeypath__;
                      piVar12 = local_458;
LAB_000e3b38:
                      _AMRLog(3,pcVar13,piVar12);
                      lVar10 = local_468;
                      lVar9 = local_450;
                      goto LAB_000e30bb;
                    }
LAB_000e35e8:
                    lVar10 = _CFStringCompare(local_4d8,local_440,0);
                    local_478 = lVar9;
                    if (lVar10 == 0) {
                      lVar9 = _CFDictionaryGetValue(lVar8,&cf_OSDiskImageSize);
                      lVar10 = _CFDictionaryGetValue(lVar8,&cf_MinimumSystemPartition);
                      if ((local_4c8 == 0) ||
                         (cVar6 = _CFBooleanGetValue(), lVar5 = local_450, cVar6 == '\0')) {
                        local_588[0] = 0;
                        if (lVar9 == 0) {
                          local_588[0] = __AMRestoreGetFileSize(local_478);
                          cVar6 = __AMRestoreGetSystemImageFormatIsAppleEncryptedArchive(local_450);
                          lVar8 = local_460;
                          param_3 = local_470;
                          uVar11 = local_588[0];
                          if (cVar6 != '\0') {
                            if (lVar10 == 0) {
                              _AMRLog(6,&
                                        cf__s_AddingadditionalpaddingforAEA_wrappedrecoveryOSimageofsize__llu
                                      ,"_getRecoveryOSAssetFilesSize",local_588[0]);
                              dVar1 = ((double)CONCAT44(0x43300000,(int)local_588[0]) -
                                      4503599627370496.0) +
                                      ((double)CONCAT44(0x45300000,(int)(local_588[0] >> 0x20)) -
                                      1.9342813113834067e+25);
                              dVar1 = dVar1 + dVar1;
                              uVar11 = (ulong)dVar1;
                              uVar11 = (long)(dVar1 - 9.223372036854776e+18) & (long)uVar11 >> 0x3f
                                       | uVar11;
                              local_588[0] = uVar11;
                            }
                            else {
                              _CFNumberGetValue(lVar10,0xb,local_588);
                              local_588[0] = local_588[0] << 0x14;
                              _AMRLog(6,&
                                        cf__s_UsingMinimumSystemPartitionforAEA_wrappedrecoveryOSimageofsize__llu
                                      ,"_getRecoveryOSAssetFilesSize");
                              uVar11 = local_588[0];
                            }
                          }
                        }
                        else {
                          _CFNumberGetValue(lVar9,0xb,local_588);
                          _AMRLog(6,&cf__s_UsingbuildmanifstforDIsize__llu,
                                  "_getRecoveryOSAssetFilesSize",local_588[0]);
                          uVar11 = local_588[0] << 0x14;
                          lVar8 = local_460;
                          param_3 = local_470;
                        }
                        goto LAB_000e3614;
                      }
                      local_588[0] = 0;
                      local_4a8 = 0;
                      local_490 = 0;
                      if (lVar9 == 0 || lVar10 == 0) {
                        iVar7 = __AMRestoreGetDiskImageFileSize
                                          (local_478,local_450,local_588,&local_490);
                        lVar8 = local_460;
                        param_3 = local_470;
                        if (iVar7 == 0) {
                          cVar6 = __AMRestoreGetSystemImageFormatIsAppleEncryptedArchive(lVar5);
                          param_3 = local_470;
                          if (cVar6 != '\0') {
                            if (lVar10 == 0) {
                              _AMRLog(6,&
                                        cf__s_AddingadditionalpaddingforAEA_wrappedrecoveryOSimageontopof_llu
                                      ,"_getRecoveryOSAssetFilesSize",local_588[0]);
                              dVar1 = ((double)CONCAT44(0x43300000,(int)local_588[0]) -
                                      4503599627370496.0) +
                                      ((double)CONCAT44(0x45300000,(int)(local_588[0] >> 0x20)) -
                                      1.9342813113834067e+25);
                              dVar1 = dVar1 + dVar1;
                              local_588[0] = (ulong)dVar1;
                              local_588[0] = (long)(dVar1 - 9.223372036854776e+18) &
                                             (long)local_588[0] >> 0x3f | local_588[0];
                            }
                            else {
                              _CFNumberGetValue(lVar10,0xb,local_588);
                              local_588[0] = local_588[0] << 0x14;
                              _AMRLog(6,&
                                        cf__s_UsingMinimumSystemPartitionforrecoveryOSimageofsize__llu
                                      ,"_getRecoveryOSAssetFilesSize");
                            }
                          }
                          lVar8 = local_460;
                          if (local_490 == 0) {
                            local_490 = __AMRestoreGetFileSize(local_478);
                            _AMRLog(6,&cf__s_Usingfilesizeof_lluforrecoveryOScompressedsize,
                                    "_getRecoveryOSAssetFilesSize",local_490);
                          }
                          local_448 = local_490 + local_448 + local_588[0];
                        }
                      }
                      else {
                        _CFNumberGetValue(lVar9,0xb,&local_4a8);
                        _CFNumberGetValue(lVar10,0xb,local_588);
                        _AMRLog(6,&cf__s_Usingbuildmanifstforunpackedsize__lluandDIsize__llu,
                                "_getRecoveryOSAssetFilesSize",local_588[0],local_4a8);
                        local_448 = local_448 + (local_4a8 + local_588[0]) * 0x100000;
                        lVar8 = local_460;
                        param_3 = local_470;
                      }
                      local_448 = local_448 + 0xc800000;
                    }
                    else {
                      uVar11 = __AMRestoreGetFileSize(lVar9);
LAB_000e3614:
                      local_448 = local_448 + uVar11;
                    }
                    bVar2 = false;
                  }
                  _CFRelease(local_440);
                  if (local_458 != (int *)0x0) {
                    _CFRelease();
                  }
                  if (!bVar2) {
                    _CFRelease(local_478);
                  }
                  lVar9 = local_498 + 1;
                } while (local_4e0 != lVar9);
                local_448 = local_448 >> 0x14;
                local_440 = (int *)0x0;
                lVar10 = local_468;
                goto LAB_000e2f87;
              }
              local_440 = (int *)0x0;
            }
            else {
              pcVar13 = &cf_unabletoappendibootfirmwareassetstoassetlist;
LAB_000e304f:
              local_440 = (int *)0x0;
              _AMRLog(3,pcVar13);
            }
            local_458 = (int *)0x0;
            local_448 = 0;
            lVar10 = local_468;
          }
        }
        else {
          local_440 = (int *)0x0;
          _AMRLog(3,&cf_unabletocreaterecoveryOSbundleidentityassetlist);
          local_448 = 0;
          lVar10 = 0;
LAB_000e2f87:
          local_458 = (int *)0x0;
          lVar9 = local_450;
        }
LAB_000e30bb:
        if (local_438[0] != 0) {
          _CFRelease();
          param_3 = local_470;
        }
        if (lVar10 != 0) {
          _CFRelease(lVar10);
        }
        if (local_440 != (int *)0x0) {
          _CFRelease();
        }
        local_440 = param_4;
        if (local_458 != (int *)0x0) {
          _CFRelease();
        }
        uVar11 = local_448;
        _AMRLog(6,&cf_Gotminimumsizerequiredfromassetfilessize_lldMB,local_448);
        if (uVar11 == 0) {
          lVar10 = 0;
          _AMRLog(3,&cf_Couldn_tcalculateminimumsizeforrecoveryOS);
          param_4 = local_440;
        }
        else {
          local_480 = uVar11;
          lVar9 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSOverlayRootsToInstall);
          param_4 = local_440;
          local_460 = lVar8;
          if (((lVar9 != 0) && (lVar8 = _CFArrayGetCount(lVar9), param_4 = local_440, 0 < lVar8)) &&
             (lVar8 = _CFArrayGetCount(lVar9), param_4 = local_440, 0 < lVar8)) {
            lVar8 = 0;
            do {
              ___bzero(local_438,0x400);
              local_588[0x10] = 0;
              local_588[0x11] = 0;
              local_588[0xe] = 0;
              local_588[0xf] = 0;
              local_588[0xc] = 0;
              local_588[0xd] = 0;
              local_588[10] = 0;
              local_588[0xb] = 0;
              local_588[8] = 0;
              local_588[9] = 0;
              local_588[6] = 0;
              local_588[7] = 0;
              local_588[4] = 0;
              local_588[5] = 0;
              local_588[2] = 0;
              local_588[3] = 0;
              local_588[0] = 0;
              local_588[1] = 0;
              lVar10 = _CFArrayGetValueAtIndex(lVar9,lVar8);
              if (lVar10 == 0) {
                pcVar13 = &cf_Failedtogettherootoverlaypathforroot_ld_skippingforsizecalculation;
                lVar10 = lVar8;
LAB_000e329b:
                _AMRLog(3,pcVar13,lVar10);
              }
              else {
                cVar6 = _AMRestoreGetFileSystemRepresentation(lVar10,local_438,0x400);
                if (cVar6 == '\0') {
                  pcVar13 = &cf_failedtotranslatetherootpath__toUTF8__skippingforsizecalculation;
                  goto LAB_000e329b;
                }
                _stat_INODE64(local_438,local_588);
                uVar11 = local_588[0xc] + 0xfffff;
                if (-1 < (long)local_588[0xc]) {
                  uVar11 = local_588[0xc];
                }
                local_480 = local_448 + ((long)uVar11 >> 0x14);
                local_448 = local_480;
                _AMRLog(6,&cf_AddingtorecoveryOSpartition_lldtosupportroot___,local_588[0xc],lVar10)
                ;
              }
              lVar8 = lVar8 + 1;
              lVar10 = _CFArrayGetCount(lVar9);
            } while (lVar8 < lVar10);
          }
          uVar14 = (ulong)local_4ac;
          uVar11 = local_448;
          if (local_448 < uVar14) {
            _AMRLog(6,&
                      cf_CalculatedrecoveryOSsize_lldMiBisn_tsufficient_switchingtotheminimumreservedsize_d_
                   );
            uVar11 = uVar14;
            local_480 = uVar14;
          }
          lVar9 = local_450;
          lVar8 = local_460;
          lVar10 = _CFDictionaryGetValue(local_450,&cf_RecoveryOSPartitionCushion);
          if (lVar10 != 0) {
            _CFNumberGetValue(lVar10,4,&local_4f0);
            local_480 = uVar11 + local_4f0;
            _AMRLog(6,&cf_Adding_lluMBtototalsize_RecoveryOSPartitionCushion_);
          }
          lVar10 = _CFNumberCreate(local_488,4,&local_480);
          param_3 = local_470;
        }
        goto LAB_000e338c;
      }
      pcVar13 = &cf__createRecoveryMinPartitionSizefailure_failedgetingdevicebuildManifest_;
    }
    lVar10 = 0;
    _AMRLog(3,pcVar13);
    lVar8 = 0;
    lVar9 = local_450;
    param_3 = local_470;
  }
LAB_000e338c:
  if (local_4a0 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  puVar3 = local_4e8;
  if (lVar10 == 0) {
    _AMRLog(4,&cf_minimumsizeentrynotfoundfor_____using_d,local_4c0,*param_3);
  }
  else {
    local_438[0] = local_438[0] & 0xffffffff00000000;
    _CFNumberGetValue(lVar10,9,local_438);
    if (param_4 != (int *)0x0) {
      *param_3 = (int)((double)(int)local_438[0] * 1.05 + 25.0);
      param_3 = param_4;
    }
    *param_3 = (int)((double)(int)local_438[0] * 1.25 + 25.0);
    *puVar3 = 1;
    _CFRelease(lVar10);
  }
LAB_000e3455:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

