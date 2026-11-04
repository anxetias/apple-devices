// rea decompile_all
// name: _AMAuthInstallBundleSetPropertiesWithBoardConfig
// address: 0x1a9163
// body: available
// range: 0x1a9163-0x1a94d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleSetPropertiesWithBoardConfig
              (undefined8 param_1,undefined8 param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6,long param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  char *pcVar11;
  long lVar12;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  int local_34;
  
  local_40 = 0;
  if (param_6 == 0 || param_7 == 0) {
    iVar3 = 1;
LAB_001a9197:
    lVar5 = 0;
  }
  else {
    iVar3 = _AMAuthInstallBundleCopyPublishedVariantsArray
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_6,&local_40);
    uVar4 = local_40;
    if (iVar3 != 0) {
      uVar4 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar3);
      lVar5 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBundleSetPropertiesWithBoardConfig",
                        "failed to find published variants in bundle: %@",uVar4);
      _AMAuthInstallLog(8,"AMAuthInstallBundleSetPropertiesWithBoardConfig","bundle: %@",param_6);
      goto LAB_001a9481;
    }
    local_48 = param_5;
    lVar5 = _CFArrayGetCount(local_40);
    if (0 < lVar5) {
      local_34 = 8;
      lVar12 = 0;
      local_44 = param_3;
      do {
        lVar6 = _CFArrayGetValueAtIndex(uVar4,lVar12);
        if (lVar6 == 0) {
          _AMAuthInstallBundleSetPropertiesWithBoardConfig_cold_2();
LAB_001a94a9:
          pcVar11 = 
          "no baseband chipid found in identity, but baseband returned snum. Can\'t preflight baseband personalization."
          ;
LAB_001a94b0:
          _AMAuthInstallLog(5,"AMAuthInstallBundleSetPropertiesWithBoardConfig",pcVar11);
LAB_001a94c3:
          iVar3 = 0;
          goto LAB_001a9481;
        }
        lVar7 = _CFDictionaryGetValue(lVar6,&cf_Info);
        if (lVar7 != 0) {
          lVar7 = _CFDictionaryGetValue(lVar7,&cf_DeviceClass);
          if (lVar7 != 0) {
            lVar7 = _CFStringCompare(param_7,lVar7,1);
            if (lVar7 == 0) {
              lVar7 = _CFDictionaryGetValue(lVar6,&cf_ApBoardID);
              local_34 = 7;
              if (lVar7 != 0) {
                lVar8 = _CFDictionaryGetValue(lVar6,&cf_ApChipID);
                if (lVar8 != 0) {
                  lVar9 = _CFDictionaryGetValue(lVar6,&cf_BbChipID);
                  lVar6 = _CFDictionaryGetValue(lVar6,&cf_ApSecurityDomain);
                  cVar2 = __CFStringToUInt32(lVar7,&local_58);
                  local_34 = 3;
                  if (cVar2 != '\0') {
                    cVar2 = __CFStringToUInt32(lVar8,&local_54);
                    if (cVar2 != '\0') {
                      if (lVar9 != 0) {
                        cVar2 = __CFStringToUInt32(lVar9,&local_50);
                        if (cVar2 == '\0') goto LAB_001a929b;
                      }
                      if (lVar6 != 0) {
                        cVar2 = __CFStringToUInt32(lVar6,&local_4c);
                        if (cVar2 == '\0') goto LAB_001a929b;
                      }
                      lVar5 = _CFDictionaryCreateMutable
                                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar5 == 0) {
                        iVar3 = 2;
                      }
                      else {
                        __CFDictionarySetInteger64(lVar5,&cf_ECID,param_2);
                        __CFDictionarySetInteger32(lVar5,&cf_ApChipID,local_54);
                        __CFDictionarySetInteger32(lVar5,&cf_ApBoardID,local_58);
                        uVar1 = local_44;
                        uVar10 = 1;
                        if (lVar6 != 0) {
                          uVar10 = local_4c;
                        }
                        __CFDictionarySetInteger32(lVar5,&cf_ApSecurityDomain,uVar10);
                        __CFDictionarySetBoolean(lVar5,&cf_ApProductionMode,uVar1 & 0xff);
                        iVar3 = _AMAuthInstallApSetParameters(param_1,lVar5);
                        if (iVar3 == 0) {
                          if (param_4 != 0) {
                            if (lVar9 == 0) goto LAB_001a94a9;
                            iVar3 = _AMAuthInstallBasebandSetFusings
                                              (param_1,local_50,local_48,param_4);
                            if (iVar3 != 0) {
                              pcVar11 = "baseband apparently doesn\'t support personalization";
                              goto LAB_001a94b0;
                            }
                          }
                          goto LAB_001a94c3;
                        }
                        _AMAuthInstallBundleSetPropertiesWithBoardConfig_cold_1();
                      }
                      goto LAB_001a9481;
                    }
                  }
                }
              }
            }
          }
        }
LAB_001a929b:
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      iVar3 = local_34;
      if (local_34 != 8) goto LAB_001a9197;
    }
    lVar5 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallBundleSetPropertiesWithBoardConfig",
                      "failed to find any usable references to \"%@\" in build manifest",param_7);
    iVar3 = 8;
  }
LAB_001a9481:
  _SafeRelease(lVar5);
  _SafeRelease(local_40);
  return iVar3;
}

