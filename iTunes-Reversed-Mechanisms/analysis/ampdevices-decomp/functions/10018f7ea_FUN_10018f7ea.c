// name: FUN_10018f7ea
// address: 10018f7ea

int FUN_10018f7ea(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100693870(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    puVar4 = local_458;
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = param_3;
    }
    if (param_4 != (undefined8 *)0x0) {
      param_4[8] = 0;
      param_4[9] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
    }
    cVar1 = FUN_10017fbfb(param_1);
    if (cVar1 == '\0') {
      iVar2 = -0x57f;
    }
    else {
      iVar2 = FUN_10019206f(param_1,param_2,puVar4);
      if (iVar2 == 0) {
        iVar2 = FUN_10018f1cd(puVar4,0,param_4,0);
      }
      else {
        iVar2 = FUN_1001eb020(iVar2);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
        goto LAB_10018f8d0;
      }
    }
    ___bzero(puVar4,0x420);
  }
LAB_10018f8d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

