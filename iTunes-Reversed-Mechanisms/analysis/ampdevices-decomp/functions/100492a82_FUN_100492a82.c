// name: FUN_100492a82
// address: 100492a82

undefined8 FUN_100492a82(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar3 = 0;
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100492afe;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 2) + 0x84);
    if (((iVar1 == 0x646f5069) || (iVar1 == 0x77615269)) || (iVar1 == 0x6d657274)) {
      uVar3 = 1;
      goto LAB_100492afe;
    }
  }
  uVar3 = 0;
LAB_100492afe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

