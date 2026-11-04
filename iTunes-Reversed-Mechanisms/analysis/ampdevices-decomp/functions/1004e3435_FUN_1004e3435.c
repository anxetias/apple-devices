// name: FUN_1004e3435
// address: 1004e3435

undefined8 FUN_1004e3435(undefined8 param_1,char param_2,char param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0x45f;
    }
  }
  else {
    uVar4 = 0x800000080000;
    if (param_2 != '\0') {
      uVar4 = 0x1000000;
    }
    if (param_3 == '\0' && param_2 == '\0') {
      uVar4 = FUN_1004e7f5c(lVar2);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar3 = FUN_100603fea(lVar2,uVar4 | 3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

