// rea decompile_all
// name: _AMAuthInstallApImg4StitchRestoreInfoWithAMAI
// address: 0x1a113e
// body: available
// range: 0x1a113e-0x1a140b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4StitchRestoreInfoWithAMAI
              (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar9 = 0;
  local_40 = 0;
  local_38 = 0;
  iVar3 = 1;
  if (param_2 != 0) {
    lVar8 = 0;
    if (param_3 == 0) goto LAB_001a1390;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar8 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (param_1 != 0) {
      lVar9 = 0x10;
      do {
        if (*(long *)(&UNK_0044b6d0 + lVar9) == 0) {
          _AMAuthInstallApImg4StitchRestoreInfoWithAMAI_cold_3();
LAB_001a13c9:
          _AMAuthInstallApImg4StitchRestoreInfoWithAMAI_cold_2();
LAB_001a13ce:
          _AMAuthInstallApImg4StitchRestoreInfoWithAMAI_cold_1();
          goto LAB_001a13d3;
        }
        lVar5 = _CFStringCompare(*(long *)(&UNK_0044b6d0 + lVar9),param_1,0);
        if (lVar5 == 0) {
          plVar2 = *(long **)((long)&_kObjectDefaultIM4RTagMap + lVar9);
          if (*plVar2 == 0) goto LAB_001a13c9;
          if ((code *)plVar2[1] != (code *)0x0) {
            lVar5 = (*(code *)plVar2[1])(param_5,param_3);
            if (lVar5 != 0) {
              _CFDictionarySetValue(lVar8,*plVar2,lVar5);
              _CFRelease(lVar5);
            }
            goto LAB_001a1223;
          }
          goto LAB_001a13ce;
        }
LAB_001a1223:
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x70);
    }
    if (lVar8 != 0) {
      if (param_4 != 0) {
        _CFDictionaryApplyFunction(param_4,__merge_dictionary,lVar8);
      }
      if (param_1 == 0) {
        lVar9 = 0;
      }
      else {
        uVar6 = _AMAuthInstallApImg4GetEntryNameForType(param_1);
        lVar5 = _CFStringCompare(param_1,uVar6,0);
        lVar9 = 0;
        if (lVar5 != 0) {
          lVar5 = _CFStringCreateWithFormat(uVar1,0,&cf____TBM,uVar6);
          lVar9 = 0;
          if ((lVar5 != 0) &&
             (lVar7 = _CFDictionaryGetValue(param_3,lVar5), lVar9 = lVar5, lVar7 != 0)) {
            lVar5 = _CFDictionaryGetValue(lVar7,&cf_ucon);
            lVar7 = _CFDictionaryGetValue(lVar7,&cf_ucer);
            if (lVar5 != 0) {
              _CFDictionaryAddValue(lVar8,&cf_ucon,lVar5);
            }
            if (lVar7 != 0) {
              _CFDictionaryAddValue(lVar8,&cf_ucer,lVar7);
            }
          }
        }
      }
      lVar5 = _CFDictionaryGetCount(lVar8);
      if (lVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = _AMAuthInstallSupportCreateDataFromMappedFileURL(0,&local_40,param_2);
        if (iVar3 == 0) {
          iVar3 = _AMAuthInstallApImg4EncodeRestoreInfo(local_40,lVar8,&local_38);
          if (iVar3 == 0) {
            iVar4 = _AMAuthInstallSupportWriteDataToFileURL(0,local_38,param_2,1);
            iVar3 = 0;
            if (iVar4 != 0) {
              _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchRestoreInfoWithAMAI",
                                "failed to write stitched data to %@",param_2);
              iVar3 = iVar4;
            }
          }
          else {
            _AMAuthInstallApImg4StitchRestoreInfoWithAMAI_cold_4();
          }
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchRestoreInfoWithAMAI",
                            "failed to read data from %@",param_2);
        }
      }
      goto LAB_001a1390;
    }
LAB_001a13d3:
    iVar3 = 2;
  }
  lVar9 = 0;
  lVar8 = 0;
LAB_001a1390:
  _SafeRelease(lVar8);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  _SafeRelease(lVar9);
  return iVar3;
}

