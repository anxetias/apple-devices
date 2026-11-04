// rea decompile_all
// name: FUN_100012cd5
// address: 0x100012cd5
// body: available
// range: 0x100012cd5-0x100012f35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100012f31 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100012cd5(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  short local_62;
  int local_60;
  int local_5c;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  if (6 < DAT_100021030) {
    FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",
                  &cf__sTryingtodeterminewhetherinterfaceindex_ldcomesfromNCM_,
                  "InterfaceIndexCorrespondsToAppleNCMInterface",param_1);
  }
  if (-1 < param_1) {
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = 0;
    pcVar5 = _if_indextoname((uint)param_1,local_58);
    if (pcVar5 != (char *)0x0) {
      uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_10001c000;
      uVar9 = 0;
      lVar6 = _IOBSDNameMatching(uVar1,0,local_58);
      if (lVar6 == 0) goto LAB_100012f0c;
      local_60 = 0;
      iVar3 = _IOServiceGetMatchingServices(uVar1,lVar6);
      if ((iVar3 == 0) && (local_60 != 0)) {
        iVar3 = _IOIteratorNext();
        if (iVar3 != 0) {
          uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
          do {
            local_5c = 0;
            if (6 < DAT_100021030) {
              FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sFiguringoutifservicehasNCMasparent_,
                            "ServiceHasAppleNCMParent");
            }
            iVar4 = _IORegistryEntryGetParentEntry(iVar3,"IOService",&local_5c);
            if (iVar4 == 0) {
              if (local_5c != 0) {
                iVar4 = _IOObjectConformsTo(local_5c,"AppleUSBNCMData");
                if (iVar4 == 0) goto LAB_100012ec5;
                bVar10 = false;
                lVar6 = _IORegistryEntryCreateCFProperty(local_5c,&cf_idVendor,uVar2,0);
                if (lVar6 != 0) {
                  lVar7 = _CFNumberGetTypeID();
                  lVar8 = _CFGetTypeID(lVar6);
                  if (lVar7 == lVar8) {
                    _CFNumberGetValue(lVar6,2,&local_62);
                    bVar10 = local_62 == 0x5ac;
                  }
                  else {
                    bVar10 = false;
                  }
                  _CFRelease(lVar6);
                }
                goto LAB_100012e6d;
              }
              bVar10 = false;
            }
            else {
LAB_100012ec5:
              bVar10 = false;
LAB_100012e6d:
              if (local_5c != 0) {
                _IOObjectRelease();
              }
            }
            if (6 < DAT_100021030) {
              FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",
                            &cf__sTheendresultofcheckingtheparentwas__d,"ServiceHasAppleNCMParent",
                            bVar10);
            }
            _IOObjectRelease(iVar3);
            if (bVar10 != false) {
              uVar9 = CONCAT71((int7)((ulong)uVar2 >> 8),1);
              goto LAB_100012eda;
            }
            iVar3 = _IOIteratorNext(local_60);
          } while (iVar3 != 0);
        }
        uVar9 = 0;
LAB_100012eda:
        _IOObjectRelease(local_60);
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sTheendresultwas__d,
                        "InterfaceIndexCorrespondsToAppleNCMInterface",uVar9 & 0xff);
        }
        goto LAB_100012f0c;
      }
    }
  }
  uVar9 = 0;
LAB_100012f0c:
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}

