// name: FUN_1005e7c6c
// address: 1005e7c6c

undefined8 FUN_1005e7c6c(long param_1,int param_2,void *param_3)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "outRawIPodDeviceDescription != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = 0x4e2a;
    if (param_2 != 0) {
      for (pvVar1 = *(void **)(param_1 + 0x60); pvVar1 != (void *)0x0;
          pvVar1 = *(void **)((long)pvVar1 + 0x6878)) {
        if (*(int *)((long)pvVar1 + 0x6884) == param_2) {
          _memcpy(param_3,pvVar1,0x6878);
          uVar3 = 0;
          break;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

