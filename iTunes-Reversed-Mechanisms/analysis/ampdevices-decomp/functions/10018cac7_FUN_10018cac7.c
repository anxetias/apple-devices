// name: FUN_10018cac7
// address: 10018cac7

int FUN_10018cac7(undefined8 param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100691ef5(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10018e4a1(param_1,local_78);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_10018c6e2(local_78,param_2,local_c8);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = 0;
            if (param_3 != 0) {
              FUN_10018e6ca(local_c8,param_3);
              iVar2 = 0;
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100691e1d(iVar2,uVar3);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100691e89(iVar2,uVar3);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

