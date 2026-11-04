// name: FUN_1004deb23
// address: 1004deb23

void FUN_1004deb23(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined **local_448;
  void *local_440;
  undefined ***local_428;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0((long)param_1 + 8);
  if (cVar1 == '\0') {
    *(undefined4 *)((long)param_1 + 0x42c) = 0xffffffdd;
  }
  else {
    iVar2 = FUN_1001888ba((long)param_1 + 8,"DCIM",&local_448,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10017fdd8(&local_448,0x7fff,0,FUN_100505888,param_1);
      *(int *)((long)param_1 + 0x42c) = iVar2;
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x400;
          local_45a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12);
        }
      }
    }
  }
  local_448 = &PTR_FUN_10085efc0;
  local_440 = param_1;
  local_428 = &local_448;
  FUN_1001edd53(&local_448);
  if (local_428 == &local_448) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (local_428 == (undefined ***)0x0) goto LAB_1004dec56;
  }
  (**(code **)((long)*local_428 + lVar4))();
LAB_1004dec56:
  operator_delete(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

