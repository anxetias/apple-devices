// name: FUN_10057a316
// address: 10057a316

void FUN_10057a316(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_10057a413(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  }
  lVar2 = FUN_1004de449(*(undefined4 *)(param_1 + 8));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be not NULL)";
      local_2c = 0x822;
      local_2a = "handlerData";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_10057a380;
  }
  *(undefined1 *)(lVar2 + 0x16680) = 0;
LAB_10057a380:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

