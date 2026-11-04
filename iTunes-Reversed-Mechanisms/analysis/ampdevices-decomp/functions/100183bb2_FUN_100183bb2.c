// name: FUN_100183bb2
// address: 100183bb2

undefined1 FUN_100183bb2(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 local_910 [80];
  char local_8c0 [80];
  undefined1 local_870 [1056];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((iVar3 = *param_1, iVar3 != 0x41464350 && (iVar3 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068aa37(uVar4);
    }
  }
  else {
    if (((param_2 != (int *)0x0) && (*(long *)(param_2 + 4) != 0)) &&
       ((iVar1 = *param_2, iVar1 == 0x41464350 || (iVar1 == 0x504f5358)))) {
      if (iVar3 == iVar1) {
        iVar3 = FUN_10017d406(param_1,0,local_8c0,0);
        uVar5 = 0;
        if ((iVar3 != 0) || (uVar5 = 0, local_8c0[0] == '\0')) goto LAB_100183d02;
        uVar5 = 0;
        iVar3 = FUN_10017d406(param_2,0,local_910,0);
        if (iVar3 != 0) goto LAB_100183d02;
        cVar2 = FUN_10017ec13(param_1,param_2);
        if (cVar2 != '\0') {
          _memcpy(local_450,param_2,0x420);
          iVar3 = FUN_10017d5ba(local_450,local_870);
          if (iVar3 == 0) {
            do {
              cVar2 = FUN_10017f77e(local_870,param_1);
              if (cVar2 != '\0') {
                uVar5 = 1;
                break;
              }
              _memcpy(local_450,local_870,0x420);
              iVar3 = FUN_10017d5ba(local_450,local_870);
              uVar5 = 0;
            } while (iVar3 == 0);
            goto LAB_100183d02;
          }
        }
      }
      uVar5 = 0;
      goto LAB_100183d02;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068a9c1(uVar4);
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_100183d02:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

