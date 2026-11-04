// name: FUN_1005b06be
// address: 1005b06be

void FUN_1005b06be(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined1 *param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = 0;
  }
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 1;
  }
  if (param_8 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "cfstrLangOut != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_1 + 0x15a0) != '\0') {
      cVar1 = FUN_100537ef0(0);
      if (cVar1 != '\0') {
        if (*(long *)(param_1 + 0x16b8) == 0) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            FUN_1002f5eac(*(undefined8 *)(param_1 + 0x1598),param_2,param_3,param_6,param_7,param_8)
            ;
            return;
          }
          goto LAB_1005b0844;
        }
        FUN_1002f60f4();
        goto LAB_1005b07a0;
      }
    }
    uVar2 = FUN_1001705fc(param_7);
    *param_8 = uVar2;
  }
LAB_1005b07a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1005b0844:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

