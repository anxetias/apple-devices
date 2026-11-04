// name: FUN_100182d59
// address: 100182d59

int FUN_100182d59(int *param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char local_4b0 [3];
  char local_4ad;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100689eac(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    pcVar1 = *(code **)(*(long *)(param_1 + 4) + 0x108);
    if (((pcVar1 == (code *)0x0) || (iVar3 = (*pcVar1)(param_1,param_2), iVar3 == -4)) &&
       (iVar3 = FUN_1001879bd(param_1,1,&local_460), iVar3 != -0x80)) {
      if (iVar3 == 0) {
        do {
          iVar3 = FUN_100187bea(local_460,local_458,local_4b0,0);
          if (iVar3 != 0) {
            if ((iVar3 != -5000) && (iVar3 != -0x589)) goto LAB_100182f61;
            FUN_100187c42(local_460);
            goto LAB_100182f3f;
          }
          if (local_4b0[0] == '\0') {
            if (((param_2 & 1) != 0) && (local_4ad != '\0')) {
              FUN_100184bee(local_458);
            }
            iVar3 = FUN_1001892ae(local_458,0);
          }
          else {
            iVar3 = FUN_100182d59(local_458,param_2 & 0xfffffffd);
          }
        } while (iVar3 == 0);
        if (iVar3 == -0x80) {
LAB_100182f61:
          FUN_100187c42(local_460);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_100689dd4(iVar3,uVar4);
          }
          FUN_100187c42(local_460);
          if (iVar3 == 0) {
LAB_100182f3f:
            iVar3 = 0;
            if ((param_2 & 2) == 0) {
              iVar3 = FUN_1001892ae(param_1,1);
            }
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100689e40(iVar3,uVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

