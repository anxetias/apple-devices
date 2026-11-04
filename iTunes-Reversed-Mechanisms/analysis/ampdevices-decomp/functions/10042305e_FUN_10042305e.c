// name: FUN_10042305e
// address: 10042305e

void FUN_10042305e(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = *(undefined2 *)(param_1 + 0x1350);
  local_3a = *(undefined1 *)(param_1 + 0x1356);
  lVar2 = FUN_1004de449(*(undefined4 *)(param_1 + 0x80));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10025a472(lVar2,1,&local_3c);
    FUN_10041c020(param_1,0);
  }
  FUN_1001ceee0(param_1);
  FUN_10039c7eb(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

