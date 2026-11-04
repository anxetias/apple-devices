// name: FUN_1005e7a82
// address: 1005e7a82

undefined8 FUN_1005e7a82(long param_1,int param_2,void *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "outDeviceInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_3,0x6660);
    uVar2 = 0x4e27;
    if (param_2 != 0) {
      for (lVar3 = *(long *)(param_1 + 0x60); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x6878)) {
        if (*(int *)(lVar3 + 0x6884) == param_2) {
          _memcpy(param_3,(void *)(lVar3 + 0x210),0x6660);
          uVar2 = 0;
          break;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

