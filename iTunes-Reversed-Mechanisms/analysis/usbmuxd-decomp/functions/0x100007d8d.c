// rea decompile_all
// name: FUN_100007d8d
// address: 0x100007d8d
// body: available
// range: 0x100007d8d-0x1000081b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000081ad to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100007d8d(long param_1,ushort param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined1 uVar9;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 *puVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined4 local_c4;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_38;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x140);
  lVar2 = _CFDataGetLength(uVar7);
  if (lVar2 == 0x80) {
    uVar3 = _CFDataGetLength(uVar7);
    _CFDataGetBytes(uVar7,0,uVar3,&local_b8);
    if (local_b8._1_1_ == '\x02') {
      uVar7 = 0x10;
      uVar9 = 2;
    }
    else {
      if (local_b8._1_1_ != '\x1e') {
        if (6 < DAT_100021030) {
          uVar7 = CONCAT44(uVar12,0x1e);
          FUN_1000008d2(7,0,&cf__sss_familyis_d_notAF_INET__d_orAF_INET6__d__,
                        "SocketAddressDataCreateCopyWithPort",local_b8._1_1_,2,uVar7);
          uVar12 = (undefined4)((ulong)uVar7 >> 0x20);
        }
        goto LAB_10000804d;
      }
      uVar9 = 0x1e;
      uVar7 = 0x1c;
    }
    puVar10 = &local_b8;
    local_b8._0_4_ = CONCAT22(param_2,(undefined2)local_b8);
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    local_c0 = _CFDataCreate(uVar3,puVar10,uVar7);
    if (local_c0 != 0) {
      local_b8 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_b0 = param_1;
      lVar2 = _CFSocketCreate(uVar3,uVar9,1,6,0xd,FUN_1000081b2,puVar10);
      uVar12 = (undefined4)((ulong)puVar10 >> 0x20);
      *(long *)(param_1 + 0xa8) = lVar2;
      if (lVar2 == 0) {
        uVar7 = 8;
        if (2 < DAT_100021030) {
          uVar3 = FUN_10000302f(param_1);
          uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
          uVar11 = CONCAT44(uVar12,(uint)(ushort)(param_2 << 8 | param_2 >> 8));
          pcVar8 = &cf__sClient_srequestingconnectto_s__dfailed_couldnotcreatesocket;
LAB_1000080e3:
          uVar7 = 8;
LAB_1000080f4:
          FUN_1000008d2(3,0,pcVar8,"MuxNetworkInitiateConnect",uVar3,uVar6,uVar11);
        }
      }
      else {
        local_c4 = 100;
        iVar1 = _CFSocketGetNative(lVar2);
        iVar1 = _setsockopt(iVar1,0xffff,0x1086,&local_c4,4);
        if ((iVar1 != 0) && (2 < DAT_100021030)) {
          piVar4 = ___error();
          iVar1 = *piVar4;
          piVar4 = ___error();
          pcVar5 = _strerror(*piVar4);
          FUN_1000008d2(3,0,&cf__sfailedtosettrafficclassSO_TC_BK_SYS__d__s,
                        "MuxNetworkInitiateConnect",iVar1,pcVar5);
        }
        _CFSocketSetSocketFlags(*(undefined8 *)(param_1 + 0xa8),0x80);
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(long *)(param_1 + 0xd8) = param_1 + 0xd0;
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(long *)(param_1 + 0xe8) = param_1 + 0xe0;
        *(undefined4 *)(param_1 + 0x54) = 1;
        *(long *)(param_1 + 0x98) = param_1 + 0x90;
        lVar2 = _CFSocketConnectToAddress(0,*(undefined8 *)(param_1 + 0xa8),local_c0);
        if (lVar2 == 0) {
          uVar7 = 0;
          lVar2 = _CFSocketCreateRunLoopSource(uVar3,*(undefined8 *)(param_1 + 0xa8),0);
          *(long *)(param_1 + 0xb0) = lVar2;
          if (lVar2 == 0) {
            uVar7 = 8;
            if (2 < DAT_100021030) {
              uVar3 = FUN_10000302f(param_1);
              uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
              uVar11 = CONCAT44(uVar12,(uint)(ushort)(param_2 << 8 | param_2 >> 8));
              pcVar8 = &cf__sClient_srequestingconnectto_s__dfailed_couldnotcreaterunloopsource;
              goto LAB_1000080e3;
            }
          }
          else {
            uVar3 = _CFRunLoopGetCurrent();
            _CFRunLoopAddSource(uVar3,*(undefined8 *)(param_1 + 0xb0),
                                *(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
          }
        }
        else {
          uVar7 = 2;
          if (2 < DAT_100021030) {
            uVar3 = FUN_10000302f(param_1);
            uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            uVar11 = CONCAT44(uVar12,(uint)(ushort)(param_2 << 8 | param_2 >> 8));
            pcVar8 = &
                     cf__sClient_srequestingconnectto_s__dfailed_couldnotbeginbackgroundconnectionattempt__ld
            ;
            goto LAB_1000080f4;
          }
        }
      }
      _CFRelease(local_c0);
      goto LAB_100008188;
    }
  }
  else if (2 < DAT_100021030) {
    FUN_1000008d2(3,0,&cf__sdoesn_tlooklikeasockaddr_storage_,"SocketAddressDataCreateCopyWithPort")
    ;
  }
LAB_10000804d:
  uVar7 = 8;
  if (2 < DAT_100021030) {
    uVar3 = FUN_10000302f(param_1);
    uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
    FUN_1000008d2(3,0,&cf__sClient_srequestingconnectto_s__dfailed_couldnotwriteportnumber,
                  "MuxNetworkInitiateConnect",uVar3,uVar6,
                  CONCAT44(uVar12,(uint)(ushort)(param_2 << 8 | param_2 >> 8)));
  }
LAB_100008188:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

