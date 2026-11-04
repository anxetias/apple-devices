// name: FUN_10055f58b
// address: 10055f58b

undefined8 FUN_10055f58b(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x26f2;
      local_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 1;
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2707;
      local_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != *(long *)(param_2 + 0x28)) {
      uVar3 = FUN_10055f3a6(lVar1);
      if ((int)uVar3 != 0) goto LAB_10055f66c;
    }
    FUN_1001c62d9(&local_58,0x20);
    local_58 = 0x74736370;
    local_50 = (undefined4)lVar1;
    uStack_4c = (undefined2)((ulong)lVar1 >> 0x20);
    uStack_4a = (undefined2)((ulong)lVar1 >> 0x30);
    local_40 = FUN_10055ed62(lVar1,&local_48);
    uVar3 = FUN_10055ee62(param_1,param_2,&local_58);
  }
LAB_10055f66c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

