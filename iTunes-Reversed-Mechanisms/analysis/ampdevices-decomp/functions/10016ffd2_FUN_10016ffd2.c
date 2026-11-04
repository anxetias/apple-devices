// name: FUN_10016ffd2
// address: 10016ffd2

char FUN_10016ffd2(long param_1,long param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (int *)0x0) {
    *param_3 = -0x32;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006792e4(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      cVar1 = FUN_100174666(param_1,1,local_438,0x3ff);
      if (cVar1 == '\0') {
        iVar2 = -0x2b;
        cVar1 = '\0';
      }
      else {
        iVar2 = FUN_10018ddf7(local_438,param_2,0);
        if (iVar2 != 0) {
          cVar1 = '\0';
        }
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar2;
      }
      goto LAB_1001700a3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067926e(uVar3);
    }
  }
  cVar1 = '\0';
  FUN_1001782e9(0,0);
LAB_1001700a3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar1;
}

