// name: FUN_100503e83
// address: 100503e83

undefined1
FUN_100503e83(undefined8 param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004de449();
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "handlerData";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 != '\0') goto LAB_100503ee2;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    uVar5 = 0;
    uVar3 = 0;
    uVar1 = 0;
    if (param_4 == (undefined8 *)0x0) goto LAB_100503f21;
  }
  else {
LAB_100503ee2:
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = *(char *)(lVar4 + 0x6ae8) == '\x01';
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(lVar4 + 0x151e8);
    }
    if (param_4 == (undefined8 *)0x0) {
      uVar3 = 1;
      goto LAB_100503f21;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x151f0);
    uVar1 = 1;
  }
  uVar3 = uVar1;
  *param_4 = uVar5;
LAB_100503f21:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

