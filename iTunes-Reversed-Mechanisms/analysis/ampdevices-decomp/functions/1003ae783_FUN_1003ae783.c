// name: FUN_1003ae783
// address: 1003ae783

void FUN_1003ae783(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "itTrackInfoVar != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return;
    }
  }
  else {
    FUN_100175848(*(undefined8 *)(param_1 + 4));
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0xc));
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0x14));
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0x1c));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x24));
    if (*(long *)(param_1 + 0x2c) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x2c) + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1005d3cba();
      }
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x34));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x3c));
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_1001c62d9(param_1,0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

