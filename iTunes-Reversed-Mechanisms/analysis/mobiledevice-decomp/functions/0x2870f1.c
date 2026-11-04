// rea decompile_all
// name: __AMAuthInstallBundleCopyOverrideBuildIdentity
// address: 0x2870f1
// body: available
// range: 0x2870f1-0x287f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallBundleCopyOverrideBuildIdentity
              (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,long param_6,
              long param_7)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  void *pvVar18;
  undefined8 uVar19;
  cfstringStruct *pcVar20;
  bool bVar21;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  void *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  ulong local_50;
  char local_41;
  void *local_40;
  long local_38;
  
  local_a0 = 0;
  local_70 = 0;
  local_b0 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_5 == 0)) {
    local_78 = 0;
    lVar13 = 0;
    lVar12 = 0;
    local_38 = 0;
    local_60 = 0;
    lVar7 = 0;
    lVar9 = 0;
    local_40 = (void *)0x0;
    iVar5 = 1;
    goto LAB_00287c5b;
  }
  uVar6 = _CFGetAllocator();
  local_38 = param_1;
  local_78 = _CFDictionaryCreateMutableCopy(uVar6,0,**(undefined8 **)(param_1 + 0x80));
  iVar5 = 2;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    lVar7 = _CFDictionaryGetValue(param_5,&cf_Manifest);
    iVar5 = 8;
    if (lVar7 != 0) {
      if (param_7 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = _CFDictionaryGetValue(param_7,&cf_Manifest);
        if (lVar8 == 0) goto LAB_00287e65;
      }
      uVar6 = _CFGetAllocator(local_38);
      local_60 = _CFDictionaryCreateMutableCopy(uVar6,0,lVar7);
      if (local_60 == 0) {
        local_60 = 0;
LAB_00287e9e:
        local_38 = 0;
        lVar13 = 0;
        lVar12 = 0;
        lVar9 = 0;
        local_40 = (void *)0x0;
        iVar5 = 2;
        lVar7 = 0;
      }
      else {
        if (param_7 == 0) {
          lVar9 = 0;
        }
        else {
          uVar6 = _CFGetAllocator(local_38);
          lVar9 = _CFDictionaryCreateMutableCopy(uVar6,0,lVar8);
          if (lVar9 == 0) goto LAB_00287e9e;
        }
        local_58 = lVar9;
        lVar9 = _CFArrayGetCount(param_2);
        if (0 < lVar9) {
          uVar6 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
          uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          local_a8 = &cf_Digest;
          pvVar18 = (void *)0x0;
          do {
            lVar10 = _CFArrayGetValueAtIndex(param_2,pvVar18);
            if (lVar10 == 0) {
              lVar12 = 0;
              iVar5 = 1;
LAB_00287d96:
              local_38 = 0;
              lVar13 = 0;
LAB_00287d9b:
              local_40 = (void *)0x0;
              lVar9 = 0;
              lVar7 = local_58;
              goto LAB_00287c5b;
            }
            lVar9 = _CFStringFind(lVar10,&cf_RecoveryOS,0);
            local_90 = uVar2;
            if (lVar9 == -1) {
              local_90 = uVar6;
            }
            cVar4 = _CFBooleanGetValue();
            lVar9 = local_38;
            uVar11 = _CFGetAllocator(local_38);
            if ((lVar8 == 0) || (cVar4 == '\0')) {
              lVar9 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar11,lVar7,lVar10);
              lVar12 = 0;
            }
            else {
              lVar12 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar11,lVar10);
              uVar11 = _CFGetAllocator(lVar9);
              lVar9 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar11,lVar8,lVar12);
            }
            if (lVar9 != 0) {
              local_40 = pvVar18;
              local_88 = _CFStringCompare(lVar10,&cf_BasebandFirmware,0);
              lVar13 = local_38;
              uVar11 = _CFGetAllocator(local_38);
              local_70 = _CFDictionaryCreateMutableCopy(uVar11,0,lVar9);
              if (local_70 == 0) {
LAB_00287cd4:
                lVar12 = 0;
                iVar5 = 2;
                goto LAB_00287d96;
              }
              local_98 = lVar12;
              iVar5 = __AMAuthInstallBundleSetObjectPropertyOverrides(lVar13,lVar10,local_70);
              if (iVar5 != 0) {
                _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyOverrideBuildIdentity",
                                  "failed to set %@ property overrides",lVar10);
                local_38 = 0;
                local_40 = (void *)0x0;
                lVar9 = 0;
                goto LAB_00287f15;
              }
              uVar11 = _CFGetAllocator(lVar13);
              local_80 = (void *)_AMAuthInstallSupportGetValueForKeyWithFormat
                                           (uVar11,lVar9,&cf______,&cf_Info,&cf_Path);
              local_68 = _CFDictionaryGetValue(local_78,lVar10);
              if (local_68 != 0) {
                lVar9 = _CFDictionaryGetValue(local_70,&cf_Info);
                if (lVar9 == 0) {
                  lVar13 = 0;
                  lVar12 = 0;
                  local_38 = 0;
                  iVar5 = 7;
                  goto LAB_00287d9b;
                }
                uVar11 = _CFGetAllocator(local_38);
                lVar12 = _CFDictionaryCreateMutableCopy(uVar11,0,lVar9);
                if (lVar12 == 0) goto LAB_00287cd4;
                lVar13 = _CFURLCopyLastPathComponent(local_68);
                pvVar18 = local_80;
                if (lVar13 == 0) {
                  iVar5 = 3;
                  goto LAB_00287d96;
                }
                if (local_80 == (void *)0x0) {
                  local_a0 = _CFRetain(lVar13);
                }
                else {
                  uVar11 = _CFGetAllocator(local_38);
                  iVar5 = _AMAuthInstallSupportCopyStringReplacingLastComponent
                                    (uVar11,pvVar18,&cf__,lVar13,&local_a0);
                  if (iVar5 != 0) {
                    local_38 = 0;
                    goto LAB_00287d9b;
                  }
                }
                _SafeRelease(lVar13);
                _CFDictionarySetValue(lVar12,&cf_Path,local_a0);
                _SafeRelease(local_a0);
                _CFDictionarySetValue(local_70,&cf_Info,lVar12);
                _SafeRelease(lVar12);
                if (local_88 != 0) {
                  uVar11 = _CFGetAllocator(local_38);
                  uVar11 = _CFDataCreateMutable(uVar11,0);
                  _CFDictionarySetValue(local_70,local_a8,uVar11);
                  _CFRelease(uVar11);
                }
                local_a0 = 0;
                _CFDictionaryRemoveValue(local_78,lVar10);
              }
              lVar9 = local_38;
              pvVar18 = local_40;
              if (*(long *)(local_38 + 0x80) == 0) {
                lVar9 = 0;
              }
              else if (*(long *)(*(long *)(local_38 + 0x80) + 8) == 0) {
LAB_002875a3:
                lVar9 = 0;
              }
              else {
                cVar4 = _CFBooleanGetValue(local_90);
                if (cVar4 == '\0') {
                  uVar11 = _CFGetAllocator(lVar9);
                  lVar12 = *(long *)(*(long *)(lVar9 + 0x80) + 8);
                  lVar9 = lVar10;
                }
                else {
                  lVar12 = _CFDictionaryGetValue
                                     (*(undefined8 *)(*(long *)(lVar9 + 0x80) + 8),&cf_RecoveryOSOS)
                  ;
                  if (lVar12 == 0) goto LAB_002875a3;
                  uVar11 = _CFGetAllocator(lVar9);
                  lVar9 = local_98;
                }
                lVar9 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                  (uVar11,lVar12,&cf_________,&cf_Manifest,lVar9,local_a8);
              }
              cVar4 = _CFBooleanGetValue(local_90);
              pcVar20 = &cf_RecoveryOSOS;
              if (cVar4 == '\0') {
                pcVar20 = &cf_OS;
              }
              bVar21 = false;
              lVar13 = _CFStringCompare(pcVar20,lVar10,0);
              lVar12 = local_38;
              if (lVar9 == 0) {
                bVar21 = (lVar13 != 0 || local_68 != 0) && *(char *)(local_38 + 0x1b2) == '\0';
              }
              if ((local_68 != 0) || (bVar21)) {
                if (local_68 == 0) {
                  if (local_80 == (void *)0x0) goto LAB_00287810;
                  cVar4 = _CFBooleanGetValue(local_90);
                  uVar11 = _CFGetAllocator(lVar12);
                  lVar9 = param_3;
                  if (cVar4 != '\0') {
                    lVar9 = param_6;
                  }
                  lVar15 = _CFURLCreateCopyAppendingPathComponent(uVar11,lVar9,local_80,0);
LAB_00287804:
                  if (lVar15 == 0) goto LAB_00287810;
                }
                else {
                  cVar4 = _AMAuthInstallApIsImg4(local_38);
                  if ((local_88 == 0) || (cVar4 != '\0')) {
LAB_002877b8:
                    lVar15 = _CFRetain(local_68);
                    goto LAB_00287804;
                  }
                  local_50 = local_50 & 0xffffffffffffff00;
                  cVar4 = __AMAuthInstallBundleImageHasBuildString(lVar10);
                  if (cVar4 != '\0') {
                    uVar11 = _CFGetAllocator(lVar12);
                    iVar5 = _AMAuthInstallApImg3CopyBuildString(uVar11,local_68,&local_b0);
                    if (iVar5 == 0) {
                      _CFDictionarySetValue(local_70,&cf_BuildString,local_b0);
                      _SafeRelease(local_b0);
                      local_b0 = 0;
                      goto LAB_002876c0;
                    }
                    pcVar17 = "failed to copy image build string %@";
LAB_00287e35:
                    local_38 = 0;
                    _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyOverrideBuildIdentity",pcVar17,
                                      lVar10);
                    local_40 = (void *)0x0;
                    lVar9 = 0;
                    goto LAB_00287f15;
                  }
LAB_002876c0:
                  uVar11 = _CFGetAllocator(lVar12);
                  iVar5 = _AMAuthInstallApImg3IsFinalized(uVar11,local_68,&local_50);
                  if (iVar5 != 0) {
                    pcVar17 = "failed to check %@ alignment";
                    goto LAB_00287e35;
                  }
                  if ((char)local_50 != '\0') goto LAB_002877b8;
                  pvVar14 = (void *)_CFURLCopyLastPathComponent(local_68);
                  if (pvVar14 == (void *)0x0) {
                    local_40 = (void *)0x0;
LAB_00287ed4:
                    local_38 = 0;
                    lVar9 = 0;
                    iVar5 = 2;
                    goto LAB_00287f15;
                  }
                  uVar11 = _CFGetAllocator(lVar12);
                  local_40 = pvVar14;
                  lVar9 = _CFURLCreateCopyAppendingPathComponent(uVar11,param_4,pvVar14,0);
                  if (lVar9 == 0) goto LAB_00287ed4;
                  uVar11 = _CFGetAllocator(lVar12);
                  iVar5 = _AMAuthInstallApImg3Finalize(uVar11,local_68,lVar9);
                  if (iVar5 != 0) {
                    local_38 = 0;
                    _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyOverrideBuildIdentity",
                                      "failed to finalize image3 override");
                    goto LAB_00287f15;
                  }
                  local_88 = lVar9;
                  lVar15 = _CFRetain(lVar9);
                  lVar9 = _CFDictionaryGetValue(local_70,&cf_Info);
                  if (lVar9 == 0) {
                    iVar5 = 8;
                    lVar9 = local_88;
                    local_38 = lVar15;
                    goto LAB_00287f15;
                  }
                  _CFDictionarySetValue(lVar9,&cf_Path,local_40);
                  _CFDictionarySetValue(**(undefined8 **)(lVar12 + 0x80),lVar10,lVar15);
                  _SafeRelease(local_40);
                  _SafeRelease(local_88);
                  if (lVar15 == 0) goto LAB_002877b8;
                }
                iVar5 = __AMAuthInstallBundleApplyMeasurements
                                  (lVar12,lVar10,lVar15,local_70,&local_70);
                if (iVar5 != 0) {
                  lVar13 = 0;
                  lVar12 = 0;
                  local_38 = lVar15;
                  goto LAB_00287d9b;
                }
                _CFRelease(lVar15);
              }
