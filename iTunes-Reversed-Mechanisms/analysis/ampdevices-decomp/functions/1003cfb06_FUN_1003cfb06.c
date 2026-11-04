// name: FUN_1003cfb06
// address: 1003cfb06

undefined4 FUN_1003cfb06(undefined8 param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "ustrOutputFile != nullptr && ustrOutputFile[0] != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = 0;
    iVar2 = FUN_10017ecc9(param_1,param_2,&local_438,0);
    if (iVar2 == 0) {
      uVar3 = FUN_100182d4d(&local_438);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

