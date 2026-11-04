// name: FUN_100317071
// address: 100317071

int FUN_100317071(long param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x1013;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else if ((*(byte *)(param_1 + 0x1bba) & 0xfd) == 0) {
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    local_28 = 0;
    uStack_54 = (uint)param_2;
    *(undefined1 *)(param_1 + 0x1bba) = 4;
    iVar2 = FUN_1002fc1ae(param_1,0x74646c64);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x400;
        local_6a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
  }
  else {
    iVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

