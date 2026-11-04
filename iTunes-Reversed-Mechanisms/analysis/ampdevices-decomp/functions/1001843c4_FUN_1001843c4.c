// name: FUN_1001843c4
// address: 1001843c4

int FUN_1001843c4(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_4b0 [80];
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
     ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068af79(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001879bd(param_2,1,&local_460);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        do {
          iVar2 = FUN_100187bea(local_460,local_458,local_4b0,0);
          if (iVar2 != 0) {
            if ((iVar2 != -5000) && (iVar2 != -0x589)) goto LAB_100184585;
            FUN_100187c42(local_460);
            goto LAB_100184569;
          }
          if (local_4b0[0] == '\0') {
            iVar2 = FUN_1001845ab(param_1,local_458,local_4b0);
          }
          else {
            iVar2 = FUN_1001843c4(param_1,local_458);
          }
        } while (iVar2 == 0);
        if (iVar2 == -0x80) {
LAB_100184585:
          FUN_100187c42(local_460);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10068aea1(iVar2,uVar3);
          }
          FUN_100187c42(local_460);
          if (iVar2 == 0) {
LAB_100184569:
            iVar2 = FUN_1001892ae(param_2,0);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10068af0d(iVar2,uVar3);
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

