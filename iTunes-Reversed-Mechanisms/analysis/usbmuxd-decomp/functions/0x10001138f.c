// rea decompile_all
// name: FUN_10001138f
// address: 0x10001138f
// body: available
// range: 0x10001138f-0x1000116a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10001169f to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10001138f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  Bytef *buf;
  uLong uVar7;
  size_t sVar8;
  ulong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  puVar3 = _calloc(1,0x70);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    lVar4 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_10001c050);
    puVar3[2] = lVar4;
    if (lVar4 != 0) {
      lVar4 = __CreateBonjourDeviceDescriptions();
      puVar3[3] = lVar4;
      if (lVar4 != 0) {
        lVar4 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_10001c050);
        puVar3[4] = lVar4;
        if (lVar4 != 0) {
          lVar4 = FUN_10000e2cd("_apple-mobdev._tcp",puVar3,puVar3);
          puVar3[5] = lVar4;
          if (lVar4 != 0) {
            local_88 = CONCAT44(local_88._4_4_,0xffffffff);
            lVar4 = FUN_100004398();
            if (lVar4 == 0) {
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf_CopyBUID__returnederror_d,
                              local_88 & 0xffffffff);
              }
LAB_10001157f:
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__s_computeBUIDAdler32__failed,
                              "USBMuxBonjourDeviceListenerCreate");
              }
            }
            else {
              uVar5 = _CFStringGetLength(lVar4);
              lVar6 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
              buf = _malloc(lVar6 + 1U);
              uVar7 = _CFStringGetCString(lVar4,buf,lVar6 + 1U,0x8000100);
              cVar2 = (char)uVar7;
              if (cVar2 != '\0') {
                sVar8 = _strlen((char *)buf);
                uVar7 = _adler32(0,buf,(uInt)sVar8);
              }
              _free(buf);
              _CFRelease(lVar4);
              if (cVar2 == '\0') goto LAB_10001157f;
              _snprintf((char *)&local_88,0x1f,"_apple-mobdev2._tcp,%08x",uVar7);
              if (4 < DAT_100021030) {
                FUN_1000008d2(5,0,&cf__s_LOCKDOWN_V2_BONJOUR_SERVICE_NAMEis_s,
                              "USBMuxBonjourDeviceListenerCreate",&local_88);
              }
              lVar4 = FUN_10000e2cd(&local_88,puVar3,puVar3);
              puVar3[6] = lVar4;
              if (lVar4 == 0) goto LAB_100011570;
            }
            if (DAT_100021034 == '\x01') {
              if (6 < DAT_100021030) {
                FUN_1000008d2(7,0,&cf_startupv3Bonjourbrowser);
              }
              lVar4 = FUN_10000e2cd("_apple-pairable._tcp",puVar3,puVar3);
              puVar3[7] = lVar4;
              if (lVar4 == 0) goto LAB_100011570;
            }
            lVar4 = _CFArrayCreateMutable(uVar1,0,0);
            puVar3[8] = lVar4;
            if (lVar4 != 0) {
              lVar4 = _CFArrayCreateMutable(uVar1,0,0);
              puVar3[9] = lVar4;
              if (lVar4 != 0) {
                local_88 = 0;
                local_58 = 0;
                local_78 = 0;
                uStack_70 = 0;
                local_68 = 0;
                uStack_60 = 0;
                local_50 = FUN_10000e39d;
                local_48 = FUN_10000e3bf;
                local_40 = FUN_100011c8c;
                local_80 = puVar3;
                lVar4 = _CFRunLoopSourceCreate(uVar1,0);
                puVar3[10] = lVar4;
                if (lVar4 != 0) {
                  *puVar3 = param_1;
                  puVar3[1] = param_2;
                  goto LAB_10001167d;
                }
              }
            }
          }
        }
      }
    }
LAB_100011570:
    FUN_10000e3e6(puVar3);
  }
  puVar3 = (undefined8 *)0x0;
LAB_10001167d:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

