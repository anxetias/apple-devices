// name: FUN_100478cfc
// address: 100478cfc

int FUN_100478cfc(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x6950;
      uStack_38 = 0x7b;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001ddeca(*(long *)(param_1 + 0x10) + 0x1d00,param_2,param_1 + 0xe8);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x400;
        uStack_3a = (undefined2)iVar2;
        uStack_38 = (undefined2)((uint)iVar2 >> 0x10);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    uStack_38 = 0;
    uStack_36 = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    FUN_1005389ba(&local_48,0x27);
    FUN_1004755ef(param_1,0,&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

