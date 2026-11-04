// name: FUN_10050d3e9
// address: 10050d3e9

bool FUN_10050d3e9(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100189206(param_1,param_2,local_440);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

