// name: FUN_1002d827e
// address: 1002d827e

bool FUN_1002d827e(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50[0] = 0;
  local_4c = 0;
  if (*(long *)(param_1 + 0x71b8) != 0) {
    uVar3 = FUN_100170f3b();
    uVar4 = FUN_100170ef7(*(undefined8 *)(param_1 + 0x71b8));
    iVar2 = FUN_1001798b8(2,uVar3,uVar4,local_50);
    bVar5 = false;
    if ((iVar2 != 0) || (local_4c != 0x14)) goto LAB_1002d8308;
    cVar1 = FUN_1001c5630(local_48,param_1 + 0x14da0,0x14);
    if (cVar1 == '\0') {
      FUN_1001c631b(local_48,param_1 + 0x14da0,0x14);
      bVar5 = *(char *)(param_1 + 0x14d7f) != '\0';
      *(undefined1 *)(param_1 + 0x14d7f) = 1;
      goto LAB_1002d8308;
    }
  }
  bVar5 = false;
LAB_1002d8308:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

