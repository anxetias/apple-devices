// name: FUN_100414cf3
// address: 100414cf3

uint FUN_100414cf3(long *param_1,long param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = 0;
  bVar4 = param_2 != 0;
  if (param_1 == (long *)0x0 || !bVar4) {
    uVar2 = FUN_1001cc310(param_1,bVar4,param_2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "(limiter != nullptr && output != nullptr)";
LAB_100414e86:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (*param_1 == 0) {
    uVar2 = FUN_1001cc310(param_1,bVar4,param_2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "limiter->delayBuffer != nullptr";
      goto LAB_100414e86;
    }
  }
  else if (param_3 < 3) {
    if (*(uint *)((long)param_1 + 0x24) == param_3) {
      uVar3 = (int)param_1[5] - (int)param_1[4];
      if (param_4 <= uVar3) {
        uVar3 = param_4;
      }
      FUN_100414a41(param_1,&local_3c,param_2,uVar3,param_3,0,1);
      *(uint *)(param_1 + 4) = (int)param_1[4] + uVar3;
      goto LAB_100414eb6;
    }
    uVar2 = FUN_1001cc310(param_1,bVar4,param_2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "numChannels == limiter->numChannels";
      goto LAB_100414e86;
    }
  }
  else {
    uVar2 = FUN_1001cc310(param_1,bVar4,param_2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "numChannels <= 2";
      goto LAB_100414e86;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100414eb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

