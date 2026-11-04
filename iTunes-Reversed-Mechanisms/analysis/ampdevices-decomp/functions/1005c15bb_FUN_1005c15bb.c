// name: FUN_1005c15bb
// address: 1005c15bb

undefined8 FUN_1005c15bb(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined2 uStack_43c;
  undefined2 uStack_43a;
  undefined6 uStack_438;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      uStack_444 = 0x7a0a90;
      local_440 = 1;
      uStack_43c = 0x822;
      uStack_43a = 0xf2ab;
      uStack_438 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    cVar1 = FUN_1001ee068();
    if (cVar1 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar2 = FUN_1005c16f8(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      goto LAB_1005c16f3;
    }
    local_448 = param_2;
    uVar2 = FUN_1001705fc(param_3);
    local_440 = (undefined4)uVar2;
    uStack_43c = (undefined2)((ulong)uVar2 >> 0x20);
    uStack_43a = (undefined2)((ulong)uVar2 >> 0x30);
    uVar2 = FUN_1005ba4e2(param_1,0x16,&local_448,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
LAB_1005c16f3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

