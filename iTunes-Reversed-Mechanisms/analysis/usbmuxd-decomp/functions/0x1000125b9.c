// rea decompile_all
// name: FUN_1000125b9
// address: 0x1000125b9
// body: available
// range: 0x1000125b9-0x100012cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100012cd0 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000125b9(undefined8 param_1,uint param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined4 *param_6,undefined8 param_7,long *param_8)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong local_118;
  long local_110;
  long local_108;
  int local_fc;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  uint local_c4;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  lVar3 = param_8[3];
  local_118 = param_3 & 0xffffffff;
  local_f8 = *param_8;
  if (param_4 != 0) {
    if (DAT_100021030 < 3) goto LAB_100012b01;
    pcVar9 = &cf__sErrorpassedtoaddrinfocallback__d;
LAB_100012617:
    FUN_1000008d2(3,0,pcVar9,"_GetAddrInfoReplyReceivedCallback",param_4);
    goto LAB_100012b01;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar1 = *(byte *)((long)param_6 + 1);
  param_4 = (uint)bVar1;
  if (bVar1 == 0x1e) {
    uVar13 = *param_6;
    uVar14 = param_6[1];
    uVar15 = param_6[2];
    uVar16 = param_6[3];
    local_a8 = *(undefined8 *)(param_6 + 4);
    uStack_a0 = (ulong)(uint)param_6[6];
  }
  else {
    if (bVar1 != 2) {
      if (DAT_100021030 < 3) goto LAB_100012b01;
      pcVar9 = &cf__sAddressofunknownfamily_d_;
      goto LAB_100012617;
    }
    uVar13 = *param_6;
    uVar14 = param_6[1];
    uVar15 = param_6[2];
    uVar16 = param_6[3];
  }
  local_b8 = CONCAT44(uVar14,uVar13);
  uStack_b0 = CONCAT44(uVar16,uVar15);
  if ((param_2 & 2) == 0) {
    FUN_10001224b(local_f8,lVar3,&cf__GetAddrInfoReplyReceivedCallbackgotbonjourremoval);
    goto LAB_100012b01;
  }
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  local_e8 = _CFDictionaryCreateMutable
                       (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                        PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  if (local_e8 == 0) goto LAB_100012b01;
  local_108 = _CFDataCreate(uVar2,&local_b8,0x80);
  lVar4 = local_e8;
  if (local_108 != 0) {
    local_c0 = _CFNumberCreate(uVar2,0xb,&local_118);
    if ((local_c0 == 0) || (local_110 = lVar3, local_e0 = _CFNumberCreate(uVar2,9), local_e0 == 0))
    {
      lVar4 = 0;
      local_d0 = 0;
      local_e0 = 0;
LAB_100012cbc:
      lVar3 = 0;
      lVar5 = local_c0;
    }
    else {
      local_c4 = param_2;
      lVar3 = _CFStringCreateMutableCopy(uVar2,0,param_8[3]);
      lVar4 = _CFStringFind(lVar3,&cf__,0);
      if (lVar4 == -1) {
        local_d0 = 0;
        lVar4 = 0;
        lVar5 = local_c0;
        param_2 = local_c4;
      }
      else {
        lVar5 = _CFStringGetLength(lVar3);
        _CFStringDelete(lVar3,lVar4,lVar5 - lVar4);
        lVar4 = local_e8;
        _CFDictionarySetValue(local_e8,&cf_SockaddrStorage,local_108);
        local_d8 = lVar3;
        _CFDictionarySetValue(lVar4,&cf_WiFiMACAddress,lVar3);
        _CFDictionarySetValue(lVar4,&cf_InterfaceIndex,local_c0);
        _CFDictionarySetValue(lVar4,&cf_PortNumber,local_e0);
        _CFDictionarySetValue(lVar4,&cf_FullEscapedServiceName,param_8[3]);
        _CFDictionarySetValue(lVar4,&cf_TXTRecord,param_8[6]);
        _CFDictionarySetValue
                  (lVar4,&cf_AttachedInterfaceIndex,*(undefined8 *)PTR__kCFNumberNaN_10001c038);
        param_2 = local_c4;
        if (*(char *)((long)param_6 + 1) == '\x02') {
          uVar10 = 0x10;
LAB_1000128a5:
          local_b8._0_4_ = CONCAT22(0x7ef2,(undefined2)local_b8);
          lVar4 = _CFDataCreate(uVar2,&local_b8,uVar10);
          if (lVar4 != 0) {
            uVar10 = 0x1e;
            if (*(char *)((long)param_6 + 1) == '\x02') {
              uVar10 = 2;
            }
            local_d0 = _CFSocketCreate(uVar2,uVar10,1,6,0,0,0);
            lVar3 = local_d8;
            if (local_d0 == 0) {
              if (DAT_100021030 < 3) {
                local_d0 = 0;
                lVar5 = local_c0;
              }
              else {
                local_d0 = 0;
                FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__scouldnotcreatesocket,
                              "_GetAddrInfoReplyReceivedCallback");
                lVar5 = local_c0;
              }
            }
            else {
              lVar5 = _CFSocketConnectToAddress(0,local_d0,lVar4);
              lVar3 = local_d8;
              if (lVar5 == 0) {
                if (6 < DAT_100021030) {
                  FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__s__isreachable_,
                                "_GetAddrInfoReplyReceivedCallback",lVar4);
                }
                lVar5 = local_f8;
                _CFArrayAppendValue(*(undefined8 *)(local_f8 + 0x20),local_e8);
                local_f0 = _CFStringFind(param_8[3],&cf_apple_pairable,0);
                lVar3 = local_d8;
                bVar12 = local_f0 != -1;
                lVar5 = FUN_10000e969(*(undefined8 *)(lVar5 + 0x18),local_d8);
                param_2 = local_c4;
                if (lVar5 == 0 || bVar12) {
                  if (DAT_100021034 == '\x01') {
                    if (lVar3 == 0) goto LAB_100012cbc;
                    if (2 < DAT_100021030) {
                      FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__sFullName____,
                                    "_GetAddrInfoReplyReceivedCallback",param_8[3]);
                    }
                    if (local_f0 != -1) {
                      lVar6 = _CFStringCreateWithFormat(uVar2,0,&cf_fff__fff,lVar3);
                      lVar5 = local_c0;
                      if (lVar6 != 0) {
                        local_fc = FUN_100011e65(param_8[3],lVar6,
                                                 &cf__GetAddrInfoReplyReceivedCallbackmatched);
                        _CFRelease(lVar6);
                        lVar5 = local_c0;
                        if (local_fc == 0) goto LAB_100012c25;
                      }
                      goto LAB_100012a95;
                    }
                  }
LAB_100012c25:
                  lVar5 = local_c0;
                  if (DAT_100021034 == '\x01') {
                    if (local_f0 == -1 && 2 < DAT_100021030) {
LAB_100012c5e:
                      pcVar11 = "true";
                      if (local_f0 == -1) {
                        pcVar11 = "false";
                      }
                      FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__sIgnoring_____Pariable__s_,
                                    "_GetAddrInfoReplyReceivedCallback",local_110,pcVar11);
                    }
                  }
                  else if (2 < DAT_100021030) goto LAB_100012c5e;
                }
                else {
                  lVar6 = _CFDictionaryGetValue(lVar5,&cf_UniqueDeviceID);
                  lVar5 = local_c0;
                  param_2 = local_c4;
                  if (lVar6 != 0) {
                    lVar7 = _CFGetTypeID(lVar6);
                    lVar8 = _CFStringGetTypeID();
                    lVar5 = local_c0;
                    param_2 = local_c4;
                    if (lVar7 == lVar8) {
                      FUN_100011e65(param_8[3],lVar6,&cf__GetAddrInfoReplyReceivedCallbackmatched);
                      lVar5 = local_c0;
                      param_2 = local_c4;
                    }
                  }
                }
              }
              else {
                lVar5 = local_c0;
                if (2 < DAT_100021030) {
                  FUN_1000008d2(3,0,&cf__s__addressisnotreachable_,
                                "_GetAddrInfoReplyReceivedCallback",lVar4);
                  lVar5 = local_c0;
                }
              }
            }
            goto LAB_100012a95;
          }
        }
        else if (*(char *)((long)param_6 + 1) == '\x1e') {
          uVar10 = 0x1c;
          goto LAB_1000128a5;
        }
        lVar4 = 0;
        local_d0 = 0;
        lVar3 = local_d8;
        lVar5 = local_c0;
      }
    }
LAB_100012a95:
    _CFRelease(local_e8);
    _CFRelease(local_108);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    lVar3 = local_d0;
    if (local_e0 != 0) {
      _CFRelease();
    }
    if (lVar3 != 0) {
      _CFSocketInvalidate(lVar3);
      _CFRelease(lVar3);
    }
    if (lVar4 == 0) goto LAB_100012b01;
  }
  _CFRelease(lVar4);
LAB_100012b01:
  if ((param_2 & 1) == 0) {
    FUN_10000f3d6(*(undefined8 *)(local_f8 + 0x48),param_8);
    FUN_10000f4d8(param_8);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

