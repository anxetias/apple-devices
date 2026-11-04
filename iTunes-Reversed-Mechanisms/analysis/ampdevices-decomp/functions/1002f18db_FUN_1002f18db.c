// name: FUN_1002f18db
// address: 1002f18db

bool FUN_1002f18db(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_298 [80];
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0 || param_3 == (undefined1 *)0x0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = local_298;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = local_228;
    }
    iVar3 = FUN_10017d477();
    if (iVar3 != -0x80) {
      if (iVar3 == 0) goto LAB_1002f193c;
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x400;
        local_23a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x12);
      }
    }
  }
  else {
LAB_1002f193c:
    if (param_2[1] == '\0') {
      iVar3 = FUN_1001e21dd(param_3);
      bVar1 = iVar3 == 0x49424f4f || iVar3 == 0x45505542;
      goto LAB_1002f197a;
    }
  }
  bVar1 = false;
LAB_1002f197a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

