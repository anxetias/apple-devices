// name: FUN_10047aaa8
// address: 10047aaa8

int FUN_10047aaa8(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6950;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001ddeca(*(long *)(param_1 + 0x10) + 0x1df0,param_2,param_1 + 0xf0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (param_3 != '\0') {
      *(undefined1 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      uStack_48 = 0;
      uStack_46 = 0;
      uStack_42 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      FUN_1005389ba(&local_58,8);
      FUN_1004755ef(param_1,0,&local_58);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

