// name: FUN_1003772da
// address: 1003772da

void FUN_1003772da(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  cVar1 = FUN_10017cc4a(*(undefined8 *)(param_2 + 0x60));
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "JRFileRefNumIsValid(refNum)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_2 + 0xa4) == '\0') {
      uVar2 = FUN_10037750c(*(undefined8 *)(param_2 + 0x60),*(undefined2 *)(param_2 + 0x70),
                            *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x78),
                            *(undefined8 *)(param_2 + 0x80),&local_40);
    }
    else {
      uVar2 = FUN_100376a55();
    }
    FUN_1003773f6(uVar2,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),local_40,
                  *(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98));
    FUN_1001c64c1(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

