// rea decompile_all
// name: _AMAuthInstallBundleCopyBuildIdentityForVariant
// address: 0x284763
// body: available
// range: 0x284763-0x285139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyBuildIdentityForVariant
              (long param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  void *pvVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long local_a0;
  ulong local_98;
  undefined8 *local_90;
  cfstringStruct *local_88;
  ulong local_80;
  void *local_78;
  long local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined4 local_54;
  void *local_50;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_a0 = 0;
  local_88 = &cf_ApBoardID;
  pcVar6 = &cf_ApChipID;
  local_68 = &cf_ApSecurityDomain;
  iVar5 = 1;
  local_48 = param_3;
  if (param_1 == 0) {
    lVar18 = 0;
    goto LAB_002850eb;
  }
  lVar18 = 0;
  local_38 = param_1;
  if (((param_4 == (undefined8 *)0x0) || (param_2 == 0)) ||
     (lVar8 = *(long *)(param_1 + 0x10), lVar8 == 0)) goto LAB_002850eb;
  local_78 = (void *)CONCAT44(local_78._4_4_,*(undefined4 *)(lVar8 + 8));
  local_50 = (void *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar8 + 0xc));
  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar8 + 0x10));
  if (*(long *)(lVar8 + 0x90) != 0) {
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar6 = (cfstringStruct *)
             _CFStringCreateWithFormat(uVar7,0,&cf______,*(long *)(lVar8 + 0x90),&cf_ChipID);
    param_1 = local_38;
    if (pcVar6 == (cfstringStruct *)0x0) {
      lVar18 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "failed chipKey allocation");
      iVar5 = 99;
      pcVar6 = (cfstringStruct *)0x0;
      goto LAB_002850eb;
    }
    local_88 = (cfstringStruct *)
               _CFStringCreateWithFormat
                         (uVar7,0,&cf______,*(undefined8 *)(*(long *)(local_38 + 0x10) + 0x90),
                          &cf_BoardID);
    if (local_88 == (cfstringStruct *)0x0) {
      lVar18 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "failed boardKey allocation");
      iVar5 = 99;
      local_88 = (cfstringStruct *)0x0;
      goto LAB_002850eb;
    }
    local_68 = (cfstringStruct *)
               _CFStringCreateWithFormat
                         (uVar7,0,&cf______,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),
                          &cf_SecurityDomain);
    if (local_68 == (cfstringStruct *)0x0) {
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "failed secdomKey allocation");
      iVar5 = 99;
      local_68 = (cfstringStruct *)0x0;
      lVar18 = 0;
      goto LAB_002850eb;
    }
  }
  lVar18 = local_48;
  local_60 = __AMAuthInstallIsRecoveryVariant(param_1,local_48);
  if ((*(long *)(param_1 + 0x80) == 0) || (*(long *)(*(long *)(param_1 + 0x80) + 0x20) == 0)) {
LAB_00284915:
    if (lVar18 == 0) {
      _AMAuthInstallLog(4,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "variant not specified, will use first variant found for this device in build manifest"
                       );
    }
    else {
      uVar4 = _CFBooleanGetValue(local_60);
      _AMAuthInstallLog(6,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "searching for variant %@ (%d recovery)",lVar18,uVar4);
    }
    uVar7 = _CFGetAllocator(param_1);
    iVar5 = _AMAuthInstallBundleCopyPublishedVariantsArray(uVar7,param_2,&local_a0);
    lVar18 = local_a0;
    if (iVar5 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                        "AMAuthInstallBundleCopyPublishedVariantsArray failed");
      lVar18 = local_a0;
      goto LAB_002850eb;
    }
    if (local_a0 == 0) {
      pcVar15 = "AMAuthInstallBundleCopyPublishedVariantsArray returned NULL";
      lVar18 = 0;
    }
    else {
      lVar8 = _CFGetTypeID(local_a0);
      lVar9 = _CFArrayGetTypeID();
      if (lVar8 == lVar9) {
        lVar8 = _CFArrayGetCount(lVar18);
        local_80 = 0xffffffffffffffff;
        local_70 = lVar18;
        local_90 = param_4;
        if (*(char *)(*(long *)(local_38 + 0x10) + 0x60) == '\0') {
          if (*(long *)(local_38 + 0x30) == 0) {
            local_54 = 0;
            _AMAuthInstallLog(7,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                              "No baseband chipid reported. Will match Build Identity based on ap chipid, boardid, and secdomain only."
                             );
          }
          else {
            uVar1 = *(uint *)(*(long *)(local_38 + 0x30) + 4);
            local_80 = (ulong)uVar1;
            local_54 = (undefined4)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
          }
        }
        else {
          local_54 = 0;
        }
        local_40 = pcVar6;
        if (0 < lVar8) {
          lVar18 = 0;
          do {
            lVar9 = _CFArrayGetValueAtIndex(local_70,lVar18);
            if (lVar9 != 0) {
              lVar10 = _CFGetTypeID(lVar9);
              lVar11 = _CFDictionaryGetTypeID();
              if (((((lVar10 == lVar11) &&
                    (cVar3 = _AMAuthInstallSupportCompareStringToInt32
                                       (lVar9,local_88,(ulong)local_50 & 0xffffffff), cVar3 != '\0')
                    ) && ((cVar3 = _AMAuthInstallSupportCompareStringToInt32
                                             (lVar9,pcVar6,(ulong)local_78 & 0xffffffff),
                          cVar3 != '\0' &&
                          ((lVar10 = _CFDictionaryGetValue(lVar9,local_68), lVar10 == 0 ||
                           (cVar3 = _AMAuthInstallSupportCompareStringToInt32
                                              (lVar9,local_68,local_98 & 0xffffffff), cVar3 != '\0')
                           ))))) &&
                  (((char)local_54 == '\0' ||
                   (cVar3 = _AMAuthInstallSupportCompareStringToInt32(lVar9,&cf_BbChipID,local_80),
                   cVar3 != '\0')))) &&
                 (lVar10 = _CFDictionaryGetValue(lVar9,&cf_Info), lVar10 != 0)) {
                lVar11 = _CFGetTypeID(lVar10);
                lVar12 = _CFDictionaryGetTypeID();
                pcVar6 = local_40;
                if (lVar11 == lVar12) {
                  pcVar6 = &cf_Variant;
                  if (*(char *)(local_38 + 0x38) != '\0') {
                    cVar3 = _CFBooleanGetValue(local_60,&cf_Variant);
                    pcVar6 = &cf_Variant;
                    if (cVar3 == '\0') {
                      lVar11 = _CFDictionaryGetValue(lVar10,&cf_Variant);
                      pcVar6 = &cf_RestoreBehavior;
                      if (lVar11 != 0) {
                        cVar3 = _CFStringHasPrefix(lVar11,&cf_Recovery);
                        pcVar6 = &cf_RestoreBehavior;
                        if (cVar3 != '\0') {
                          _AMAuthInstallLog(4,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                                            "Restore Behavior specified - skipping recovery variant: %@"
                                            ,lVar11);
                          pcVar6 = local_40;
                          goto LAB_00284b78;
                        }
                      }
                    }
                  }
                  lVar11 = _CFDictionaryGetValue(lVar10,pcVar6);
                  pcVar6 = local_40;
                  if ((lVar11 != 0) &&
                     ((local_48 == 0 || (lVar11 = _CFStringCompare(lVar11,local_48,0), lVar11 == 0))
                     )) {
                    uVar7 = _CFDictionaryGetValue(lVar10,&cf_Variant);
                    _AMAuthInstallLog(4,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                                      "%s: Found variant: %@",
                                      "AMAuthInstallBundleCopyBuildIdentityForVariant",uVar7);
                    lVar18 = local_70;
                    goto LAB_00284f58;
                  }
                }
              }
            }
LAB_00284b78:
            lVar18 = lVar18 + 1;
          } while (lVar8 != lVar18);
        }
        cVar3 = _CFBooleanGetValue(local_60);
        lVar8 = local_48;
        lVar18 = local_70;
        if (cVar3 == '\0') {
          if (*(long *)(local_38 + 0x18) == 0) {
            local_50 = (void *)0x0;
            lVar9 = 0;
            pvVar14 = (void *)0x0;
          }
          else {
            sVar13 = _CFDictionaryGetCount();
            if (((long)sVar13 < 1) || (local_50 = _calloc(sVar13,8), local_50 == (void *)0x0)) {
              pvVar14 = (void *)0x0;
              local_50 = (void *)0x0;
            }
            else {
              pvVar14 = _calloc(sVar13,8);
              if (pvVar14 == (void *)0x0) {
                pvVar14 = (void *)0x0;
              }
              else {
                _CFDictionaryGetKeysAndValues(*(undefined8 *)(local_38 + 0x18),local_50,pvVar14);
                local_98 = _CFArrayGetCount(lVar18);
                if (0 < (long)local_98) {
                  uVar16 = 0;
                  local_78 = pvVar14;
                  do {
                    lVar9 = _CFArrayGetValueAtIndex(lVar18,uVar16);
                    if (lVar9 != 0) {
                      lVar8 = _CFGetTypeID(lVar9);
                      lVar10 = _CFDictionaryGetTypeID();
                      if (lVar8 == lVar10) {
                        cVar3 = '\0';
                        lVar8 = 1;
                        do {
                          lVar18 = _CFDictionaryGetValue
                                             (lVar9,*(undefined8 *)((long)local_50 + lVar8 * 8 + -8)
                                             );
                          if ((lVar18 != 0) && (*(long *)((long)local_78 + lVar8 * 8 + -8) != 0)) {
                            cVar3 = _CFEqual(lVar18);
                          }
                          lVar18 = local_70;
                        } while ((cVar3 != '\0') &&
                                (bVar2 = lVar8 < (long)sVar13, lVar8 = lVar8 + 1, bVar2));
                        if ((cVar3 != '\0') &&
                           (lVar8 = _CFDictionaryGetValue(lVar9,&cf_Info), lVar8 != 0)) {
                          lVar10 = _CFGetTypeID(lVar8);
                          lVar11 = _CFDictionaryGetTypeID();
                          lVar18 = local_70;
                          if ((((lVar10 == lVar11) && (*(char *)(local_38 + 0x38) == '\0')) &&
                              (lVar10 = _CFDictionaryGetValue(lVar8,&cf_Variant), lVar10 != 0)) &&
                             ((local_48 == 0 ||
                              (lVar10 = _CFStringCompare(lVar10,local_48,0), lVar10 == 0)))) {
                            uVar7 = _CFDictionaryGetValue(lVar8,&cf_Variant);
                            _AMAuthInstallLog(4,
                                              "_AMAuthInstallBundleGetMatchingSoftwareCoprocessorBuildIdentity"
                                              ,"%s: Found variant: %@",
                                              "_AMAuthInstallBundleGetMatchingSoftwareCoprocessorBuildIdentity"
                                              ,uVar7);
                            lVar8 = local_48;
                            pvVar14 = local_78;
                            pcVar6 = local_40;
                            goto LAB_00284f3e;
                          }
                        }
                      }
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 != local_98);
                  lVar9 = 0;
                  lVar8 = local_48;
                  pvVar14 = local_78;
                  pcVar6 = local_40;
                  goto LAB_00284f3e;
                }
              }
            }
            lVar9 = 0;
            pcVar6 = local_40;
          }
LAB_00284f3e:
          _SafeFree(local_50);
          _SafeFree(pvVar14);
          if (lVar9 != 0) {
LAB_00284f58:
            cVar3 = _CFBooleanGetValue(local_60);
            lVar8 = local_38;
            if (cVar3 == '\0') {
              _SafeRelease(*(undefined8 *)(*(long *)(local_38 + 0x80) + 0x20));
              if (*(long *)(lVar8 + 0x80) == 0) {
                pcVar15 = "amai->bundleParameters is NULL";
                iVar5 = 0;
LAB_00285078:
                _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",pcVar15);
                goto LAB_002850eb;
              }
              lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x10);
              uVar7 = _CFGetAllocator(lVar8);
              if (lVar10 == 0) {
                lVar10 = _CFDictionaryCreateCopy(uVar7,lVar9);
                *(long *)(*(long *)(lVar8 + 0x80) + 0x20) = lVar10;
              }
              else {
                iVar5 = _AMAuthInstallSupportCreateMergedDictionary
                                  (uVar7,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0x80) + 0x10),
                                   *(long *)(lVar8 + 0x80) + 0x20);
                if (iVar5 != 0) goto LAB_00285125;
                lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x20);
              }
              lVar8 = local_38;
              puVar17 = local_90;
              if (lVar10 != 0) {
                uVar7 = _CFGetAllocator(local_38);
                uVar7 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                  (uVar7,lVar9,&cf_Info_DeviceClass);
                *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x68) = uVar7;
                _SavageSafeRetain(uVar7);
                lVar8 = *(long *)(*(long *)(lVar8 + 0x80) + 0x20);
                goto LAB_002850e0;
              }
            }
            else {
              _SafeRelease(*(undefined8 *)(*(long *)(local_38 + 0x80) + 0x28));
              lVar10 = local_38;
              puVar17 = local_90;
              if ((*(long *)(lVar8 + 0x80) == 0) || (*(long *)(*(long *)(lVar8 + 0x80) + 0x18) == 0)
                 ) {
                uVar7 = _CFGetAllocator(local_38);
                lVar8 = _CFDictionaryCreateCopy(uVar7,lVar9);
                *(long *)(*(long *)(lVar10 + 0x80) + 0x28) = lVar8;
              }
              else {
                uVar7 = _CFGetAllocator(local_38);
                iVar5 = _AMAuthInstallSupportCreateMergedDictionary
                                  (uVar7,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0x80) + 0x18),
                                   *(long *)(lVar10 + 0x80) + 0x28);
                if (iVar5 != 0) {
LAB_00285125:
                  pcVar15 = "failed to merge build identities";
                  goto LAB_00285078;
                }
                lVar8 = *(long *)(*(long *)(lVar10 + 0x80) + 0x28);
                puVar17 = local_90;
              }
              if (lVar8 != 0) {
LAB_002850e0:
                uVar7 = _CFRetain(lVar8);
                *puVar17 = uVar7;
                goto LAB_002850e9;
              }
            }
            iVar5 = 2;
            goto LAB_002850eb;
          }
        }
        lVar9 = *(long *)(local_38 + 0x10);
        if (lVar8 == 0) {
          _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                            "no variant published for this device (chipID=0x%08X boardID=0x%X secDom=%d bbChipId=0x%08X) in build manifest"
                            ,*(undefined4 *)(lVar9 + 8),*(undefined4 *)(lVar9 + 0xc),
                            *(undefined4 *)(lVar9 + 0x10),local_80);
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",
                            "variant \"%@\" isn\'t published for this device (chipID=0x%08X boardID=0x%X secDom=%d bbChipId=0x%08X) in build manifest"
                            ,lVar8,*(undefined4 *)(lVar9 + 8),*(undefined4 *)(lVar9 + 0xc),
                            *(undefined4 *)(lVar9 + 0x10),local_80);
        }
        iVar5 = 8;
        goto LAB_002850eb;
      }
      pcVar15 = "publishedVariants is not a CFArray";
    }
    _AMAuthInstallLog(3,"AMAuthInstallBundleCopyBuildIdentityForVariant",pcVar15);
    iVar5 = 7;
  }
  else {
    cVar3 = _CFBooleanGetValue(local_60);
    if (cVar3 == '\0') {
      lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 0x28);
      if (lVar8 == 0) goto LAB_00284915;
    }
    uVar7 = _CFRetain(lVar8);
    *param_4 = uVar7;
    lVar18 = 0;
LAB_002850e9:
    iVar5 = 0;
  }
LAB_002850eb:
  _SafeRelease(lVar18);
  _SafeRelease(local_88);
  _SafeRelease(pcVar6);
  _SafeRelease(local_68);
  return iVar5;
}

