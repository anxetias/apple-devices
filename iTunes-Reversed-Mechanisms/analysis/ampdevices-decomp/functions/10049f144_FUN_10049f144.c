// name: FUN_10049f144
// address: 10049f144

undefined8 FUN_10049f144(long param_1,int param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "playResultData != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    lVar2 = 0;
    do {
      if (*(int *)(param_1 + 0x4f8 + lVar2) == param_2) {
        if (param_2 - 1U < 2) {
          *param_3 = param_2;
          *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 0x500 + lVar2);
        }
        else if (param_2 == 3) {
          *param_3 = 3;
          param_3[2] = *(int *)(param_1 + 0x500 + lVar2);
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x508 + lVar2);
          param_3[6] = *(int *)(param_1 + 0x510 + lVar2);
          param_3[7] = *(int *)(param_1 + 0x514 + lVar2);
          param_3[8] = *(int *)(param_1 + 0x518 + lVar2);
          param_3[9] = *(int *)(param_1 + 0x51c + lVar2);
        }
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != 0xa0);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

