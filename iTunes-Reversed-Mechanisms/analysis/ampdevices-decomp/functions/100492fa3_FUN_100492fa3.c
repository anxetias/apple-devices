// name: FUN_100492fa3
// address: 100492fa3

bool FUN_100492fa3(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      bVar3 = false;
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10049300f;
    }
    bVar3 = *(int *)(*(long *)(param_1 + 2) + 0x84) == 0x6973756d;
  }
LAB_10049300f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

