// rea decompile_all
// name: FUN_10000e680
// address: 0x10000e680
// body: available
// range: 0x10000e680-0x10000e968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e8c9 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000e964 to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000e680(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  
  if (DAT_100022be8 == 0) {
    if (2 < DAT_100021030) {
      pcVar11 = &cf__sMissingbonjourlistener_;
LAB_10000e8ab:
      FUN_1000008d2(3,0,pcVar11,"CheckForChangedPairingRecords");
      return;
    }
  }
  else {
    lVar4 = __CreateBonjourDeviceDescriptions();
    if (lVar4 == 0) {
      if (2 < DAT_100021030) {
        pcVar11 = &cf__sDidnotfindanypairingrecords__;
        goto LAB_10000e8ab;
      }
    }
    else {
      lVar5 = _CFArrayGetCount(*(undefined8 *)(DAT_100022be8 + 0x20));
      if (0 < lVar5) {
        uVar1 = *(undefined8 *)PTR__kCFNumberNaN_10001c038;
        lVar5 = 0;
        do {
          lVar6 = _CFArrayGetValueAtIndex(*(undefined8 *)(DAT_100022be8 + 0x20),lVar5);
          if (lVar6 == 0) goto LAB_10000e952;
          lVar7 = _CFGetTypeID(lVar6);
          lVar8 = _CFDictionaryGetTypeID();
          if ((lVar7 != lVar8) ||
             (lVar7 = _CFDictionaryGetValue(lVar6,&cf_FullEscapedServiceName), lVar7 == 0))
          goto LAB_10000e952;
          lVar8 = _CFGetTypeID(lVar7);
          lVar9 = _CFStringGetTypeID();
          if ((lVar8 != lVar9) ||
             (lVar8 = _CFDictionaryGetValue(lVar6,&cf_WiFiMACAddress), lVar8 == 0))
          goto LAB_10000e952;
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFStringGetTypeID();
          if (lVar9 != lVar10) goto LAB_10000e952;
          lVar8 = FUN_10000e969(lVar4,lVar8);
          lVar6 = _CFDictionaryGetValue(lVar6,&cf_AttachedInterfaceIndex);
          if (lVar6 == 0) goto LAB_10000e952;
          cVar2 = _CFEqual(lVar6,uVar1);
          if (cVar2 != '\0') {
            cVar2 = _CFEqual(lVar6,uVar1);
            if (cVar2 == '\0') {
              if (DAT_100021030 < 3) goto LAB_10000e952;
              pcVar11 = &cf__sdidAttach__wassupposedtobekCFNumberNaNor_kCFNumberNaN_;
            }
            else {
              if (lVar8 == 0) goto LAB_10000e850;
              lVar6 = _CFDictionaryGetValue(lVar8,&cf_UniqueDeviceID);
              if (lVar6 != 0) {
                lVar9 = _CFGetTypeID(lVar6);
                lVar10 = _CFStringGetTypeID();
                if (lVar9 == lVar10) {
                  if (((DAT_100021034 != '\x01') ||
                      (lVar8 = _CFStringFind(lVar7,&cf_apple_pairable,0), lVar8 == -1)) &&
                     (iVar3 = FUN_100011e65(lVar7,lVar6,&cf_nowhasarecognizedpairingrecord),
                     iVar3 != 0)) goto LAB_10000e952;
                  goto LAB_10000e850;
                }
              }
              if (DAT_100021030 < 3) goto LAB_10000e952;
              pcVar11 = &cf__sNoudidfordevice___;
              lVar6 = lVar8;
            }
            FUN_1000008d2(3,0,pcVar11,"CheckForChangedPairingRecords",lVar6);
LAB_10000e952:
            _CFRelease(lVar4);
            return;
          }
          if (lVar8 == 0) {
            FUN_100011261(lVar7,&cf_nolongerpairedwithdevice);
          }
LAB_10000e850:
          lVar5 = lVar5 + 1;
          lVar6 = _CFArrayGetCount(*(undefined8 *)(DAT_100022be8 + 0x20));
        } while (lVar5 < lVar6);
      }
      if (*(long *)(DAT_100022be8 + 0x18) != 0) {
        _CFRelease();
      }
      *(long *)(DAT_100022be8 + 0x18) = lVar4;
    }
  }
  return;
}

