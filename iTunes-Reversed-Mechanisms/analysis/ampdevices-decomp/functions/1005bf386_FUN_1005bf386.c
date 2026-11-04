// name: FUN_1005bf386
// address: 1005bf386

undefined8
FUN_1005bf386(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined2 uStack_43c;
  undefined2 uStack_43a;
  undefined6 local_438;
  undefined2 uStack_432;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "notifications != __null";
LAB_1005bf4b5:
      uStack_43c = 0x822;
      local_440 = 1;
      uStack_444 = 0x7a0a90;
      local_448 = 0x8220202;
      uStack_43a = SUB82(pcVar4,0);
      local_438 = (undefined6)((ulong)pcVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
  }
  else {
    lVar2 = FUN_10017076e(param_2);
    if (0 < lVar2) {
      uVar3 = FUN_1001705fc(param_2);
      local_448 = (undefined4)uVar3;
      uStack_444 = (undefined4)((ulong)uVar3 >> 0x20);
      local_440 = (undefined4)param_3;
      uStack_43c = (undefined2)((ulong)param_3 >> 0x20);
      uStack_43a = (undefined2)((ulong)param_3 >> 0x30);
      local_438 = (undefined6)param_4;
      uStack_432 = (undefined2)((ulong)param_4 >> 0x30);
      uVar3 = FUN_1005b9808(param_1,0x12,&local_448,param_5,param_6);
      goto LAB_1005bf46c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "JRCFArrayGetCount(notifications) > 0";
      goto LAB_1005bf4b5;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1005bf46c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

