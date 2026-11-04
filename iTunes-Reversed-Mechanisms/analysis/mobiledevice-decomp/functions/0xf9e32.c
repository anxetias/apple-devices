// rea decompile_all
// name: _AMRAuthInstallCreateOptionsForBootstrapDevice
// address: 0xf9e32
// body: available
// range: 0xf9e32-0xfa4e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfa4e0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallCreateOptionsForBootstrapDevice
              (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98 [3];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_98[0] = 0;
  local_b8 = 0;
  if (param_1 == 0) {
    _AMRLog(3,&cf_bundlePathisNULL);
    iVar1 = 1;
    goto LAB_000fa08f;
  }
  local_a8 = 0;
  if (param_9 == (undefined8 *)0x0) {
    _AMRLog(3,&cf_outOptionsisNULL);
    iVar1 = 1;
LAB_000fa00a:
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _AMAuthInstallCreate(uVar5);
    if (lVar2 == 0) {
      _AMRLog(3,&cf_AMAuthInstallCreatefailed);
      iVar1 = 0x12;
      goto LAB_000fa00a;
    }
    local_b0 = lVar2;
    local_a0 = _CFURLCreateWithFileSystemPath(uVar5,param_1,0,0);
    if (local_a0 == 0) {
      pcVar6 = &cf_buildManifestURLallocationfailed;
LAB_000fa01f:
      _AMRLog(3,pcVar6);
      iVar1 = 0x12;
      lVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar2 = _CFDictionaryCreateMutable
                        (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar2 == 0) {
        pcVar6 = &cf_apOptionsallocationfailed;
        goto LAB_000fa01f;
      }
      _AMAuthInstallSupportDictionarySetInteger64(lVar2,&cf_ECID,0);
      _AMAuthInstallSupportDictionarySetInteger32(lVar2,&cf_ApChipID,param_3);
      _AMAuthInstallSupportDictionarySetInteger32(lVar2,&cf_ApBoardID,param_4);
      _AMAuthInstallSupportDictionarySetInteger32(lVar2,&cf_ApSecurityDomain,1);
      _AMAuthInstallSupportDictionarySetBoolean(lVar2,&cf_ApProductionMode,1);
      lVar3 = local_b0;
      iVar1 = _AMAuthInstallApSetParameters(local_b0,lVar2);
      if (iVar1 == 0) {
        local_98[1] = lVar2;
        iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant(lVar3,local_a0,param_2,local_98);
        if (iVar1 == 0) {
          if (local_98[0] == 0) {
            pcVar6 = &cf_AMAuthInstallBundleCopyBuildIdentityForVariantreturnedNULL;
            lVar3 = 0;
LAB_000fa1d4:
            _AMRLog(3,pcVar6);
            iVar1 = 0x12;
            lVar2 = local_98[1];
          }
          else {
            lVar3 = _CFDictionaryCreateMutable
                              (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            lVar2 = local_98[1];
            if (lVar3 == 0) {
              lVar3 = 0;
              _AMRLog(3,&cf_optionsallocationfailed);
              iVar1 = 0x12;
            }
            else {
              _CFDictionarySetValue
                        (lVar3,&cf_ApBootstrapOnly,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
              _CFDictionarySetValue(lVar3,&cf_RestoreBundlePath,param_1);
              if (param_5 != 0) {
                _CFDictionarySetValue(lVar3,&cf_RestoreBootArgs);
              }
              iVar1 = _AMRestoreCreatePathsForBundle(param_1,0,0,0,0,0,0,&local_b8);
              if (iVar1 != 0) {
                pcVar6 = &cf_failedtocreatepathtofirmwaredirectory_err__d_;
                goto LAB_000fa0ec;
              }
              if (local_b8 == 0) {
                pcVar6 = &cf_firmwarePathisNULL;
                goto LAB_000fa1d4;
              }
              _CFDictionarySetValue(lVar3,&cf_FirmwareDirectory);
              lVar4 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                (uVar5,local_98[0],&cf_Info_VariantContents_DFU);
              lVar2 = local_98[1];
              if (lVar4 == 0) {
                pcVar6 = &cf_DFUtypenotfoundinBuildManifest_plist;
              }
              else {
                lVar4 = _AMRestoreGetTransformedDFUType(lVar4);
                if (lVar4 == 0) {
                  pcVar6 = &cf_DFUtypefailedtotransform;
                }
                else {
                  _CFDictionarySetValue(lVar3,&cf_DFUFileType,lVar4);
                  lVar4 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                    (uVar5,local_98[0],&cf_Info_VariantContents_RestoreKernelCache);
                  if (lVar4 == 0) {
                    pcVar6 = &cf_RestoreKernelCachetypenotfoundinBuildManifest_plist;
                  }
                  else {
                    _CFDictionarySetValue(lVar3,&cf_KernelCacheType,lVar4);
                    lVar4 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                      (uVar5,local_98[0],&cf_Info_VariantContents_Firmware);
                    if (lVar4 == 0) {
                      pcVar6 = &cf_FirmwaretypenotfoundinBuildManifest_plist;
                    }
                    else {
                      lVar4 = _AMRestoreGetTransformedFirmwareTypeValue(lVar4);
                      if (lVar4 != 0) {
                        _CFDictionarySetValue(lVar3,&cf_NORImageType,lVar4);
                        local_98[2] = param_7;
                        local_80 = &cf_RestoreRamDisk;
                        local_78 = &cf_BootImageFile;
                        local_70 = param_8;
                        local_68 = &cf_RestoreKernelCache;
                        local_60 = &cf_RestoreKernelCacheFile;
                        local_58 = param_6;
                        local_50 = &cf_RestoreDeviceTree;
                        local_48 = &cf_DeviceTreeFile;
                        lVar2 = 0x10;
                        do {
                          if (*(long *)((long)local_98 + lVar2) == 0) {
                            uVar5 = *(undefined8 *)((long)local_98 + lVar2 + 8);
                            lVar4 = _CFStringCompare(uVar5,&cf_RestoreRamDisk,0);
                            if ((lVar4 == 0) &&
                               (lVar4 = _CFDictionaryGetValue(lVar3,&cf_BootImageTagOverride),
                               lVar4 != 0)) {
                              _AMRLog(5,&cf_Sendingcustomimagetagtomemboot___,lVar4);
                            }
                            iVar1 = _AMAuthInstallBundleCopyURLForKey
                                              (local_b0,uVar5,param_2,local_a0,&local_a8);
                            if (iVar1 != 0) {
                              _AMRLog(3,&cf_CouldnotdetermineURLforkey__inbundle__,uVar5,local_a0);
                              goto LAB_000fa0fc;
                            }
                            lVar4 = _CFURLCopyFileSystemPath(local_a8,0);
                            _CFRelease(local_a8);
                            if (lVar4 == 0) {
                              _AMRLog(3,&cf_CouldnotconvertURL__topath,local_a8);
                              iVar1 = 0x1f;
                              lVar2 = local_98[1];
                              goto LAB_000fa036;
                            }
                            _CFDictionarySetValue
                                      (lVar3,*(undefined8 *)((long)local_98 + lVar2 + 0x10),lVar4);
                            _CFRelease(lVar4);
                          }
                          else {
                            _CFDictionarySetValue
                                      (lVar3,*(undefined8 *)((long)local_98 + lVar2 + 0x10));
                          }
                          lVar2 = lVar2 + 0x18;
                        } while (lVar2 != 0x58);
                        uVar5 = _CFRetain(lVar3);
                        *param_9 = uVar5;
                        iVar1 = 0;
                        lVar2 = local_98[1];
                        goto LAB_000fa036;
                      }
                      pcVar6 = &cf_Firmwaretypefailedtotransform;
                    }
                  }
                }
              }
              _AMRLog(3,pcVar6);
              iVar1 = 0xbba;
            }
          }
        }
        else {
          pcVar6 = &cf_AMAuthInstallBundleCopyBuildIdentityForVariantfailed_err__d_;
          lVar3 = 0;
LAB_000fa0ec:
          _AMRLog(3,pcVar6,iVar1);
LAB_000fa0fc:
          iVar1 = _AMAuthInstallToRestoreError(iVar1);
          lVar2 = local_98[1];
        }
      }
      else {
        lVar3 = 0;
        _AMRLog(3,&cf_FailedtosetAPparameters);
      }
    }
LAB_000fa036:
    _CFRelease(local_b0);
    if (local_98[0] != 0) {
      _CFRelease();
    }
    if (local_a0 != 0) {
      _CFRelease();
    }
  }
  if (local_b8 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
LAB_000fa08f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

