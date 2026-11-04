// name: FUN_1001e6676
// address: 1001e6676

ulong FUN_1001e6676(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong local_448;
  undefined4 local_43c;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_448 = param_2;
  if (param_2 < 0x201) {
    puVar3 = local_438;
  }
  else {
    puVar3 = (undefined1 *)FUN_1001c63e1(param_2 * 2);
    if (puVar3 == (undefined1 *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006bfc6c(uVar4);
      }
      FUN_1001782e9(0,0);
      goto LAB_1001e679e;
    }
  }
  iVar2 = FUN_1001e7237(param_1,param_2,puVar3,param_2 & 0xffffffff,&local_43c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001e6f36(puVar3,local_43c);
      if (iVar2 != 0) {
        iVar2 = FUN_1001e73f2(puVar3,iVar2,param_1,param_3,&local_448);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006bfb94(iVar2,uVar4);
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006bfc00(iVar2,uVar4);
      }
    }
  }
  if (puVar3 != local_438) {
    FUN_1001c64c1(puVar3);
  }
LAB_1001e679e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return local_448;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

