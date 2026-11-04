// name: FUN_1002f080e
// address: 1002f080e

void FUN_1002f080e(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(*(long *)(param_2 + 8) + 0x18) - 1U < (ulong)*(uint *)(param_1 + 0x10)) ||
     (*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + (ulong)*(uint *)(param_1 + 0x10) * 8) ==
      0)) {
LAB_1002f08f9:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar2 = FUN_1002f17a0(*(undefined8 *)(param_1 + 0x18));
    if (lVar2 == 0) {
LAB_1002f08ab:
      puVar3 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "compatible_genres != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1002f08f9;
      }
    }
    else {
      puVar3 = *(undefined8 **)(lVar2 + 0x18);
      if (puVar3[3] != 0) goto LAB_1002f08fc;
      puVar3 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "compatible_genres != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1002f08ab;
      }
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  }
LAB_1002f08fc:
  puVar5 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 1) = 1;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 2;
    puVar5[4] = param_2;
    *puVar5 = &PTR_FUN_100853650;
    puVar5[5] = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

