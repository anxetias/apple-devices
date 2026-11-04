// name: FUN_10050c4fb
// address: 10050c4fb

long * FUN_10050c4fb(long *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (long *)0x0) {
    do {
      if ((int)param_1[1] != 0x64756c63) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') break;
      }
      if ((param_1[7] == param_2) && (*(char *)((long)param_1 + 0x66ec) == '\0'))
      goto LAB_10050c5c6;
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  param_1 = (long *)0x0;
LAB_10050c5c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

