// name: FUN_1005353ef
// address: 1005353ef

int FUN_1005353ef(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 local_510 [48];
  undefined4 local_4e0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  int local_4aa;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  int local_48a;
  undefined1 local_46c [1056];
  undefined4 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4bc = param_5;
  iVar2 = FUN_10017d477(param_1,local_510,0);
  if (iVar2 == -0x80) goto LAB_100535582;
  if (iVar2 == 0) {
    FUN_1001c62d9(&local_498,0x460);
    if (param_1 != (void *)0x0) {
      _memcpy(local_46c,param_1,0x420);
    }
    local_4c = local_4e0;
    cVar1 = FUN_1003b79b7();
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      iVar2 = 1000;
      if (cVar1 == '\0') goto LAB_100535582;
      puVar4 = &local_4b8;
      local_4b8 = 0x8220202;
      local_4b4 = "Assertion failure";
      local_4ac = 0x400;
      local_4aa = 1000;
    }
    else {
      iVar2 = FUN_1003b7a40(0x46494c45,&local_498,param_2,param_3,param_4,local_4bc);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100535582;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_100535582;
      puVar4 = &local_4b8;
      local_4b8 = 0x8220202;
      local_4b4 = "Assertion failure";
      local_4ac = 0x400;
      local_4aa = iVar2;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_100535582;
    puVar4 = &local_498;
    local_498 = 0x8220202;
    local_494 = "Assertion failure";
    local_48c = 0x400;
    local_48a = iVar2;
  }
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
LAB_100535582:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

