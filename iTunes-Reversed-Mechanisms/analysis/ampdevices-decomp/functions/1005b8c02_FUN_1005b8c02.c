// name: FUN_1005b8c02
// address: 1005b8c02

undefined4 FUN_1005b8c02(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "value != __null";
LAB_1005b8d1e:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_1001658f1(DAT_1008c4d90,param_3);
    if (lVar3 != 0) {
      uVar2 = _AMDeviceSetValue(param_1,&cf_com_apple_mobile_iTunes_store,param_2,lVar3);
      FUN_10017060f(lVar3);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        return uVar2;
      }
      goto LAB_1005b8d45;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "cfValue != __null";
      goto LAB_1005b8d1e;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0xffffffce;
  }
LAB_1005b8d45:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

