// name: FUN_10018fe59
// address: 10018fe59

undefined8 FUN_10018fe59(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  char local_498 [80];
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_10018f1cd(param_1,1,local_498,0);
  if ((int)uVar3 != 0) goto LAB_10018ff1b;
  pcVar5 = (char *)(param_1 + 0x19);
  if (local_498[0] == '\0') {
    iVar2 = _unlink(pcVar5);
LAB_10018ff06:
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_10018ff1b;
    }
  }
  else {
    iVar2 = _rmdir(pcVar5);
    if (iVar2 != -1) goto LAB_10018ff06;
    piVar4 = ___error();
    if (((param_2 & 1) == 0) && (*piVar4 == 0x42)) {
      FUN_10018dce1(pcVar5,local_448);
      cVar1 = FUN_10018e1ff(local_448);
      if (cVar1 == '\0') {
        iVar2 = -1;
      }
      else {
        iVar2 = FUN_100182d59(local_448,0);
        iVar2 = -(uint)(iVar2 != 0);
      }
      goto LAB_10018ff06;
    }
  }
  piVar4 = ___error();
  uVar3 = FUN_1001eb020(*piVar4);
LAB_10018ff1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

