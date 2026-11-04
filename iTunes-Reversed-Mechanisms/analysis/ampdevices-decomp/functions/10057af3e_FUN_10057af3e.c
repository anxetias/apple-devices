// name: FUN_10057af3e
// address: 10057af3e

undefined4 FUN_10057af3e(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 local_30 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c2203(local_30,8);
  lVar3 = 0;
  do {
    cVar1 = FUN_1001df957(local_30,&DAT_100756f90 + lVar3,0);
    if (cVar1 != '\0') {
      uVar2 = *(undefined4 *)((long)&DAT_100756f94 + lVar3);
      goto LAB_10057af9f;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x460);
  uVar2 = 1;
LAB_10057af9f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

