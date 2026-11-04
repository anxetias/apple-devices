// name: FUN_100182545
// address: 100182545

undefined1 FUN_100182545(long param_1,undefined8 param_2,char *param_3,short *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 local_490 [1062];
  byte local_6a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *(uint *)(param_1 + 0x678);
  if (*param_3 == '\0') {
    if (((uVar3 & 4) == 0) &&
       (((param_3[0x39] & 0x40U) != 0 ||
        (((param_4 != (short *)0x0 && (*param_4 != 0)) && (param_4[1] == 0x2e)))))) {
LAB_1001825cc:
      uVar4 = 0;
      goto LAB_1001825f2;
    }
  }
  else {
    if ((uVar3 & 8) == 0) {
      cVar1 = FUN_1001824d7(param_3 + 0x20,param_4);
      if (cVar1 != '\0') {
        if (((*(long *)(param_3 + 0x18) != 2) ||
            (iVar2 = FUN_10017e137(param_2,local_490,0), iVar2 != 0)) || ((local_6a & 8) == 0))
        goto LAB_1001825cc;
        goto LAB_1001825ef;
      }
      uVar3 = *(uint *)(param_1 + 0x678);
    }
    if ((uVar3 & 0x10) != 0) {
      uVar4 = 0;
      cVar1 = FUN_10018e085(param_2,0,0);
      if (cVar1 != '\0') goto LAB_1001825f2;
    }
  }
LAB_1001825ef:
  uVar4 = 1;
LAB_1001825f2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

