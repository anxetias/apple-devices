// name: FUN_1005b8afb
// address: 1005b8afb

undefined4
FUN_1005b8afb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100165701(DAT_1008c4d90,param_4);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "cfValue != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) goto LAB_1005b8bfd;
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = _AMDeviceSetValue(param_1,param_2,param_3,lVar3);
    FUN_10017060f(lVar3);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
LAB_1005b8bfd:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar2;
}

