// name: FUN_1003b73be
// address: 1003b73be

undefined4 FUN_1003b73be(undefined8 param_1,long param_2,short *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  int local_47c;
  short local_478 [544];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_47c = 0;
  uVar5 = 0;
  iVar2 = (int)param_1;
  if (iVar2 < 0x48545450) {
    if (iVar2 == 0x44574e4c) {
      piVar3 = (int *)FUN_1004aab9f(0);
      if (piVar3 != (int *)0x0) {
        lVar4 = FUN_1004ab0f6(piVar3,*(undefined4 *)(param_2 + 0x450));
        if (lVar4 != 0) {
          iVar2 = FUN_1004ad1f3(lVar4,0xff,local_478);
          if ((iVar2 == 0) && (local_478[0] != 0)) {
            iVar2 = FUN_1001e215a(local_478);
            local_47c = iVar2;
            FUN_1004aa496(lVar4);
            LOCK();
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              FUN_1004ada4f(piVar3);
            }
            uVar5 = 0;
            if (iVar2 != 0) goto LAB_1003b7466;
            goto LAB_1003b755d;
          }
          FUN_1004aa496(lVar4);
        }
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          FUN_1004ada4f(piVar3);
        }
      }
LAB_1003b755d:
      lVar4 = FUN_1004aa9fa(param_2 + 0x2c);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        cVar1 = FUN_10017cbd0(lVar4);
        uVar5 = 0;
        if (cVar1 != '\0') {
          FUN_100187d80(lVar4,&local_47c);
          uVar5 = *(undefined4 *)(lVar4 + 0x420);
        }
      }
      goto LAB_1003b7466;
    }
    uVar5 = 0;
    if (iVar2 != 0x46494c45) goto LAB_1003b7466;
  }
  else {
    if ((iVar2 == 0x48545450) || (iVar2 == 0x53485244)) {
      FUN_100466c53(param_2 + 0x2c,local_478);
      local_47c = FUN_1001e20df(local_478);
      uVar5 = 0;
      goto LAB_1003b7466;
    }
    if (iVar2 != 0x4d46494c) goto LAB_1003b7466;
  }
  if (param_3 == (short *)0x0) {
    param_3 = local_478;
    iVar2 = FUN_1003b75af(param_1,param_2,param_3);
    uVar5 = 0;
    if (iVar2 != 0) goto LAB_1003b7466;
  }
  local_47c = *(int *)(param_3 + 0x12);
  uVar5 = *(undefined4 *)param_3;
LAB_1003b7466:
  if (param_4 != (int *)0x0) {
    *param_4 = local_47c;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

