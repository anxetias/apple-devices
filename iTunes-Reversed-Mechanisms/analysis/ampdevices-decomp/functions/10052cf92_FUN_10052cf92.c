// name: FUN_10052cf92
// address: 10052cf92

int FUN_10052cf92(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,long *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  FUN_1001e9de0();
  if (param_1[0xa3] != 0) {
    uVar4 = param_1[0xa9];
    if (param_2 < uVar4) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentHashPosition <= inPosition";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = param_1[0xa9];
    }
    uVar6 = param_2 - uVar4;
    if (uVar4 <= param_2 && uVar6 != 0) {
      lVar5 = FUN_1001c63e1(uVar6);
      if (lVar5 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "precedingBytes != __null";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x1f8))
                          (param_1,param_1[0xa9],lVar5,uVar6 & 0xffffffff,param_5,&local_60);
        if (iVar2 == 0) {
          FUN_10017983e(param_1[0xa3],lVar5,local_60);
          param_1[0xa9] = param_1[0xa9] + local_60;
        }
        FUN_1001c64c1(lVar5);
      }
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,param_3,param_4,param_5,&local_60);
  if (iVar2 != 0) goto LAB_10052d188;
  lVar5 = param_1[0xa3];
  if (lVar5 != 0) {
    if (param_1[0xa9] != param_2) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mCurrentHashPosition == inPosition";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (param_1[0xa9] != param_2) goto LAB_10052d175;
      lVar5 = param_1[0xa3];
    }
    FUN_10017983e(lVar5,param_3,local_60);
    param_1[0xa9] = param_1[0xa9] + local_60;
  }
LAB_10052d175:
  param_1[0xa2] = param_2 + local_60;
  if (param_6 != (long *)0x0) {
    *param_6 = local_60;
  }
LAB_10052d188:
  FUN_1001e9eb9(param_1 + 0xaa);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

