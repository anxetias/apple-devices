// name: FUN_1002ef552
// address: 1002ef552

undefined8 * FUN_1002ef552(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "state != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 3;
    puVar2[4] = param_2;
    *puVar2 = &PTR_FUN_1008535e8;
    puVar3 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    }
    puVar2[6] = puVar3;
    (**(code **)(*param_1 + 0x48))(param_1,puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

