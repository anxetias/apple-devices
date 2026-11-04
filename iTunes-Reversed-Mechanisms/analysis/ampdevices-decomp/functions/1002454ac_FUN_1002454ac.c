// name: FUN_1002454ac
// address: 1002454ac

char FUN_1002454ac(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar2,0x10);
    if (cVar3 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "volumeSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    cVar3 = '\0';
    FUN_1001782e9(0,0);
  }
  else {
    iVar1 = FUN_1002441f8(param_2,param_1,0x70696374,0,&local_438);
    cVar3 = '\x02';
    if (iVar1 == 0) {
      iVar1 = FUN_1001888ba(&local_438,"Photo Database",0,0);
      cVar3 = '\x02' - (iVar1 == 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