LAB_00287810:
              _AMAuthInstallLog(6,"_AMAuthInstallBundleCopyOverrideBuildIdentity",
                                "Inserting %@ to Manifest to personalize later",lVar10);
              cVar4 = _CFBooleanGetValue(local_90);
              lVar9 = local_98;
              if (cVar4 == '\0') {
                _CFDictionarySetValue(local_60,lVar10,local_70);
                lVar9 = local_98;
              }
              else {
                _CFDictionarySetValue(local_58,local_98,local_70);
              }
              _SafeRelease(local_70);
              local_70 = 0;
              _SafeRelease(lVar9);
            }
            pvVar18 = (void *)((long)pvVar18 + 1);
            lVar9 = _CFArrayGetCount(param_2);
          } while ((long)pvVar18 < lVar9);
        }
        lVar7 = local_78;
        lVar9 = _CFDictionaryGetCount(local_78);
        if (0 < lVar9) {
          local_50 = 0;
          local_88 = _CFDictionaryGetCount(lVar7);
          sVar1 = local_88 * 8;
          local_40 = _malloc(sVar1);
          iVar5 = 2;
          if ((local_40 == (void *)0x0) || (pvVar18 = _malloc(sVar1), pvVar18 == (void *)0x0)) {
            lVar12 = 0;
            local_80 = (void *)0x0;
            lVar9 = 0;
            lVar7 = 0;
          }
          else {
            _CFDictionaryGetKeysAndValues(lVar7,local_40,pvVar18);
            local_80 = pvVar18;
            if (0 < local_88) {
              uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
              uVar2 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
              uVar11 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
              local_a8 = &cf_ESEC;
              lVar13 = 0;
              do {
                lVar7 = *(long *)((long)local_40 + lVar13 * 8);
                local_90 = *(undefined8 *)((long)pvVar18 + lVar13 * 8);
                local_41 = '\0';
                uVar16 = _CFArrayGetCount(param_2);
                local_68 = lVar7;
                cVar4 = _CFArrayContainsValue(param_2,0,uVar16,lVar7);
                puVar3 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
                if (cVar4 != '\0') {
                  local_50 = _CFDictionaryCreateMutable
                                       (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  if (local_50 == 0) {
LAB_00287d0e:
                    lVar12 = 0;
                    lVar9 = 0;
LAB_00287daf:
                    iVar5 = 2;
                  }
                  else {
                    lVar7 = _CFStringCompare(local_68,&cf_BasebandFirmware,0);
                    if (lVar7 != 0) {
                      _CFDictionaryAddValue(local_50,&cf_Trusted,uVar2);
                    }
                    uVar16 = uVar2;
                    if (*(char *)(*(long *)(local_38 + 0x10) + 0x14) != '\0') {
                      uVar16 = uVar11;
                    }
                    uVar19 = uVar2;
                    if (*(char *)(*(long *)(local_38 + 0x10) + 0x48) != '\0') {
                      uVar19 = uVar11;
                    }
                    _CFDictionaryAddValue(local_50,&cf_EPRO,uVar16);
                    _CFDictionaryAddValue(local_50,local_a8,uVar19);
                    lVar9 = _CFDictionaryCreateMutable
                                      (uVar6,0,puVar3,PTR__kCFTypeDictionaryValueCallBacks_004411b8)
                    ;
                    if (lVar9 == 0) goto LAB_00287d0e;
                    lVar12 = _CFURLCopyLastPathComponent(local_90);
                    if (lVar12 != 0) {
                      uVar16 = _CFGetAllocator(local_38);
                      lVar7 = _CFURLCreateCopyAppendingPathComponent(uVar16,param_4,lVar12,0);
                      if (lVar7 == 0) goto LAB_00287daf;
                      iVar5 = _AMAuthInstallSupportFileURLExists(lVar7,&local_41);
                      uVar16 = local_90;
                      if ((iVar5 == 0) &&
                         ((local_41 != '\0' ||
                          (iVar5 = _AMAuthInstallPlatformCreateSoftLink(lVar7,local_90), iVar5 == 0)
                          ))) {
                        local_98 = lVar7;
                        _CFDictionaryAddValue(lVar9,&cf_Path,lVar12);
                        _CFDictionaryAddValue(local_50,&cf_Info,lVar9);
                        lVar8 = local_68;
                        iVar5 = __AMAuthInstallBundleApplyMeasurements
                                          (local_38,local_68,uVar16,0,&local_50);
                        lVar7 = local_98;
                        if (iVar5 == 0) {
                          _CFDictionarySetValue(local_60,lVar8,local_50);
                          _SafeRelease(lVar12);
                          _SafeRelease(lVar9);
                          _SafeRelease(local_50);
                          _SafeRelease(local_98);
                          local_50 = 0;
                          pvVar18 = local_80;
                          goto LAB_00287bb9;
                        }
                      }
                      goto LAB_00287bd1;
                    }
                    lVar12 = 0;
                    iVar5 = 3;
                  }
                  lVar7 = 0;
                  goto LAB_00287bd1;
                }
LAB_00287bb9:
                lVar13 = lVar13 + 1;
              } while (local_88 != lVar13);
            }
            lVar12 = 0;
            lVar9 = 0;
            iVar5 = 0;
            lVar7 = 0;
          }
LAB_00287bd1:
          _SafeRelease(local_50);
          _SafeRelease(lVar9);
          _SafeRelease(lVar12);
          _SafeFree(local_40);
          _SafeFree(local_80);
          _SafeRelease(lVar7);
          if (iVar5 != 0) {
            local_38 = 0;
            local_40 = (void *)0x0;
            lVar9 = 0;
LAB_00287f15:
            lVar13 = 0;
            lVar12 = 0;
            lVar7 = local_58;
            goto LAB_00287c5b;
          }
        }
        _CFDictionarySetValue(param_5,&cf_Manifest,local_60);
        lVar7 = local_58;
        if (param_7 != 0) {
          _CFDictionarySetValue(param_7,&cf_Manifest,local_58);
        }
        lVar13 = 0;
        lVar12 = 0;
        local_38 = 0;
        lVar9 = 0;
        local_40 = (void *)0x0;
        iVar5 = 0;
      }
      goto LAB_00287c5b;
    }
  }
LAB_00287e65:
  lVar13 = 0;
  lVar12 = 0;
  local_38 = 0;
  local_60 = 0;
  lVar9 = 0;
  local_40 = (void *)0x0;
  lVar7 = 0;
LAB_00287c5b:
  _SafeRelease(local_78);
  _SafeRelease(lVar13);
  _SafeRelease(local_a0);
  _SafeRelease(local_70);
  _SafeRelease(lVar12);
  _SafeRelease(local_38);
  _SafeRelease(local_60);
  _SafeRelease(lVar9);
  _SafeRelease(local_40);
  _SafeRelease(local_b0);
  _SafeRelease(lVar7);
  return iVar5;
}

