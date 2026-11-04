// name: FUN_10018e502
// address: 10018e502

int FUN_10018e502(long param_1,undefined4 param_2,long param_3,long param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined2 local_dc;
  undefined1 local_d9;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10018e548:
    if (param_3 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100692fb8(uVar3);
      }
    }
    else {
      if (param_4 != 0) {
        local_d9 = 0;
        local_dc = 1;
        if (param_1 == 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          iVar2 = FUN_10018e4a1(param_1,local_88);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100692ed6(iVar2,uVar3);
            }
          }
          puVar4 = local_88;
        }
        ___bzero(param_4,0x420);
        iVar2 = _FSMatchAliasBulk(puVar4,param_2,param_3,&local_dc,local_d8,&local_d9,0,0);
        if (iVar2 == 0) {
          FUN_10018e6ca(local_d8,param_4);
        }
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = local_d9;
        }
        goto LAB_10018e67f;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100692f42(uVar3);
      }
    }
  }
  else {
    cVar1 = FUN_10017cbd0(param_1);
    if (cVar1 != '\0') goto LAB_10018e548;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100692e60(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10018e67f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

