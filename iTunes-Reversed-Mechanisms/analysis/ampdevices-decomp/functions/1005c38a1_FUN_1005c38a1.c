// name: FUN_1005c38a1
// address: 1005c38a1

undefined8 FUN_1005c38a1(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined2 uStack_43c;
  undefined2 uStack_43a;
  undefined6 uStack_438;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "results != __null";
LAB_1005c3a0b:
      uStack_43c = 0x822;
      local_440 = 1;
      uStack_444 = 0x7a0a90;
      local_448 = 0x8220202;
      uStack_43a = SUB82(pcVar3,0);
      uStack_438 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
LAB_1005c3982:
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_4 = 0;
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        pcVar3 = "capabilities != __null";
        goto LAB_1005c3a0b;
      }
      goto LAB_1005c3982;
    }
    cVar1 = FUN_1001ee068();
    if (cVar1 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        uVar2 = FUN_1005c3a3a(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      goto LAB_1005c3a35;
    }
    uVar2 = FUN_1001705fc(param_2);
    local_448 = (undefined4)uVar2;
    uStack_444 = (undefined4)((ulong)uVar2 >> 0x20);
    uVar2 = FUN_1001705fc(param_3);
    local_440 = (undefined4)uVar2;
    uStack_43c = (undefined2)((ulong)uVar2 >> 0x20);
    uStack_43a = (undefined2)((ulong)uVar2 >> 0x30);
    uVar2 = FUN_1005ba4e2(param_1,0x17,&local_448,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
LAB_1005c3a35:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

