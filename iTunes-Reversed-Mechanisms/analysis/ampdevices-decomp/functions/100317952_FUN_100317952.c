// name: FUN_100317952
// address: 100317952

undefined8 FUN_100317952(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_48;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = &PTR_FUN_100854080;
    local_60 = &local_70;
    local_48 = &local_68;
    FUN_1003a0178(*(long *)(param_1 + 0x28),1,&local_68);
    if (local_48 == &local_68) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_48 == (undefined ***)0x0) goto LAB_1003179ec;
    }
    (**(code **)((long)*local_48 + lVar2))();
  }
LAB_1003179ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_70;
}

