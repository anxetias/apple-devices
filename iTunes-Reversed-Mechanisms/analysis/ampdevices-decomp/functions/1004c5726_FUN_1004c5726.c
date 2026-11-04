// name: FUN_1004c5726
// address: 1004c5726

undefined8
FUN_1004c5726(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004c53d6(param_1,param_4);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "dataDict";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    cVar1 = FUN_1001b8428(param_3);
    if (cVar1 == '\0') {
      FUN_10016865a(lVar2,param_2,param_3,1);
      uVar3 = 0;
      if ((char)param_4 != '\0') {
        FUN_1004c51fc(param_1,param_2);
      }
    }
    else {
      FUN_100171552(lVar2,param_2);
      uVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

