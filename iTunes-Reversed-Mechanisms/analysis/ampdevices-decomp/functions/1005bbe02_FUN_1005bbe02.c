// name: FUN_1005bbe02
// address: 1005bbe02

undefined8
FUN_1005bbe02(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined2 uStack_43c;
  undefined2 uStack_43a;
  undefined6 local_438;
  undefined2 uStack_432;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_4;
  if (lVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_448 = 0x8220202;
      uStack_444 = 0x7a0a90;
      local_440 = 1;
      uStack_43c = 0x822;
      uStack_43a = 0x6fb5;
      local_438 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = FUN_1001705fc(param_2);
    local_448 = (undefined4)uVar3;
    uStack_444 = (undefined4)((ulong)uVar3 >> 0x20);
    uVar3 = FUN_1001705fc(param_3);
    local_440 = (undefined4)uVar3;
    uStack_43c = (undefined2)((ulong)uVar3 >> 0x20);
    uStack_43a = (undefined2)((ulong)uVar3 >> 0x30);
    uVar3 = FUN_1001705fc(lVar1);
    local_438 = (undefined6)uVar3;
    uStack_432 = (undefined2)((ulong)uVar3 >> 0x30);
    uVar3 = FUN_1005b9808(param_1,2,&local_448,param_5,param_6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

