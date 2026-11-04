// name: FUN_10018412d
// address: 10018412d

int FUN_10018412d(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char local_4b0 [80];
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
     ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068adbf(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001879bd(param_2,0,&local_460);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar3 = FUN_100187bea(local_460,local_458,local_4b0,0);
        if (iVar3 == 0) {
          do {
            if (local_4b0[0] == '\0') {
              iVar2 = FUN_1001842e8(param_1,local_458,local_4b0);
            }
            else {
              iVar2 = FUN_10018412d(param_1,local_458);
            }
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_10068ace7(iVar2,uVar4);
                }
              }
              goto LAB_1001841cd;
            }
            iVar3 = FUN_100187bea(local_460,local_458,local_4b0,0);
          } while (iVar3 == 0);
        }
        iVar2 = iVar3;
        if (iVar3 == -5000) {
          iVar2 = 0;
        }
        if (iVar3 == -0x589) {
          iVar2 = 0;
        }
LAB_1001841cd:
        FUN_100187c42(local_460);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10068ad53(iVar2,uVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

