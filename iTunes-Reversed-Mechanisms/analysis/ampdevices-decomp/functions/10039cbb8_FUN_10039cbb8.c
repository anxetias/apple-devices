// name: FUN_10039cbb8
// address: 10039cbb8

undefined8 FUN_10039cbb8(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = operator_new(0xab0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "mIPodUpdaterController != nullptr";
LAB_10039cd9d:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *puVar2 = &PTR_FUN_1008561b0;
    puVar2[0x8b] = 0;
    *(undefined4 *)(puVar2 + 0x8c) = 0;
    *(undefined1 *)((long)puVar2 + 0x464) = 0;
    ___bzero((long)puVar2 + 0x466,0x200);
    ___bzero(puVar2 + 1,0x44c);
    FUN_1001b7a44(puVar2 + 0xcd);
    *(undefined1 *)(puVar2 + 0xcf) = 0;
    ___bzero(puVar2 + 0xd0,0x420);
    *(undefined1 *)(puVar2 + 0x154) = 0;
    *(undefined8 *)((long)puVar2 + 0xaa4) = 0;
    *(undefined8 **)(param_1 + 8) = puVar2;
    pvVar3 = operator_new(0x2b20,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar3 != (void *)0x0) {
      FUN_10020e59c(pvVar3);
      *(void **)(param_1 + 0x10) = pvVar3;
      uVar4 = 0;
      goto LAB_10039cd5c;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "mMobileDeviceUpdaterController != nullptr";
      goto LAB_10039cd9d;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar4 = 0xffffff94;
LAB_10039cd5c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

