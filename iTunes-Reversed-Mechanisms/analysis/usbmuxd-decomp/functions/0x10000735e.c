// rea decompile_all
// name: FUN_10000735e
// address: 0x10000735e
// body: available
// range: 0x10000735e-0x1000075de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000735e(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 local_34;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  lVar7 = _CFArrayCreateMutable(uVar2,0,PTR__kCFTypeArrayCallBacks_10001c050);
  if (lVar7 == 0) {
    iVar6 = -1;
  }
  else {
    if (DAT_1000212b0 != (long *)0x0) {
      uVar3 = *(undefined8 *)PTR__kCFBooleanTrue_10001c030;
      uVar4 = *(undefined8 *)PTR__kCFBooleanFalse_10001c028;
      plVar11 = DAT_1000212b0;
      do {
        plVar5 = (long *)*plVar11;
        lVar8 = _CFDictionaryCreateMutable
                          (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                           PTR__kCFTypeDictionaryValueCallBacks_10001c060);
        if (lVar8 == 0) goto LAB_1000075ac;
        lVar9 = _CFNumberCreate(uVar2,9,plVar11 + 2);
        if (lVar9 == 0) {
LAB_1000075b3:
          iVar6 = -1;
          goto LAB_1000075bb;
        }
        _CFDictionarySetValue(lVar8,PTR_cf_kLibUSBMuxVersion_100021180,lVar9);
        _CFRelease(lVar9);
        local_34 = (undefined4)plVar11[3];
        lVar9 = _CFNumberCreate(uVar2,9,&local_34);
        if (lVar9 == 0) goto LAB_1000075b3;
        _CFDictionarySetValue(lVar8,PTR_cf_ConnType_1000211e0,lVar9);
        _CFRelease(lVar9);
        if (plVar11[6] != 0) {
          _CFDictionarySetValue(lVar8,&cf_IDString);
        }
        if (plVar11[7] != 0) {
          _CFDictionarySetValue(lVar8,PTR_cf_ProgName_1000211b8);
        }
        if (plVar11[8] != 0) {
          _CFDictionarySetValue(lVar8,PTR_cf_BundleID_1000211c8);
        }
        if ((int)plVar11[9] != 0) {
          lVar9 = _CFNumberCreate(uVar2,9,plVar11 + 9);
          if (lVar9 != 0) {
            _CFDictionarySetValue(lVar8,PTR_cf_ProcessID_1000211c0,lVar9);
            _CFRelease(lVar9);
          }
        }
        uVar10 = uVar4;
        if ((char)plVar11[10] != '\0') {
          uVar10 = uVar3;
        }
        _CFDictionarySetValue(lVar8,&cf_Blacklisted,uVar10);
        _CFArrayAppendValue(lVar7);
        _CFRelease(lVar8);
        plVar11 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
    lVar8 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                       PTR__kCFTypeDictionaryValueCallBacks_10001c060);
    if (lVar8 == 0) {
LAB_1000075ac:
      iVar6 = -1;
    }
    else {
      _CFDictionaryAddValue(lVar8,PTR_cf_ListenerList_1000211d8,lVar7);
      iVar6 = FUN_100002e00(param_1,*(undefined4 *)(lVar1 + 0xc),lVar8);
      iVar6 = -(uint)(iVar6 != 0);
LAB_1000075bb:
      _CFRelease(lVar7);
      lVar7 = lVar8;
    }
    _CFRelease(lVar7);
  }
  return iVar6;
}

