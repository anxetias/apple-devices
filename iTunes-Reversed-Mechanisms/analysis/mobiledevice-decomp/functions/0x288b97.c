// rea decompile_all
// name: _AMAuthInstallBundlePersonalizePartialRecoveryOS
// address: 0x288b97
// body: available
// range: 0x288b97-0x28a453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallBundlePersonalizePartialRecoveryOS
                (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  cfstringStruct *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  byte bVar20;
  void *pvVar21;
  long lVar22;
  bool bVar23;
  long lVar24;
  ulong uStack_170;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  cfstringStruct *local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long local_70;
  long local_68;
  char local_59;
  long local_58;
  long local_50;
  long local_48;
  byte local_39;
  char *local_38;
  
  local_e0 = 0;
  local_110 = 0;
  local_c0 = 0;
  local_108 = 0;
  local_38 = (char *)0x1;
  if (*(long *)(param_1 + 0x10) == 0) {
    local_48 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",
                      "bundle personalization requires AP parameters (even with AP personalization disabled)"
                     );
LAB_0028a18e:
    lVar6 = 0;
    uVar3 = 0;
  }
  else {
    local_48 = 0;
    if (param_2 == 0) goto LAB_0028a18e;
    pvVar21 = (void *)0x0;
    local_78 = 0;
    lVar24 = 0;
    uVar3 = 0;
    lVar6 = 0;
    lVar7 = 0;
    local_f0 = param_2;
    local_50 = param_1;
    if (param_3 == 0) goto LAB_00289f9b;
    __AMAuthInstallBundlePersonalizeApplyPreferencesOverrides(param_1);
    lVar6 = local_f0;
    __AMAuthInstallBundleCreateDebugDirectory(param_1,local_f0);
    uVar3 = _CFGetAllocator(param_1);
    uVar3 = _CFURLCreateCopyAppendingPathComponent(uVar3,lVar6,&cf_RecoveryOS,1);
    pcVar4 = (char *)_AMAuthInstallBundleCopyBuildIdentityForVariant
                               (param_1,param_3,param_4,&local_e0);
    if ((int)pcVar4 == 0) {
      if (local_e0 == 0) {
        pcVar4 = (char *)0xe;
        goto LAB_0028a1a5;
      }
      uVar5 = _CFGetAllocator(param_1);
      lVar6 = _CFDictionaryCreateMutableCopy(uVar5,0,local_e0);
      _SafeRelease(local_e0);
      local_e0 = 0;
      local_38 = (char *)0x2;
      pcVar4 = local_38;
      if (lVar6 == 0) goto LAB_0028a1a5;
      __AMAuthInstallBundleCreateDebugDirectory(param_1,uVar3);
      uVar5 = _CFGetAllocator(param_1);
      local_78 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (local_78 != 0) {
        uVar5 = _CFGetAllocator(param_1);
        if (param_6 == 0) {
          lVar7 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
        }
        else {
          lVar7 = _CFArrayCreateMutableCopy(uVar5,0,param_6);
        }
        lVar24 = local_78;
        if (lVar7 == 0) {
          local_48 = 0;
          pvVar21 = (void *)0x0;
          lVar24 = 0;
          lVar7 = 0;
          goto LAB_00289f9b;
        }
        _CFArrayAppendValue(local_78,&cf_RecoveryOSOS);
        _CFArrayAppendValue(lVar24,&cf_RecoveryOSKernelCache);
        _CFArrayAppendValue(lVar24,&cf_RecoveryOSDeviceTree);
        _CFArrayAppendValue(lVar24,&cf_RecoveryOSiBEC);
        _CFArrayAppendValue(lVar24,&cf_RecoveryOSAppleLogo);
        _CFArrayAppendValue(lVar24,&cf_RecoveryOSStaticTrustCache);
        local_88 = lVar7;
        uVar8 = __AMRAuthInstallBundleAppendFirmwareEntriesToArrays(param_1,lVar6,lVar24,lVar7);
        if ((int)uVar8 == 0) {
          uVar8 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,local_f0,&local_c0);
          if ((int)uVar8 == 0) {
            uVar8 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,uVar3,&local_108);
            if ((int)uVar8 == 0) {
              local_a8 = uVar3;
              _CFDictionarySetValue(local_c0,&cf_RecoveryOS,local_108);
              local_a0 = 0;
              local_70 = 0;
              local_e8 = 0;
              uVar3 = _CFGetAllocator(param_1);
              local_98 = _CFDictionaryCreateMutableCopy(uVar3,0,**(undefined8 **)(param_1 + 0x80));
              local_38 = (char *)0x2;
              local_90 = lVar6;
              if (local_98 == 0) {
LAB_0028a29b:
                lVar11 = 0;
                lVar24 = 0;
                lVar6 = 0;
                uVar8 = 0;
                lVar22 = 0;
                lVar7 = 0;
              }
              else {
                lVar6 = _CFDictionaryGetValue(lVar6,&cf_Manifest);
                if (lVar6 == 0) {
                  local_38 = "\x03";
                  goto LAB_0028a29b;
                }
                uVar3 = _CFGetAllocator(param_1);
                lVar11 = 0;
                local_b0 = lVar6;
                uVar9 = _CFDictionaryCreateMutableCopy(uVar3,0,lVar6);
                lVar24 = 0;
                lVar22 = 0;
                uVar8 = 0;
                lVar6 = 0;
                lVar7 = 0;
                if (uVar9 != 0) {
                  lVar6 = _CFArrayGetCount(local_78);
                  uVar8 = uVar9;
                  if (0 < lVar6) {
                    local_100 = *(long *)PTR__kCFBooleanFalse_00441108;
                    local_c8 = *(long *)PTR__kCFBooleanTrue_00441110;
                    local_d8 = &cf_Digest;
                    local_f8 = &cf_BuildString;
                    lVar7 = 0;
                    lVar6 = local_50;
                    local_80 = uVar9;
                    do {
                      lVar10 = _CFArrayGetValueAtIndex(local_78,lVar7);
                      if (lVar10 == 0) {
                        uStack_170 = 1;
LAB_0028a065:
                        lVar24 = 0;
                        lVar11 = 0;
                        lVar6 = 0;
                        local_38 = (char *)uStack_170;
LAB_0028a0df:
                        lVar22 = 0;
                        lVar7 = 0;
                        goto LAB_0028955a;
                      }
                      lVar24 = _CFStringFind(lVar10,&cf_RecoveryOS,0);
                      local_58 = local_c8;
                      if (lVar24 == -1) {
                        local_58 = local_100;
                      }
                      cVar1 = _CFBooleanGetValue();
                      local_b8 = 0;
                      if (cVar1 != '\0') {
                        uVar3 = _CFGetAllocator(lVar6);
                        lVar24 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar3,lVar10);
                        uVar3 = _CFGetAllocator(lVar6);
                        local_b8 = lVar24;
                        local_38 = (char *)_AMAuthInstallSupportGetValueForKeyPathInDict
                                                     (uVar3,local_b0,lVar24);
                      }
                      if (local_38 != (char *)0x0) {
                        local_d0 = _CFStringCompare(lVar10,&cf_BasebandFirmware,0);
                        uVar3 = _CFGetAllocator(lVar6);
                        local_70 = _CFDictionaryCreateMutableCopy(uVar3,0,local_38);
                        if (local_70 == 0) {
                          uStack_170 = 2;
                          goto LAB_0028a065;
                        }
                        uVar2 = __AMAuthInstallBundleSetObjectPropertyOverrides
                                          (lVar6,lVar10,local_70);
                        if (uVar2 != 0) {
                          lVar11 = 0;
                          _AMAuthInstallLog(3,
                                            "_AMAuthInstallBundleCopyOverrideBuildIdentityRecoveryOS"
                                            ,"failed to set %@ property overrides",lVar10);
                          lVar24 = 0;
                          lVar6 = 0;
                          lVar22 = 0;
                          lVar7 = 0;
                          local_38 = (char *)(ulong)uVar2;
                          goto LAB_0028955a;
                        }
                        uVar3 = _CFGetAllocator(lVar6);
                        local_68 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                             (uVar3,local_38,&cf______,&cf_Info,&cf_Path);
                        local_48 = _CFDictionaryGetValue(local_98,lVar10);
                        if (local_48 != 0) {
                          lVar24 = _CFDictionaryGetValue(local_70,&cf_Info);
                          if (lVar24 == 0) {
                            lVar11 = 0;
                            lVar24 = 0;
                            uStack_170 = 7;
                          }
                          else {
                            uVar3 = _CFGetAllocator(lVar6);
                            lVar24 = _CFDictionaryCreateMutableCopy(uVar3,0,lVar24);
                            if (lVar24 == 0) {
                              lVar24 = 0;
                              uStack_170 = 2;
                            }
                            else {
                              lVar11 = _CFURLCopyLastPathComponent(local_48);
                              lVar6 = local_68;
                              if (lVar11 != 0) {
                                if (local_68 == 0) {
                                  local_a0 = _CFRetain(lVar11);
                                }
                                else {
                                  uVar3 = _CFGetAllocator(local_50);
                                  uStack_170 = _AMAuthInstallSupportCopyStringReplacingLastComponent
                                                         (uVar3,lVar6,&cf__,lVar11,&local_a0);
                                  if ((int)uStack_170 != 0) goto LAB_0028a0d7;
                                }
                                _SafeRelease(lVar11);
                                _CFDictionarySetValue(lVar24,&cf_Path,local_a0);
                                _SafeRelease(local_a0);
                                _CFDictionarySetValue(local_70,&cf_Info,lVar24);
                                _SafeRelease(lVar24);
                                lVar6 = local_50;
                                if (local_d0 != 0) {
                                  uVar3 = _CFGetAllocator(local_50);
                                  uVar3 = _CFDataCreateMutable(uVar3,0);
                                  _CFDictionarySetValue(local_70,local_d8,uVar3);
                                  _CFRelease(uVar3);
                                }
                                local_a0 = 0;
                                _CFDictionaryRemoveValue(local_98,lVar10);
                                goto LAB_002891ac;
                              }
                              uStack_170 = 3;
                            }
                            lVar11 = 0;
                          }
LAB_0028a0d7:
                          lVar6 = 0;
                          uVar8 = local_80;
                          local_38 = (char *)uStack_170;
                          goto LAB_0028a0df;
                        }
LAB_002891ac:
                        if ((*(long *)(lVar6 + 0x80) == 0) ||
                           (*(long *)(*(long *)(lVar6 + 0x80) + 8) == 0)) {
LAB_00289210:
                          lVar6 = 0;
                        }
                        else {
                          cVar1 = _CFBooleanGetValue(local_58);
                          if (cVar1 == '\0') {
                            uVar3 = _CFGetAllocator(lVar6);
                            lVar24 = *(long *)(*(long *)(lVar6 + 0x80) + 8);
                            lVar6 = lVar10;
                          }
                          else {
                            lVar24 = _CFDictionaryGetValue
                                               (*(undefined8 *)(*(long *)(lVar6 + 0x80) + 8),
                                                &cf_RecoveryOSOS);
                            if (lVar24 == 0) goto LAB_00289210;
                            uVar3 = _CFGetAllocator(lVar6);
                            lVar6 = local_b8;
                          }
                          lVar6 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                            (uVar3,lVar24,&cf_________,&cf_Manifest,lVar6,local_d8);
                        }
                        cVar1 = _CFBooleanGetValue(local_58);
                        pcVar16 = &cf_RecoveryOSOS;
                        if (cVar1 == '\0') {
                          pcVar16 = &cf_OS;
                        }
                        bVar23 = false;
                        lVar24 = _CFStringCompare(pcVar16,lVar10,0);
                        uVar8 = local_80;
                        if (lVar6 == 0) {
                          bVar23 = (lVar24 != 0 || local_48 != 0) &&
                                   *(char *)(local_50 + 0x1b2) == '\0';
                        }
                        if ((local_48 != 0) || (bVar23)) {
                          if (local_48 == 0) {
                            if ((local_68 == 0) ||
                               (cVar1 = _CFBooleanGetValue(local_58), lVar6 = local_68,
                               cVar1 == '\0')) goto LAB_00289455;
                            uVar3 = _CFGetAllocator(local_50);
                            lVar6 = _CFURLCreateCopyAppendingPathComponent(uVar3,param_3,lVar6,0);
LAB_00289449:
                            if (lVar6 == 0) goto LAB_00289455;
                          }
                          else {
                            cVar1 = _AMAuthInstallApIsImg4(local_50);
                            if ((local_d0 == 0) || (cVar1 != '\0')) {
LAB_00289440:
                              lVar6 = _CFRetain(local_48);
                              goto LAB_00289449;
                            }
                            local_59 = '\0';
                            cVar1 = __AMAuthInstallBundleImageHasBuildString(lVar10);
                            lVar24 = local_50;
                            if (cVar1 != '\0') {
                              uVar3 = _CFGetAllocator(local_50);
                              uVar2 = _AMAuthInstallApImg3CopyBuildString(uVar3,local_48,&local_e8);
                              if (uVar2 == 0) {
                                _CFDictionarySetValue(local_70,local_f8,local_e8);
                                _SafeRelease(local_e8);
                                local_e8 = 0;
                                goto LAB_00289338;
                              }
                              pcVar4 = "failed to copy image build string %@";
LAB_0028a147:
                              local_48 = 0;
                              _AMAuthInstallLog(3,
                                                "_AMAuthInstallBundleCopyOverrideBuildIdentityRecoveryOS"
                                                ,pcVar4,lVar10);
                              lVar22 = 0;
                              local_68 = 0;
LAB_0028a167:
                              local_38 = (char *)(ulong)uVar2;
LAB_0028a36e:
                              lVar11 = 0;
                              lVar24 = 0;
                              uVar8 = local_80;
                              lVar6 = local_48;
                              lVar7 = local_68;
                              goto LAB_0028955a;
                            }
LAB_00289338:
                            uVar3 = _CFGetAllocator(lVar24);
                            uVar2 = _AMAuthInstallApImg3IsFinalized(uVar3,local_48,&local_59);
                            if (uVar2 != 0) {
                              pcVar4 = "failed to check %@ alignment";
                              goto LAB_0028a147;
                            }
                            uVar8 = local_80;
                            if (local_59 != '\0') goto LAB_00289440;
                            lVar6 = _CFURLCopyLastPathComponent(local_48);
                            if (lVar6 == 0) {
                              local_68 = 0;
LAB_0028a338:
                              local_48 = 0;
                              lVar22 = 0;
                              local_38 = (char *)0x2;
                              goto LAB_0028a36e;
                            }
                            uVar3 = _CFGetAllocator(lVar24);
                            lVar22 = _CFURLCreateCopyAppendingPathComponent(uVar3,local_f0,lVar6,0);
                            local_68 = lVar6;
                            if (lVar22 == 0) goto LAB_0028a338;
                            uVar3 = _CFGetAllocator(lVar24);
                            uVar2 = _AMAuthInstallApImg3Finalize(uVar3,local_48,lVar22);
                            if (uVar2 != 0) {
                              local_48 = 0;
                              _AMAuthInstallLog(3,
                                                "_AMAuthInstallBundleCopyOverrideBuildIdentityRecoveryOS"
                                                ,"failed to finalize image3 override");
                              goto LAB_0028a167;
                            }
                            lVar6 = _CFRetain(lVar22);
                            lVar15 = _CFDictionaryGetValue(local_70,&cf_Info);
                            lVar11 = local_68;
                            if (lVar15 == 0) {
                              local_38 = "\x03";
                              local_48 = lVar6;
                              goto LAB_0028a36e;
                            }
                            local_d0 = lVar22;
                            _CFDictionarySetValue(lVar15,&cf_Path,local_68);
                            _CFDictionarySetValue(**(undefined8 **)(lVar24 + 0x80),lVar10,lVar6);
                            _SafeRelease(lVar11);
                            _SafeRelease(local_d0);
                            uVar8 = local_80;
                            if (lVar6 == 0) goto LAB_00289440;
                          }
                          uVar9 = __AMAuthInstallBundleApplyMeasurements
                                            (local_50,lVar10,lVar6,local_70,&local_70);
                          if ((int)uVar9 != 0) {
                            lVar11 = 0;
                            lVar24 = 0;
                            local_38 = (char *)uVar9;
                            goto LAB_0028a0df;
                          }
                          _CFRelease(lVar6);
                        }
LAB_00289455:
                        _AMAuthInstallLog(6,
                                          "_AMAuthInstallBundleCopyOverrideBuildIdentityRecoveryOS",
                                          "Inserting %@ to Manifest to personalize later",lVar10);
                        cVar1 = _CFBooleanGetValue(local_58);
                        lVar6 = local_b8;
                        if (cVar1 != '\0') {
                          _CFDictionarySetValue(uVar8,local_b8,local_70);
                        }
                        _SafeRelease(local_70);
                        local_70 = 0;
                        _SafeRelease(lVar6);
                        lVar6 = local_50;
                      }
                      lVar7 = lVar7 + 1;
                      lVar24 = _CFArrayGetCount(local_78);
                    } while (lVar7 < lVar24);
                  }
                  _CFDictionarySetValue(local_90,&cf_Manifest,uVar8);
                  lVar11 = 0;
                  lVar24 = 0;
                  lVar22 = 0;
                  local_38 = (char *)0x0;
                  lVar6 = 0;
                  lVar7 = 0;
                }
              }
LAB_0028955a:
              local_80 = uVar8;
              _SafeRelease(local_98);
              _SafeRelease(lVar11);
              _SafeRelease(local_a0);
              _SafeRelease(local_70);
              _SafeRelease(lVar24);
              _SafeRelease(lVar6);
              _SafeRelease(lVar22);
              _SafeRelease(lVar7);
              _SafeRelease(local_e8);
              _SafeRelease(local_80);
              lVar6 = local_c0;
              if ((int)local_38 == 0) {
                local_a0 = 0;
                if (local_c0 == 0) {
                  uStack_170 = 1;
                  lVar6 = 0;
                  local_58 = 0;
                  pcVar4 = (char *)0;
                  lVar7 = 0;
                  lVar11 = local_50;
                }
                else {
                  local_d0 = _CFDictionaryGetValue(local_90,&cf_Manifest);
                  lVar11 = local_50;
                  if (local_d0 == 0) {
                    uStack_170 = 7;
                    lVar6 = 0;
                    local_58 = 0;
                    pcVar4 = (char *)0;
                    lVar7 = 0;
                  }
                  else {
                    lVar24 = _CFDictionaryGetValue(lVar6,&cf_Personalized);
                    uStack_170 = 8;
                    if ((lVar24 == 0) ||
                       (local_d8 = (cfstringStruct *)_CFDictionaryGetValue(lVar6,&cf_Manifest),
                       local_d8 == (cfstringStruct *)0x0)) {
                      lVar7 = 0;
                    }
                    else {
                      uVar3 = _CFGetAllocator(lVar11);
                      lVar7 = _CFDictionaryCreateMutable
                                        (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar7 == 0) {
                        lVar7 = 0;
                        uStack_170 = 2;
                      }
                      else {
                        lVar22 = _CFDictionaryGetValue(lVar6,&cf_RecoveryOS);
                        if (((lVar22 != 0) &&
                            (lVar22 = _CFDictionaryGetValue(lVar6,&cf_Personalized), lVar22 != 0))
                           && (lVar10 = _CFDictionaryGetValue(lVar6,&cf_Manifest), lVar10 != 0)) {
                          local_c8 = lVar7;
                          cVar1 = _AMAuthInstallApIsImg4(lVar11);
                          pcVar16 = &cf_amai_apimg4ticket_der;
                          if (cVar1 == '\0') {
                            pcVar16 = &cf_amai_apticket_der;
                          }
                          uVar3 = _CFArrayGetCount(lVar24);
                          local_80 = 0;
                          cVar1 = _CFArrayContainsValue(lVar24,0,uVar3,pcVar16);
                          bVar20 = 0;
                          local_38 = "False";
                          if (cVar1 == '\0') {
                            lVar7 = *(long *)(lVar11 + 0x10);
                            if ((*(long *)(*(long *)(lVar11 + 0x10) + 0x18) == 0) &&
                               (lVar7 = local_50, *(char *)(local_50 + 0x1b1) == '\0')) {
                              local_80 = 0;
                              bVar20 = 0;
                              local_38 = "False";
                              lVar11 = local_50;
                            }
                            else {
                              local_80 = CONCAT71((int7)((ulong)lVar7 >> 8),1);
                              bVar20 = 1;
                              local_38 = "True";
                              lVar11 = local_50;
                            }
                          }
                          uVar3 = _CFArrayGetCount(lVar24);
                          cVar1 = _CFArrayContainsValue(lVar24,0,uVar3,pcVar16);
                          pcVar4 = local_38;
                          pcVar17 = "True";
                          if (cVar1 == '\0') {
                            pcVar17 = "False";
                          }
                          pcVar18 = "True";
                          if (*(long *)(*(long *)(lVar11 + 0x10) + 0x18) == 0) {
                            pcVar18 = "False";
                          }
                          local_38 = (char *)0x0;
                          _AMAuthInstallLog(7,
                                            "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                            ,
                                            "ticketPath %@ , withApTicket is %s,  (!%s && ( %s || %s))"
                                            ,pcVar16,pcVar4,pcVar17,pcVar18);
                          local_39 = bVar20 ^ 1;
                          *(byte *)(lVar11 + 0x20) = local_39;
                          lVar7 = _CFArrayGetCount(local_78);
                          if (0 < lVar7) {
                            lVar15 = *(long *)PTR__kCFBooleanFalse_00441108;
                            local_100 = *(long *)PTR__kCFBooleanTrue_00441110;
                            lVar19 = 0;
                            local_38 = (char *)0x0;
                            local_b0 = lVar7;
                            local_98 = lVar15;
                            do {
                              lVar12 = _CFArrayGetValueAtIndex(local_78,lVar19);
                              local_48 = _CFStringCompare(lVar12,&cf_BasebandFirmware,0);
                              lVar14 = lVar15;
                              if ((lVar12 != 0) &&
                                 (lVar13 = _CFStringFind(lVar12,&cf_RecoveryOS,0),
                                 lVar14 = local_100, lVar13 == -1)) {
                                lVar14 = lVar15;
                              }
                              local_b8 = lVar14;
                              cVar1 = _CFBooleanGetValue(lVar14);
                              if (cVar1 == '\0') {
                                lVar14 = 0;
                                lVar15 = local_58;
                              }
                              else {
                                uVar3 = _CFGetAllocator(lVar11);
                                lVar14 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName
                                                   (uVar3,lVar12);
                                lVar15 = _CFDictionaryGetValue(local_d0,lVar14);
                              }
                              local_58 = lVar15;
                              if (lVar15 == 0) {
                                _AMAuthInstallLog(6,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,"entry \"%@\" not part of manifest, skipping",
                                                  lVar12);
                                lVar15 = local_98;
                              }
                              else {
                                local_68 = lVar14;
                                pcVar16 = (cfstringStruct *)_CFDictionaryGetValue(lVar15,&cf_Info);
                                lVar11 = local_50;
                                if (pcVar16 != (cfstringStruct *)0x0) {
                                  local_70 = 0;
                                  _SafeRelease(local_38);
                                  lVar11 = local_50;
                                  uVar3 = _CFGetAllocator(local_50);
                                  local_38 = (char *)_CFDictionaryCreateMutableCopy(uVar3,0,lVar15);
                                  if (local_38 == (char *)0x0) {
                                    uStack_170 = 2;
                                  }
                                  else {
                                    uVar2 = _AMAuthInstallBundleProcessRulesWithEntryDict
                                                      (lVar11,local_38);
                                    if (uVar2 == 0) {
                                      local_f8 = pcVar16;
                                      lVar11 = _CFDictionaryGetValue(pcVar16,&cf_Personalize);
                                      pcVar4 = local_38;
                                      lVar7 = local_b0;
                                      if ((lVar11 != 0) &&
                                         (cVar1 = _CFBooleanGetValue(lVar11), cVar1 == '\0')) {
                                        cVar1 = _CFBooleanGetValue(local_b8);
                                        if (cVar1 != '\0') {
                                          lVar11 = _CFDictionaryGetValue(lVar10,local_68);
                                          pcVar17 = "skipping \"%@\" entry";
                                          if (lVar11 == 0 && local_39 == 0) {
                                            uVar3 = _CFGetAllocator(local_50);
                                            uVar3 = _CFDataCreate(uVar3,0,0);
                                            _CFDictionaryAddValue(local_38,&cf_Digest,uVar3);
                                            _CFDictionarySetValue(local_c8,local_68,local_38);
                                            pcVar4 = local_38;
                                            lVar7 = local_b0;
                                            _CFRelease(uVar3);
                                            pcVar17 = "personalizing \"%@\"";
                                          }
                                          _AMAuthInstallLog(6,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,pcVar17,local_68);
                                          goto LAB_00289a40;
                                        }
                                        uVar3 = 6;
                                        pcVar4 = "skipping \"%@\" entry";
LAB_00289b47:
                                        _AMAuthInstallLog(uVar3,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,pcVar4,lVar12);
                                        lVar15 = local_98;
                                        lVar11 = local_50;
                                        goto LAB_00289c64;
                                      }
LAB_00289a40:
                                      if (local_48 == 0) {
                                        uVar2 = _AMAuthInstallBundleCopyNextBasebandComponentName
                                                          (local_50,&local_70);
                                        lVar11 = local_70;
                                        if (uVar2 != 0) goto LAB_0028a3a9;
LAB_00289a84:
                                        if (lVar11 == 0) goto LAB_00289af4;
                                        cVar1 = _CFBooleanGetValue(local_b8);
                                        if (cVar1 == '\0') {
                                          cVar1 = _CFDictionaryContainsKey(local_d8,lVar12);
                                          lVar15 = lVar24;
                                          if (cVar1 != '\0') goto LAB_00289b22;
LAB_00289b81:
                                          bVar23 = local_48 == 0;
                                          uVar3 = _CFArrayGetCount(lVar15);
                                          cVar1 = _CFArrayContainsValue(lVar15,0,uVar3,lVar11);
                                          lVar7 = local_b0;
                                          if ((cVar1 != '\0') && (bVar23 || local_39 != 0)) {
LAB_00289baa:
                                            _AMAuthInstallLog(7,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,
                                                  "entry \"%@\" has been previously personalized; skipping it"
                                                  ,lVar12);
                                            _SafeRelease(lVar11);
                                            lVar15 = local_98;
                                            lVar11 = local_50;
                                            goto LAB_00289c64;
                                          }
                                        }
                                        else {
                                          cVar1 = _CFDictionaryContainsKey(lVar10,local_68);
                                          lVar15 = lVar22;
                                          if (cVar1 == '\0') goto LAB_00289b81;
LAB_00289b22:
                                          if ((local_48 == 0 | local_39) == 1) goto LAB_00289baa;
                                        }
                                      }
                                      else {
                                        cVar1 = _CFDictionaryContainsKey(pcVar4,&cf_PartialDigest);
                                        if (cVar1 != '\0') {
                                          lVar11 = _CFDictionaryGetValue(local_f8,&cf_Path);
                                          local_70 = lVar11;
                                          _SavageSafeRetain(lVar11);
                                          goto LAB_00289a84;
                                        }
                                        if (bVar20 == 0) {
                                          uVar3 = 7;
                                          pcVar4 = "not personalizing \"%@\"";
                                          goto LAB_00289b47;
                                        }
LAB_00289af4:
                                        lVar11 = 0;
                                      }
                                      _SafeRelease(lVar11);
                                      pcVar4 = local_38;
                                      lVar11 = _CFDictionaryGetValue(local_38,&cf_Digest);
                                      if (lVar11 != 0) {
                                        _AMAuthInstallLog(7,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,"personalizing \"%@\" Digest = \"%@\"",lVar12,
                                                  lVar11);
                                      }
                                      lVar11 = local_50;
                                      if (local_48 != 0) {
                                        cVar1 = _CFBooleanGetValue(local_b8);
                                        if (cVar1 != '\0') {
                                          _CFDictionarySetValue(local_c8,local_68,pcVar4);
                                        }
                                        goto LAB_00289c54;
                                      }
                                      uStack_170 = 1;
                                    }
                                    else {
                                      _AMAuthInstallLog(3,
                                                  "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                  ,"failed to process image rules");
LAB_0028a3a9:
                                      uStack_170 = (ulong)uVar2;
                                      lVar11 = local_50;
                                    }
                                  }
                                  lVar6 = 0;
                                  local_58 = 0;
                                  pcVar4 = local_38;
                                  lVar7 = local_c8;
                                  goto LAB_00289ded;
                                }
LAB_00289c54:
                                lVar15 = local_98;
                                _SafeRelease(local_68);
                              }
LAB_00289c64:
                              lVar19 = lVar19 + 1;
                            } while (lVar7 != lVar19);
                          }
                          lVar7 = local_c8;
                          lVar24 = _CFDictionaryGetCount(local_c8);
                          uVar8 = local_80 & 0xff;
                          if (lVar24 == 0) {
                            lVar6 = 0;
LAB_00289d43:
                            lVar24 = _CFDictionaryGetCount(lVar7);
                            local_58 = lVar6;
                            if (lVar24 == 0) {
                              lVar6 = 0;
                              _AMAuthInstallLog(6,
                                                "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                ,"nothing to be done");
                              uStack_170 = 0;
                              pcVar4 = local_38;
                            }
                            else {
                              uVar2 = _AMAuthInstallApServerRequestAddRequiredTags
                                                (lVar11,lVar7,uVar8);
                              uStack_170 = 0;
                              if (uVar2 == 0) {
                                uVar3 = _CFGetAllocator(lVar11);
                                lVar6 = _CFPropertyListCreateDeepCopy(uVar3,lVar7,2);
                                pcVar4 = local_38;
                                if (lVar6 == 0) goto LAB_0028a441;
                              }
                              else {
LAB_0028a444:
                                lVar6 = 0;
                                uStack_170 = (ulong)uVar2;
                                pcVar4 = local_38;
                              }
                            }
                          }
                          else {
                            __AMAuthInstallBundlePopulateManifestProperties(lVar11,local_90,lVar7);
                            uVar2 = _AMAuthInstallApServerRequestAddRequiredTagsWithRecoveryOS
                                              (lVar11,lVar7,uVar8,1);
                            if (uVar2 == 0) {
                              cVar1 = (**(code **)(lVar11 + 0x1b8))(lVar11,lVar7,lVar6,&local_a0);
                              if (cVar1 != '\0') {
                                uVar3 = _CFGetAllocator(lVar11);
                                lVar6 = _CFPropertyListCreateDeepCopy(uVar3,lVar7,2);
                                if (lVar6 != 0) goto LAB_00289d43;
                                local_58 = 0;
LAB_0028a441:
                                uVar2 = 2;
                                goto LAB_0028a444;
                              }
                              _AMAuthInstallLog(3,
                                                "_AMAuthInstallBundleCreateServerRequestDictionaryForRecoveryOS"
                                                ,"failed to add updater tags %@",local_a0);
                              uStack_170 = _CFErrorGetCode(local_a0);
                            }
                            else {
                              uStack_170 = (ulong)uVar2;
                            }
                            lVar6 = 0;
                            local_58 = 0;
                            pcVar4 = local_38;
                          }
                          goto LAB_00289ded;
                        }
                      }
                    }
                    local_58 = 0;
                    lVar6 = 0;
                    pcVar4 = (char *)0;
                  }
                }
LAB_00289ded:
                _SafeRelease(lVar7);
                _SafeRelease(pcVar4);
                _SafeRelease(local_a0);
                lVar7 = local_58;
                local_48 = lVar6;
                pcVar4 = (char *)uStack_170;
                if ((int)uStack_170 == 0) {
                  if (lVar6 != 0) {
                    if ((local_58 != 0) &&
                       (uVar8 = _AMAuthInstallApCreatePersonalizedResponse
                                          (lVar11,local_58,&local_110), (int)uVar8 != 0)) {
                      pvVar21 = (void *)0x0;
                      local_38 = (char *)uVar8;
                      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",
                                        "failed to create ap ticket for recovery OS");
                      lVar24 = local_88;
                      uVar3 = local_a8;
                      lVar6 = local_90;
                      goto LAB_00289f9b;
                    }
                    lVar6 = _CFDictionaryGetValue(local_c0,&cf_Updaters);
                    local_38 = (char *)0x0;
                    if (lVar6 == 0) {
                      pvVar21 = (void *)0x0;
                    }
                    else {
                      lVar7 = _CFDictionaryGetCount(lVar6);
                      pvVar21 = _malloc(lVar7 * 8);
                      if (pvVar21 == (void *)0x0) {
                        local_38 = (char *)0x2;
                        pcVar4 = local_38;
                        goto LAB_0028a3f5;
                      }
                      _CFDictionaryGetKeysAndValues(lVar6,pvVar21,0);
                      if (0 < lVar7) {
                        lVar24 = 0;
                        do {
                          uVar3 = _CFDictionaryGetValue
                                            (lVar6,*(undefined8 *)((long)pvVar21 + lVar24 * 8));
                          _CFDictionaryRemoveValue(uVar3,&cf_RequestTags);
                          lVar24 = lVar24 + 1;
                        } while (lVar7 != lVar24);
                      }
                      lVar11 = local_50;
                      uVar2 = _AMAuthInstallBundleWriteReceipt
                                        (local_50,local_f0,local_c0,
                                         *(undefined8 *)PTR__kCFBooleanFalse_00441108);
                      if (uVar2 != 0) {
                        _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",
                                          "AMAuthInstallBundleWriteReceipt returned %d",uVar2);
                        lVar24 = local_88;
                        uVar3 = local_a8;
                        lVar6 = local_90;
                        lVar7 = local_58;
                        local_38 = (char *)(ulong)uVar2;
                        goto LAB_00289f9b;
                      }
                    }
                    uVar3 = local_a8;
                    uVar2 = __AMAuthInstallBundlePopulatePersonalizedBundle
                                      (lVar11,param_3,local_a8,param_4,local_90,local_110,local_c0,
                                       local_78,param_5,local_88,
                                       *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                    lVar24 = local_88;
                    lVar6 = local_90;
                    lVar7 = local_58;
                    if (uVar2 != 0) {
                      uVar5 = _AMAuthInstallGetLocalizedStatusString(lVar11,uVar2);
                      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",
                                        "failed to personalize recovery OS bundle",uVar5);
                      lVar24 = local_88;
                      lVar6 = local_90;
                      lVar7 = local_58;
                      local_38 = (char *)(ulong)uVar2;
                    }
                    goto LAB_00289f9b;
                  }
                  local_48 = 0;
                  local_38 = (char *)0x0;
                  pcVar4 = local_38;
                }
LAB_0028a3f5:
                local_38 = pcVar4;
                pvVar21 = (void *)0x0;
                lVar24 = local_88;
                uVar3 = local_a8;
                lVar6 = local_90;
                lVar7 = local_58;
                goto LAB_00289f9b;
              }
              local_48 = 0;
              _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",
                                "failed to create build identity with overrides");
              uVar3 = local_a8;
              lVar6 = local_90;
              goto LAB_0028a289;
            }
            local_38 = (char *)uVar8;
            uVar5 = _AMAuthInstallGetLocalizedStatusString(param_1,uVar8 & 0xffffffff);
            pcVar4 = "failed to generate a recovery OS receipt: %@";
          }
          else {
            local_38 = (char *)uVar8;
            uVar5 = _AMAuthInstallGetLocalizedStatusString(param_1,uVar8 & 0xffffffff);
            pcVar4 = "failed to generate a receipt: %@";
          }
          local_48 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialRecoveryOS",pcVar4,uVar5);
        }
        else {
          local_48 = 0;
          local_38 = (char *)uVar8;
        }
LAB_0028a289:
        pvVar21 = (void *)0x0;
        lVar24 = local_88;
        lVar7 = 0;
        goto LAB_00289f9b;
      }
    }
    else {
LAB_0028a1a5:
      local_38 = pcVar4;
      lVar6 = 0;
    }
    local_48 = 0;
  }
  pvVar21 = (void *)0x0;
  local_78 = 0;
  lVar24 = 0;
  lVar7 = 0;
LAB_00289f9b:
  _SafeRelease(local_78);
  _SafeRelease(lVar24);
  _SafeRelease(local_48);
  _SafeRelease(0);
  _SafeRelease(local_c0);
  _SafeRelease(0);
  _SafeRelease(0);
  _SafeRelease(0);
  _SafeRelease(0);
  _SafeFree(pvVar21);
  _SafeRelease(uVar3);
  _SafeRelease(lVar6);
  _SafeRelease(lVar7);
  _SafeRelease(local_108);
  _SafeRelease(local_110);
  return (ulong)local_38;
}

