// rea decompile_all
// name: __AMAuthInstallBundleCreateServerRequestDictionary
// address: 0x287f6a
// body: available
// range: 0x287f6a-0x288b96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __AMAuthInstallBundleCreateServerRequestDictionary
                 (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long *param_7,long *param_8)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  cfstringStruct *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  long lVar22;
  ulong uVar23;
  byte bVar24;
  char *pcStack_150;
  long local_138;
  long local_f0;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  char local_49;
  long local_48;
  char *local_40;
  byte local_31;
  
  local_c8 = 0;
  local_78 = 0;
  local_40 = (char *)0x1;
  local_48 = param_2;
  pcVar17 = local_40;
  if (((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) goto LAB_00288adf;
  lVar19 = 0;
  lVar10 = 0;
  lVar9 = 0;
  local_c0 = param_6;
  if (param_7 == (long *)0x0) goto LAB_00288b1f;
  lVar5 = _CFDictionaryGetValue(param_3,&cf_Manifest);
  pcVar17 = "\x01\x03";
  if ((lVar5 == 0) ||
     ((local_c0 != 0 && (local_138 = _CFDictionaryGetValue(local_c0,&cf_Manifest), local_138 == 0)))
     ) {
LAB_00288adf:
    local_40 = pcVar17;
    lVar9 = 0;
    lVar19 = 0;
  }
  else {
    lVar6 = _CFDictionaryGetValue(param_4,&cf_Personalized);
    pcVar17 = "\x03";
    if ((lVar6 == 0) || (lVar7 = _CFDictionaryGetValue(param_4,&cf_Manifest), lVar7 == 0))
    goto LAB_00288adf;
    uVar8 = _CFGetAllocator(param_1);
    lVar19 = 0;
    lVar9 = _CFDictionaryCreateMutable
                      (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar9 == 0) {
      lVar9 = 0;
      lVar10 = 0;
      pcVar17 = (char *)0x2;
      goto LAB_00288b1f;
    }
    if (local_c0 == 0) {
      lVar19 = 0;
LAB_0028815e:
      local_b0 = param_4;
      local_70 = lVar19;
      local_68 = lVar9;
      cVar2 = _AMAuthInstallApIsImg4(param_1);
      pcVar16 = &cf_amai_apimg4ticket_der;
      if (cVar2 == '\0') {
        pcVar16 = &cf_amai_apticket_der;
      }
      uVar8 = _CFArrayGetCount(lVar6);
      local_b8 = 0;
      cVar2 = _CFArrayContainsValue(lVar6,0,uVar8,pcVar16);
      bVar24 = 0;
      local_40 = "False";
      if (cVar2 == '\0') {
        if ((*(long *)(*(long *)(param_1 + 0x10) + 0x18) == 0) &&
           (*(char *)(param_1 + 0x1b1) == '\0')) {
          local_b8 = 0;
          bVar24 = 0;
          local_40 = "False";
        }
        else {
          local_b8 = CONCAT71((int7)((ulong)*(long *)(param_1 + 0x10) >> 8),1);
          bVar24 = 1;
          local_40 = "True";
        }
      }
      uVar8 = _CFArrayGetCount(lVar6);
      local_90 = 0;
      cVar2 = _CFArrayContainsValue(lVar6,0,uVar8,pcVar16);
      pcVar17 = "True";
      if (cVar2 == '\0') {
        pcVar17 = "False";
      }
      pcVar18 = "True";
      if (*(long *)(*(long *)(param_1 + 0x10) + 0x18) == 0) {
        pcVar18 = "False";
      }
      _AMAuthInstallLog(7,"_AMAuthInstallBundleCreateServerRequestDictionary",
                        "ticketPath %@ , withApTicket is %s,  (!%s && ( %s || %s))",pcVar16,local_40
                        ,pcVar17,pcVar18);
      lVar19 = local_48;
      local_31 = bVar24 ^ 1;
      *(byte *)(param_1 + 0x20) = local_31;
      lVar10 = 0;
      if (local_48 != 0) {
        lVar11 = _CFArrayGetCount(local_48);
        if (lVar11 < 1) {
          local_90 = 0;
          lVar10 = 0;
        }
        else {
          uVar8 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
          uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          local_a8 = &cf_Digest;
          local_40 = (char *)0x2;
          local_90 = 0;
          lVar20 = 0;
          lVar10 = 0;
          local_58 = param_1;
          do {
            lVar12 = _CFArrayGetValueAtIndex(lVar19,lVar20);
            local_88 = _CFStringCompare(lVar12,&cf_BasebandFirmware,0);
            uVar13 = uVar8;
            if ((lVar12 != 0) &&
               (lVar9 = _CFStringFind(lVar12,&cf_RecoveryOS,0), uVar13 = uVar1, lVar9 == -1)) {
              uVar13 = uVar8;
            }
            local_98 = uVar13;
            cVar2 = _CFBooleanGetValue();
            if (cVar2 == '\0') {
              lVar14 = _CFDictionaryGetValue(lVar5,lVar12);
              lVar9 = 0;
            }
            else {
              uVar13 = _CFGetAllocator(local_58);
              lVar9 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar13,lVar12);
              lVar14 = _CFDictionaryGetValue(local_138,lVar9);
            }
            if (lVar14 == 0) {
              _AMAuthInstallLog(6,"_AMAuthInstallBundleCreateServerRequestDictionary",
                                "entry \"%@\" not part of manifest, skipping",lVar12);
              param_1 = local_58;
            }
            else {
              local_80 = lVar9;
              lVar15 = _CFDictionaryGetValue(lVar14,&cf_Info);
              lVar19 = local_48;
              if (lVar15 != 0) {
                local_a0 = 0;
                _SafeRelease(lVar10);
                lVar22 = local_58;
                uVar13 = _CFGetAllocator(local_58);
                lVar10 = _CFDictionaryCreateMutableCopy(uVar13,0,lVar14);
                lVar19 = local_70;
                lVar9 = local_68;
                pcVar17 = local_40;
                if (lVar10 == 0) goto LAB_00288b1f;
                uVar3 = _AMAuthInstallBundleProcessRulesWithEntryDict(lVar22,lVar10);
                if (uVar3 != 0) {
                  pcStack_150 = (char *)(ulong)uVar3;
                  pcVar17 = "failed to process image rules";
                  goto LAB_00288af8;
                }
                lVar19 = _CFDictionaryGetValue(lVar15,&cf_Personalize);
                lVar22 = local_80;
                if ((lVar19 != 0) && (cVar2 = _CFBooleanGetValue(lVar19), cVar2 == '\0')) {
                  cVar2 = _CFBooleanGetValue(local_98);
                  if (cVar2 != '\0') {
                    lVar19 = _CFDictionaryGetValue(local_d0,lVar22);
                    pcVar17 = "skipping \"%@\" entry";
                    if (lVar19 == 0 && local_31 == 0) {
                      uVar13 = _CFGetAllocator(local_58);
                      uVar13 = _CFDataCreate(uVar13,0,0);
                      _CFDictionaryAddValue(lVar10,local_a8,uVar13);
                      _CFDictionarySetValue(local_70,lVar22,lVar10);
                      _CFRelease(uVar13);
                      pcVar17 = "personalizing \"%@\"";
                    }
                    _AMAuthInstallLog(6,"_AMAuthInstallBundleCreateServerRequestDictionary",pcVar17,
                                      lVar22);
                    goto LAB_002884e3;
                  }
                  lVar19 = _CFDictionaryGetValue(lVar7,lVar12);
                  param_1 = local_58;
                  if (lVar19 == 0 && local_31 == 0) {
                    uVar13 = _CFGetAllocator(local_58);
                    uVar13 = _CFDataCreate(uVar13,0,0);
                    _CFDictionaryAddValue(lVar10,local_a8,uVar13);
                    _CFDictionarySetValue(local_68,lVar12,lVar10);
                    _CFRelease(uVar13);
                    _AMAuthInstallLog(6,"_AMAuthInstallBundleCreateServerRequestDictionary",
                                      "personalizing \"%@\"",lVar12);
                    lVar19 = local_48;
                    goto LAB_0028882f;
                  }
                  uVar13 = 6;
                  pcVar17 = "skipping \"%@\" entry";
LAB_00288735:
                  _AMAuthInstallLog(uVar13,"_AMAuthInstallBundleCreateServerRequestDictionary",
                                    pcVar17,lVar12);
                  param_1 = local_58;
                  lVar19 = local_48;
                  goto LAB_0028882f;
                }
LAB_002884e3:
                if (local_88 == 0) {
                  local_60 = lVar12;
                  pcVar17 = (char *)_AMAuthInstallBundleCopyNextBasebandComponentName
                                              (local_58,&local_a0);
                  lVar15 = local_a0;
                  lVar19 = local_70;
                  lVar9 = local_68;
                  if ((int)pcVar17 != 0) goto LAB_00288b1f;
LAB_0028852e:
                  if (lVar15 != 0) {
                    cVar2 = _CFBooleanGetValue();
                    lVar19 = local_48;
                    if (cVar2 == '\0') {
                      cVar2 = _CFDictionaryContainsKey(lVar7,local_60);
                      lVar9 = lVar6;
                      if (cVar2 != '\0') goto LAB_002885f9;
LAB_002886d1:
                      bVar21 = local_88 != 0;
                      uVar13 = _CFArrayGetCount(lVar9);
                      cVar2 = _CFArrayContainsValue(lVar9,0,uVar13,lVar15);
                      lVar12 = local_60;
                      lVar22 = local_80;
                      lVar19 = local_48;
                      if ((cVar2 == '\0') || (bVar21 && local_31 == 0)) goto LAB_0028875b;
                    }
                    else {
                      cVar2 = _CFDictionaryContainsKey(local_d0,lVar22);
                      lVar9 = local_f0;
                      if (cVar2 == '\0') goto LAB_002886d1;
LAB_002885f9:
                      lVar12 = local_60;
                      if ((local_88 == 0 | local_31) != 1) goto LAB_0028875b;
                    }
                    _AMAuthInstallLog(7,"_AMAuthInstallBundleCreateServerRequestDictionary",
                                      "entry \"%@\" has been previously personalized; skipping it",
                                      local_60);
                    _SafeRelease(lVar15);
                    param_1 = local_58;
                    goto LAB_0028882f;
                  }
                  lVar15 = 0;
                  lVar12 = local_60;
                  lVar19 = local_48;
                }
                else {
                  cVar2 = _CFDictionaryContainsKey(lVar10,&cf_PartialDigest);
                  if (cVar2 != '\0') {
                    local_60 = lVar12;
                    lVar15 = _CFDictionaryGetValue(lVar15,&cf_Path);
                    local_a0 = lVar15;
                    _SavageSafeRetain(lVar15);
                    goto LAB_0028852e;
                  }
                  if (bVar24 == 0) {
                    uVar13 = 7;
                    pcVar17 = "not personalizing \"%@\"";
                    goto LAB_00288735;
                  }
                  lVar15 = 0;
                  lVar19 = local_48;
                }
LAB_0028875b:
                _SafeRelease(lVar15);
                lVar9 = _CFDictionaryGetValue(lVar10,local_a8);
                if (lVar9 != 0) {
                  _AMAuthInstallLog(7,"_AMAuthInstallBundleCreateServerRequestDictionary",
                                    "personalizing \"%@\" Digest = \"%@\"",lVar12,lVar9);
                }
                if (local_88 == 0) {
                  cVar2 = _CFBooleanGetValue(local_98);
                  if ((param_5 == 0) || (cVar2 == '\x01')) {
                    lVar19 = local_70;
                    lVar9 = local_68;
                    pcVar17 = (char *)0x1;
                  }
                  else {
                    uVar3 = _AMAuthInstallBundleCopyFullPathForBuildIdentityKey
                                      (local_58,param_5,&cf_BasebandFirmware,lVar14,&local_c8);
                    if (uVar3 == 0) {
                      local_90 = local_c8;
                      if (local_c8 != 0) goto LAB_002887fa;
                      pcVar17 = "failed to create bbfwURL";
                      pcStack_150 = "";
                    }
                    else {
                      pcVar17 = "failed to find baseband firmware path";
                      pcStack_150 = (char *)(ulong)uVar3;
                    }
LAB_00288af8:
                    lVar9 = local_68;
                    lVar19 = local_70;
                    _AMAuthInstallLog(3,"_AMAuthInstallBundleCreateServerRequestDictionary",pcVar17)
                    ;
                    pcVar17 = pcStack_150;
                  }
                  goto LAB_00288b1f;
                }
LAB_002887fa:
                cVar2 = _CFBooleanGetValue(local_98);
                lVar9 = local_68;
                if (cVar2 != '\0') {
                  lVar12 = lVar22;
                  lVar9 = local_70;
                }
                _CFDictionarySetValue(lVar9,lVar12,lVar10);
              }
              param_1 = local_58;
              _SafeRelease(local_80);
            }
LAB_0028882f:
            lVar20 = lVar20 + 1;
          } while (lVar11 != lVar20);
        }
      }
      lVar9 = local_68;
      lVar19 = local_70;
      uVar23 = local_b8 & 0xff;
      local_48 = lVar10;
      if ((local_70 == 0) || (lVar10 = _CFDictionaryGetCount(local_70), lVar10 == 0)) {
LAB_002888f5:
        lVar5 = _CFDictionaryGetCount(lVar9);
        __AMAuthInstallBundlePopulateManifestProperties(param_1,param_3,lVar9);
        pcVar17 = (char *)_AMAuthInstallApServerRequestAddRequiredTags(param_1,lVar9,uVar23);
        lVar10 = local_48;
        if (((int)pcVar17 != 0) ||
           (pcVar17 = (char *)_AMAuthInstallBasebandSupportsServerSigning(param_1,&local_a0),
           lVar10 = local_48, (int)pcVar17 != 0)) goto LAB_00288b1f;
        if (((char)local_a0 != '\0') &&
           (((cVar2 = _AMAuthInstallBasebandPersonalizationEnabled(param_1), cVar2 != '\0' &&
             (local_90 != 0)) &&
            (local_40 = (char *)_AMAuthInstallBasebandServerRequestAddRequiredTags
                                          (param_1,lVar9,local_90), (int)local_40 != 0)))) {
          _AMAuthInstallLog(3,"_AMAuthInstallBundleCreateServerRequestDictionary",
                            "%s: missing required baseband parameters");
          pcVar17 = local_40;
          goto LAB_00288b1f;
        }
        if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) != 0))
        {
          local_49 = '\x01';
          iVar4 = _AMAuthInstallVinylIsLegacyChipId(param_1);
          if (((iVar4 == 0) && (local_49 == '\0')) &&
             (((lVar10 = _CFDictionaryGetValue(lVar9,&cf_eUICC_Gold), lVar10 != 0 ||
               (lVar10 = _CFDictionaryGetValue(lVar9,&cf_eUICC_Main), lVar10 != 0)) &&
              (pcVar17 = (char *)_AMAuthInstallVinylServerRequestAddRequiredTags(param_1,lVar9,0),
              lVar10 = local_48, (int)pcVar17 != 0)))) goto LAB_00288b1f;
        }
        lVar10 = _CFDictionaryGetCount(lVar9);
        cVar2 = (**(code **)(param_1 + 0x1b8))(param_1,lVar9,local_b0,&local_78);
        if (cVar2 != '\0') {
          lVar6 = _CFDictionaryGetCount(lVar9);
          if ((lVar5 == 0) && (lVar6 == lVar10)) {
            local_40 = (char *)0x0;
            _AMAuthInstallLog(6,"_AMAuthInstallBundleCreateServerRequestDictionary",
                              "nothing to be done");
            lVar10 = local_48;
            pcVar17 = local_40;
          }
          else {
            uVar8 = _CFGetAllocator(param_1);
            lVar5 = _CFPropertyListCreateDeepCopy(uVar8,lVar9,2);
            *param_7 = lVar5;
            lVar10 = local_48;
            pcVar17 = (char *)(ulong)((uint)(lVar5 == 0) * 2);
          }
          goto LAB_00288b1f;
        }
      }
      else {
        __AMAuthInstallBundlePopulateManifestProperties(param_1,local_c0,lVar19);
        pcVar17 = (char *)_AMAuthInstallApServerRequestAddRequiredTagsWithRecoveryOS
                                    (param_1,lVar19,uVar23,1);
        lVar10 = local_48;
        if ((int)pcVar17 != 0) goto LAB_00288b1f;
        cVar2 = (**(code **)(param_1 + 0x1b8))(param_1,lVar9,local_b0,&local_78);
        if (cVar2 != '\0') {
          uVar8 = _CFGetAllocator(param_1);
          lVar10 = _CFPropertyListCreateDeepCopy(uVar8,lVar19,2);
          *param_8 = lVar10;
          if (lVar10 == 0) {
            pcStack_150 = (char *)0x2;
            lVar10 = local_48;
            pcVar17 = pcStack_150;
            goto LAB_00288b1f;
          }
          goto LAB_002888f5;
        }
      }
      _AMAuthInstallLog(3,"_AMAuthInstallBundleCreateServerRequestDictionary",
                        "failed to add updater tags %@",local_78);
      pcVar17 = (char *)_CFErrorGetCode(local_78);
      lVar10 = local_48;
      goto LAB_00288b1f;
    }
    local_40 = "\x03";
    uVar8 = _CFGetAllocator(param_1);
    lVar19 = _CFDictionaryCreateMutable
                       (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar19 == 0) {
      lVar19 = 0;
      lVar10 = 0;
      pcVar17 = (char *)0x2;
      goto LAB_00288b1f;
    }
    lVar10 = _CFDictionaryGetValue(param_4,&cf_RecoveryOS);
    if (((lVar10 != 0) &&
        (local_f0 = _CFDictionaryGetValue(param_4,&cf_Personalized), local_f0 != 0)) &&
       (local_d0 = _CFDictionaryGetValue(param_4,&cf_Manifest), local_d0 != 0)) goto LAB_0028815e;
  }
  lVar10 = 0;
  pcVar17 = local_40;
LAB_00288b1f:
  local_40 = pcVar17;
  _SafeRelease(local_c8);
  _SafeRelease(lVar9);
  _SafeRelease(lVar19);
  _SafeRelease(lVar10);
  _SafeRelease(local_78);
  return local_40;
}

