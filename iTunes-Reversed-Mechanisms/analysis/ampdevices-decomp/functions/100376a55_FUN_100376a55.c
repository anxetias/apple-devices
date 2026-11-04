// name: FUN_100376a55
// address: 100376a55

undefined8
FUN_100376a55(long param_1,ushort param_2,long param_3,long param_4,ulong param_5,long *param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  if (param_2 < 2) {
    lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
    if (lVar3 == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "afcVolumeInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar8 = 0xffffffdd;
    }
    else {
      uVar8 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
      do {
        if (param_2 == 1) {
          if (*(char *)(lVar3 + 0x6ba) != '\x02') {
            uVar4 = _AFCFileDescriptorCreateReadAtPositionOperation
                              (*(undefined8 *)(param_1 + 0x4e8),param_4,uVar8,param_5,param_3,0);
            if (uVar4 == 0) {
              cVar1 = *(char *)(lVar3 + 0x6ba);
joined_r0x000100376b67:
              if (cVar1 != '\0') {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "afcVolumeInfo->supportsReadAtPosition == kJRTriState_Unknown";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58);
                }
                FUN_1001782e9(0,0);
              }
              *(undefined1 *)(lVar3 + 0x6ba) = 2;
              goto LAB_100376b9a;
            }
            uVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar4);
            FUN_10036da6d(uVar2,"ReadAtPosition",param_1);
            if (uVar2 == 0xe8004006) {
              FUN_10017060f(uVar4);
              cVar1 = *(char *)(lVar3 + 0x6ba);
              goto joined_r0x000100376b67;
            }
            goto LAB_100376c23;
          }
LAB_100376b9a:
          uVar4 = _AFCFileDescriptorCreateSetPositionOperation
                            (*(undefined8 *)(param_1 + 0x4e8),0,param_3,0);
          uVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar4);
          uVar10 = (ulong)uVar2;
          FUN_10036da6d(uVar2,"SetPosition",param_1);
          if (uVar2 == 0) {
            FUN_10017060f(uVar4);
            goto LAB_100376be4;
          }
          if (uVar2 != 0xffffff80) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar2);
LAB_100376fd8:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_100376e35;
        }
LAB_100376be4:
        uVar4 = _AFCFileDescriptorCreateReadOperation
                          (*(undefined8 *)(param_1 + 0x4e8),param_4,uVar8,param_5,0);
        uVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar4);
        FUN_10036da6d(uVar2,"Read",param_1);
LAB_100376c23:
        uVar10 = (ulong)uVar2;
        if (uVar2 != 0) {
          if (uVar2 != 0xffffff80) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar2);
              goto LAB_100376fd8;
            }
          }
          goto LAB_100376e35;
        }
        uVar5 = _AFCOperationGetResultObject(uVar4);
        lVar6 = FUN_1001705e9(uVar5);
        lVar7 = _CFDataGetTypeID();
        if (lVar6 != lVar7) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "JRCFGetTypeID(readData) == CFDataGetTypeID()";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar10 = 0xe8004017;
          goto LAB_100376e35;
        }
        uVar2 = FUN_100170ef7(uVar5);
        uVar9 = (ulong)uVar2;
        bVar11 = param_5 < uVar9;
        param_5 = param_5 - uVar9;
        if (bVar11) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "readCount <= bufferSize";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar10 = 0xe800400d;
          goto LAB_100376e35;
        }
        if (param_6 != (long *)0x0) {
          *param_6 = *param_6 + uVar9;
        }
        FUN_10017060f(uVar4);
        if (uVar9 == 0) break;
        param_4 = param_4 + uVar9;
        param_3 = param_3 + uVar9;
      } while (param_5 != 0);
      uVar4 = 0;
      uVar10 = 0xe800400e;
      if (uVar9 != 0) {
        uVar10 = uVar4;
      }
LAB_100376e35:
      FUN_10017060f(uVar4);
      FUN_10036d4d2(lVar3);
      uVar8 = FUN_10036db97(uVar10);
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "positionMode == fsAtMark || positionMode == fsFromStart";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

