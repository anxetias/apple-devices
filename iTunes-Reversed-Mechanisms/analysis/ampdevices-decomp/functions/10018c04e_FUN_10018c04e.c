// name: FUN_10018c04e
// address: 10018c04e

int FUN_10018c04e(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 local_c38 [1024];
  char local_838 [1024];
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100691567(uVar3);
    }
  }
  else {
    cVar1 = FUN_10017cbd0(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_10017fbfb(param_2);
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10069147b(uVar3);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x57f;
      }
      else {
        iVar2 = FUN_10017de88(param_1,local_438,0x400);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = FUN_10017de88(param_2,local_838,0x400);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                FUN_1001e5b77(param_3,local_c38,0x400);
                FUN_1001df1e7("/",local_838,0x400);
                FUN_1001df1e7(local_c38,local_838,0x400);
                iVar2 = _symlink(local_438,local_838);
                if (iVar2 == 0) {
                  if (param_4 == 0) {
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = FUN_10018dd66(local_838,param_4,0);
                    if ((iVar2 != -0x80) && (iVar2 != 0)) {
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 != '\0') {
                        FUN_100691337(iVar2,uVar3);
                      }
                    }
                  }
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006912c1(uVar3);
                  }
                  FUN_1001782e9(0,0);
                  piVar4 = ___error();
                  iVar2 = FUN_1001eb020(*piVar4);
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_1006913a3(iVar2,uVar3);
                }
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_10069140f(iVar2,uVar3);
            }
          }
        }
      }
      goto LAB_10018c1d2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006914f1(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10018c1d2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

