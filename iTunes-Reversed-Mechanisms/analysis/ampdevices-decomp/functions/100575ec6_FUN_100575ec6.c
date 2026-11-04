// name: FUN_100575ec6
// address: 100575ec6

undefined8
FUN_100575ec6(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[3] == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "mDestDataHandler != __null";
LAB_100575fe9:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x92) != '\0') {
      FUN_1001e9de0(param_1 + 9);
      (**(code **)(*(long *)param_1[3] + 0x98))((long *)param_1[3],param_3,param_4,param_5,2,0);
      (**(code **)(*param_1 + 0x60))(param_1);
      FUN_1001e9eb9(param_1 + 9);
      goto LAB_100575fa4;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "mDecryptToMemory";
      goto LAB_100575fe9;
    }
  }
  FUN_1001782e9(0,0);
LAB_100575fa4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

