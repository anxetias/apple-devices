// name: FUN_100184c93
// address: 100184c93

int FUN_100184c93(int *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_490 [1128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068b381(uVar3);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      iVar4 = 0;
      iVar2 = FUN_10017e137(param_1,local_490,0);
      if (iVar2 == 0) {
        _memcpy(param_2,local_490,0x420);
      }
      else {
        FUN_1001c62d9(param_2,0x420);
        iVar4 = iVar2;
      }
      goto LAB_100184d2b;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068b30b(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_100184d2b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

