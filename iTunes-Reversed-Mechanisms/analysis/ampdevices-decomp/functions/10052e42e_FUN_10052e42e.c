// name: FUN_10052e42e
// address: 10052e42e

int FUN_10052e42e(long param_1,ulong param_2,undefined8 param_3,long param_4,int param_5,
                 long *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_4;
  if (*(long *)(param_1 + 0x550) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mStream != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_10052e6b9;
  }
  if (*(long *)(param_1 + 0x518) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x548);
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
      uVar4 = *(ulong *)(param_1 + 0x548);
    }
    lVar6 = param_2 - uVar4;
    if (uVar4 <= param_2 && lVar6 != 0) {
      lVar5 = FUN_1001c63e1(lVar6);
      local_68 = lVar6;
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
        iVar2 = FUN_1001d6a08(*(undefined8 *)(param_1 + 0x550),&local_68,lVar5,0);
        if (iVar2 == 0) {
          FUN_10017983e(*(undefined8 *)(param_1 + 0x518),lVar5,local_68);
          *(long *)(param_1 + 0x548) = *(long *)(param_1 + 0x548) + local_68;
        }
        FUN_1001c64c1(lVar5);
      }
    }
  }
  iVar2 = FUN_1001d7378(*(undefined8 *)(param_1 + 0x550),param_2);
  if (iVar2 == -0x80) goto LAB_10052e6b9;
  if (iVar2 == 0) {
    iVar2 = FUN_1001d6a08(*(undefined8 *)(param_1 + 0x550),&local_60,param_3,param_5 * 2 & 2);
    if (iVar2 == -0x80) goto LAB_10052e6b9;
    if (iVar2 == 0) {
      lVar6 = *(long *)(param_1 + 0x518);
      iVar2 = 0;
      if (lVar6 != 0) {
        if (*(ulong *)(param_1 + 0x548) != param_2) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mCurrentHashPosition == inPosition";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          if (*(ulong *)(param_1 + 0x548) != param_2) goto LAB_10052e6a6;
          lVar6 = *(long *)(param_1 + 0x518);
        }
        FUN_10017983e(lVar6,param_3,local_60);
        *(long *)(param_1 + 0x548) = *(long *)(param_1 + 0x548) + local_60;
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_10052e7f7;
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10052e7f7:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_10052e6a6:
  if ((param_6 != (long *)0x0) && (iVar2 == 0)) {
    *param_6 = local_60;
    iVar2 = 0;
  }
LAB_10052e6b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

