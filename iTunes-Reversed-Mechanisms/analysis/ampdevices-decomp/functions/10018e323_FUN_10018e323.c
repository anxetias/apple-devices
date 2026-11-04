// name: FUN_10018e323
// address: 10018e323

int FUN_10018e323(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_d0 [80];
  undefined1 local_80 [80];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    cVar1 = FUN_10017cbd0(param_2);
    if (cVar1 == '\0') {
LAB_10018e401:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692d74(uVar4);
      }
      goto LAB_10018e43d;
    }
  }
  else {
    cVar1 = FUN_10017cbd0(param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692c92(uVar4);
      }
LAB_10018e43d:
      FUN_1001782e9(0,0);
      iVar3 = -0x32;
      goto LAB_10018e44b;
    }
    cVar1 = FUN_10017cbd0(param_2);
    if (cVar1 == '\0') goto LAB_10018e401;
    iVar3 = FUN_10018e4a1(param_1,local_80);
    if (iVar3 == -0x80) goto LAB_10018e44b;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692c26(iVar3,uVar4);
      }
      goto LAB_10018e44b;
    }
  }
  iVar3 = FUN_10018e4a1(param_2,local_d0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      puVar5 = local_80;
      if (param_1 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      sVar2 = _FSNewAlias(puVar5,local_d0,param_3);
      iVar3 = (int)sVar2;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692d08(iVar3,uVar4);
      }
    }
  }
LAB_10018e44b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

