// rea decompile_all
// name: ___AFCCreateDictionaryOrArrayFromData
// address: 0x2698d3
// body: available
// range: 0x2698d3-0x269b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
___AFCCreateDictionaryOrArrayFromData
          (undefined8 param_1,void *param_2,long param_3,char param_4,undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  void *pvVar11;
  
  puVar2 = PTR__kCFTypeArrayCallBacks_004411a8;
  if (param_2 == (void *)0x0) {
    return 0xe8004007;
  }
  if (param_5 == (undefined8 *)0x0) {
    return 0xe8004007;
  }
  lVar4 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
  lVar5 = _CFArrayCreateMutable(0,0,puVar2);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    if (0 < param_3) {
      lVar7 = 0;
      bVar10 = false;
      pvVar11 = param_2;
      do {
        pvVar6 = _memchr(pvVar11,0,param_3 - lVar7);
        if ((pvVar6 == (void *)0x0) ||
           (lVar7 = _CFStringCreateWithBytes
                              (param_1,pvVar11,(long)pvVar6 - (long)pvVar11,0x8000100,0), lVar7 == 0
           )) {
          uVar3 = ___AFCSetErrorResult();
          goto LAB_00269ae9;
        }
        lVar8 = lVar5;
        if (!bVar10) {
          lVar8 = lVar4;
        }
        if (param_4 == '\0') {
          lVar8 = lVar5;
        }
        _CFArrayAppendValue(lVar8);
        _CFRelease(lVar7);
        pvVar11 = (void *)((long)pvVar6 + 1);
        bVar10 = (bool)(bVar10 ^ 1);
        lVar7 = (long)pvVar11 - (long)param_2;
      } while (lVar7 < param_3);
    }
    if (param_4 == '\0') {
      uVar3 = 0;
      uVar9 = _CFArrayCreateCopy(0,lVar5);
      *param_5 = uVar9;
      goto LAB_00269ae9;
    }
    lVar7 = _CFArrayGetCount(lVar4);
    lVar8 = _CFArrayGetCount(lVar5);
    if (lVar7 == lVar8) {
      if (lVar7 == 0) {
        uVar3 = 0;
        uVar9 = _CFDictionaryCreate(0,0,0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        *param_5 = uVar9;
        goto LAB_00269ae9;
      }
      lVar8 = _CFArrayGetCount(lVar4);
      lVar8 = _CFAllocatorAllocate(0,lVar8 << 4,0);
      if (lVar8 != 0) {
        _CFArrayGetValues(lVar4,0,lVar7,lVar8);
        uVar9 = _CFArrayGetCount(lVar5);
        lVar1 = lVar8 + lVar7 * 8;
        _CFArrayGetValues(lVar5,0,uVar9,lVar1);
        uVar9 = _CFDictionaryCreate(0,lVar8,lVar1,lVar7,
                                    PTR__kCFCopyStringDictionaryKeyCallBacks_00441130,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        *param_5 = uVar9;
        _CFAllocatorDeallocate(0,lVar8);
        uVar3 = 0;
        goto LAB_00269ae9;
      }
    }
  }
  uVar3 = ___AFCSetErrorResult();
LAB_00269ae9:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return uVar3;
}

