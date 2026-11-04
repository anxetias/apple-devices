// name: FUN_10024589c
// address: 10024589c

int FUN_10024589c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = param_1 + 8;
  iVar3 = FUN_1001601fd(puVar1,param_3);
  if (iVar3 != -0x80) {
    if (iVar3 != 0) {
      local_60 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_60,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,local_60,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar3 != 0) goto LAB_10024594e;
    }
    local_68 = param_3;
    iVar3 = FUN_100160894(puVar1,&local_68,param_2);
    if ((iVar3 == -0x80) || (iVar3 == 0)) {
      *param_1 = iVar3 == 0;
      if (iVar3 == 0) goto LAB_10024594e;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      *param_1 = 0;
    }
    FUN_10016013b(puVar1);
  }
LAB_10024594e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

