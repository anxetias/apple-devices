// rea decompile_all
// name: FUN_10000c7be
// address: 0x10000c7be
// body: available
// range: 0x10000c7be-0x10000c958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000c954 to 0x100013485 _errx (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c7be(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = -1;
  sVar6 = 0xfffffffffffffff8;
  puVar7 = &DAT_100013fd0;
  do {
    sVar6 = sVar6 + 8;
    piVar1 = &DAT_100013fd4 + lVar9;
    lVar9 = lVar9 + 1;
  } while (*piVar1 != 0);
  pvVar3 = _malloc(sVar6);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  lVar4 = _IOServiceMatching("IOUSBDevice");
  if (lVar4 == 0) {
    iVar2 = FUN_100010fca();
  }
  else {
    uVar5 = _CFNumberCreate(0,3,&DAT_100013fc0);
    _CFDictionarySetValue(lVar4,&cf_idVendor,uVar5);
    _CFRelease(uVar5);
    if (lVar9 == 0) {
      uVar5 = _CFArrayCreate(0,pvVar3,0,PTR__kCFTypeArrayCallBacks_10001c050);
    }
    else {
      lVar8 = 0;
      do {
        uVar5 = _CFNumberCreate(0,3,puVar7);
        *(undefined8 *)((long)pvVar3 + lVar8 * 8) = uVar5;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar9 != lVar8);
      lVar8 = 0;
      uVar5 = _CFArrayCreate(0,pvVar3,lVar9,PTR__kCFTypeArrayCallBacks_10001c050);
      do {
        _CFRelease(*(undefined8 *)((long)pvVar3 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
    }
    _free(pvVar3);
    _CFDictionarySetValue(lVar4,&cf_idProductArray,uVar5);
    _CFRelease(uVar5);
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__saddingdevicematchingdictionary,"StartListeningForUSBDevices");
    }
    uVar5 = FUN_1000094c2();
    iVar2 = _IOServiceAddMatchingNotification
                      (uVar5,"IOServiceFirstMatch",lVar4,FUN_10000c959,0,&DAT_100022bd4);
    if (iVar2 == 0) {
      FUN_100010fdf();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _errx(1,"IOServiceAddMatchingNotification for device failed: 0x%x",iVar2);
}

