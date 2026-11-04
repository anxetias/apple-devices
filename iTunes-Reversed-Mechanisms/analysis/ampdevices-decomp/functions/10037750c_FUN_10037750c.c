// name: FUN_10037750c
// address: 10037750c

undefined8
FUN_10037750c(long param_1,ushort param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (1 < param_2) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "positionMode == fsAtMark || positionMode == fsFromStart";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto LAB_100377883;
  }
  lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffdd;
    goto LAB_100377883;
  }
  lVar4 = FUN_100170e14(DAT_1008c4d90,param_4,param_5,*(undefined8 *)PTR__kCFAllocatorNull_10082e028
                       );
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "writeData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
    iVar2 = -0x17ffbffd;
    goto LAB_100377866;
  }
  if (param_2 == 1) {
    if (*(char *)(lVar3 + 0x6bb) != '\x02') {
      lVar5 = _AFCFileDescriptorCreateWriteAtPositionOperation
                        (*(undefined8 *)(param_1 + 0x4e8),lVar4,param_3,0);
      if (lVar5 == 0) {
LAB_10037760a:
        if (*(char *)(lVar3 + 0x6bb) != '\0') {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "afcVolumeInfo->supportsWriteAtPosition == kJRTriState_Unknown";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(undefined1 *)(lVar3 + 0x6bb) = 2;
        goto LAB_100377644;
      }
      iVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),lVar5);
      FUN_10036da6d(iVar2,"WriteAtPosition",param_1);
      if (iVar2 == -0x17ffbffa) {
        FUN_10017060f(lVar5);
        goto LAB_10037760a;
      }
      goto LAB_1003776d4;
    }
LAB_100377644:
    lVar5 = _AFCFileDescriptorCreateSetPositionOperation
                      (*(undefined8 *)(param_1 + 0x4e8),0,param_3,0);
    iVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),lVar5);
    FUN_10036da6d(iVar2,"SetPosition",param_1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_10017060f(lVar5);
        goto LAB_10037769d;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 == '\0') goto LAB_100377866;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_100377971:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  else {
LAB_10037769d:
    lVar5 = _AFCFileDescriptorCreateWriteOperation(*(undefined8 *)(param_1 + 0x4e8),lVar4,0);
    iVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),lVar5);
    FUN_10036da6d(iVar2,"Write",param_1);
LAB_1003776d4:
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 0;
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = param_5;
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          goto LAB_100377971;
        }
      }
    }
  }
LAB_100377866:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar3);
  uVar6 = FUN_10036db97(iVar2);
LAB_100377883:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

