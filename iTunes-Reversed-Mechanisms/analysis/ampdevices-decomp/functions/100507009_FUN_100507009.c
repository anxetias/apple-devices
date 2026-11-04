// name: FUN_100507009
// address: 100507009

int FUN_100507009(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,param_2,0,local_458);
  if (iVar2 == 0) {
    iVar3 = FUN_100506c82(param_1,param_2,local_458,param_3,param_4);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
  else {
    iVar3 = 0;
    if (iVar2 != -0x2b) {
      iVar3 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

