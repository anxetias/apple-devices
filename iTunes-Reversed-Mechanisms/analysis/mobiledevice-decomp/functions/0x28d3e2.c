// rea decompile_all
// name: _AMAuthInstallGetFirstVariantInBundle
// address: 0x28d3e2
// body: available
// range: 0x28d3e2-0x28d81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallGetFirstVariantInBundle(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  long lVar14;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_60 = 0;
  local_58 = &cf_ApBoardID;
  local_50 = &cf_ApChipID;
  local_48 = &cf_ApSecurityDomain;
  iVar5 = 1;
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if ((param_2 != 0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
      uVar1 = *(undefined4 *)(lVar7 + 8);
      uVar2 = *(undefined4 *)(lVar7 + 0xc);
      uVar3 = *(undefined4 *)(lVar7 + 0x10);
      local_40 = param_1;
      if (*(long *)(lVar7 + 0x90) != 0) {
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        local_50 = (cfstringStruct *)
                   _CFStringCreateWithFormat(uVar6,0,&cf______,*(long *)(lVar7 + 0x90),&cf_ChipID);
        lVar14 = local_40;
        if (local_50 == (cfstringStruct *)0x0) {
          lVar14 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle","failed chipKey allocation");
          iVar5 = 99;
          local_50 = (cfstringStruct *)0x0;
          goto LAB_0028d6fd;
        }
        local_58 = (cfstringStruct *)
                   _CFStringCreateWithFormat
                             (uVar6,0,&cf______,*(undefined8 *)(*(long *)(local_40 + 0x10) + 0x90),
                              &cf_BoardID);
        if (local_58 == (cfstringStruct *)0x0) {
          lVar14 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle","failed boardKey allocation");
          iVar5 = 99;
          local_58 = (cfstringStruct *)0x0;
          goto LAB_0028d6fd;
        }
        local_48 = (cfstringStruct *)
                   _CFStringCreateWithFormat
                             (uVar6,0,&cf______,*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x90),
                              &cf_SecurityDomain);
        if (local_48 == (cfstringStruct *)0x0) {
          lVar14 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle","failed secdomKey allocation");
          iVar5 = 99;
          local_48 = (cfstringStruct *)0x0;
          goto LAB_0028d6fd;
        }
      }
      uVar6 = _CFGetAllocator(local_40);
      iVar5 = _AMAuthInstallBundleCopyPublishedVariantsArray(uVar6,param_2,&local_60);
      lVar14 = local_60;
      if (iVar5 == 0) {
        if (local_60 == 0) {
          pcVar12 = "AMAuthInstallBundleCopyPublishedVariantsArray returned NULL";
          lVar14 = 0;
        }
        else {
          lVar7 = _CFGetTypeID(local_60);
          lVar8 = _CFArrayGetTypeID();
          if (lVar7 == lVar8) {
            lVar7 = _CFArrayGetCount(lVar14);
            local_38 = 0xffffffff;
            if (*(char *)(*(long *)(local_40 + 0x10) + 0x60) == '\0') {
              if (*(long *)(local_40 + 0x30) == 0) {
                local_34 = 0;
                _AMAuthInstallLog(7,"AMAuthInstallGetFirstVariantInBundle",
                                  "No baseband chipid reported. Will match Build Identity based on ap chipid, boardid, and secdomain only."
                                 );
              }
              else {
                local_38 = *(undefined4 *)(*(long *)(local_40 + 0x30) + 4);
                local_34 = (undefined4)CONCAT71((uint7)(uint3)((uint)local_38 >> 8),1);
              }
            }
            else {
              local_34 = 0;
            }
            if (0 < lVar7) {
              lVar8 = 0;
              do {
                lVar9 = _CFArrayGetValueAtIndex(lVar14,lVar8);
                if (lVar9 != 0) {
                  lVar10 = _CFGetTypeID(lVar9);
                  lVar11 = _CFDictionaryGetTypeID();
                  if ((((lVar10 == lVar11) &&
                       (cVar4 = _AMAuthInstallSupportCompareStringToInt32(lVar9,local_58,uVar2),
                       cVar4 != '\0')) &&
                      (cVar4 = _AMAuthInstallSupportCompareStringToInt32(lVar9,local_50,uVar1),
                      cVar4 != '\0')) &&
                     ((((lVar10 = _CFDictionaryGetValue(lVar9,local_48), lVar10 == 0 ||
                        (cVar4 = _AMAuthInstallSupportCompareStringToInt32(lVar9,local_48,uVar3),
                        cVar4 != '\0')) &&
                       (((char)local_34 == '\0' ||
                        (cVar4 = _AMAuthInstallSupportCompareStringToInt32
                                           (lVar9,&cf_BbChipID,local_38), cVar4 != '\0')))) &&
                      (lVar9 = _CFDictionaryGetValue(lVar9,&cf_Info), lVar9 != 0)))) {
                    lVar10 = _CFGetTypeID(lVar9);
                    lVar11 = _CFDictionaryGetTypeID();
                    if (lVar10 == lVar11) {
                      pcVar13 = &cf_RestoreBehavior;
                      if (*(char *)(local_40 + 0x38) == '\0') {
                        pcVar13 = &cf_Variant;
                      }
                      lVar9 = _CFDictionaryGetValue(lVar9,pcVar13);
                      if (lVar9 != 0) {
                        uVar6 = _SavageSafeRetain(lVar9);
                        *param_3 = uVar6;
                        iVar5 = 0;
                        goto LAB_0028d6fd;
                      }
                    }
                  }
                }
                lVar8 = lVar8 + 1;
              } while (lVar7 != lVar8);
            }
            lVar7 = *(long *)(local_40 + 0x10);
            _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle",
                              "no variant published for this device (chipID=0x%08X boardID=0x%X secDom=%d bbChipId=0x%08X) in build manifest"
                              ,*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0xc),
                              *(undefined4 *)(lVar7 + 0x10),local_38);
            iVar5 = 8;
            goto LAB_0028d6fd;
          }
          pcVar12 = "publishedVariants is not a CFArray";
        }
        _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle",pcVar12);
        iVar5 = 7;
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallGetFirstVariantInBundle",
                          "AMAuthInstallBundleCopyPublishedVariantsArray failed");
        lVar14 = local_60;
      }
    }
  }
LAB_0028d6fd:
  _SafeRelease(lVar14);
  _SafeRelease(local_58);
  _SafeRelease(local_50);
  _SafeRelease(local_48);
  return iVar5;
}

