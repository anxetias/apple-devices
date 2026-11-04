// name: FUN_1005ba383
// address: 1005ba383

undefined8
FUN_1005ba383(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee068();
  if (cVar1 == '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar3 = FUN_1005ba5ab(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
  }
  else {
    local_60 = 0;
    local_470 = FUN_1001705fc(param_2);
    local_468 = FUN_1001705fc(param_3);
    local_460 = param_4;
    iVar2 = FUN_1005ba4e2(param_1,1,&local_470,&local_60);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar2;
    }
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    uVar3 = local_60;
    if (iVar2 != 0) {
      uVar3 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

