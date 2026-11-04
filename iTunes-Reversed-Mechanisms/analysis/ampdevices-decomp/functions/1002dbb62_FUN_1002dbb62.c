// name: FUN_1002dbb62
// address: 1002dbb62

int FUN_1002dbb62(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  iVar2 = FUN_10017ecc9(param_1 + 0x50,param_1 + 0x470,local_448,0);
  iVar3 = iVar2;
  if ((iVar2 != -0x80) && (iVar3 = 0, iVar2 != -0x2b)) {
    if (iVar2 == 0) {
      iVar3 = FUN_100180f0c(local_448,DAT_1008c4d90,param_2,0);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      iVar3 = iVar2;
      if (cVar1 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x400;
        local_45a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_468,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

