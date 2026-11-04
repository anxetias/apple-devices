// name: FUN_100251f28
// address: 100251f28

int FUN_100251f28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100228138(*(undefined4 *)(param_1 + 0xc));
  if (param_3 != 0 && iVar2 == 0) {
    lVar3 = FUN_100170ef7(param_3);
    iVar2 = 0;
    if (lVar3 == 0x14) {
      iVar2 = FUN_100179fcc(param_4,2);
      if (iVar2 == 0) {
        uVar4 = FUN_100170f3b(param_3);
        cVar1 = FUN_1001c5630(local_48,uVar4,0x14);
        iVar2 = 0;
        if (cVar1 != '\0') goto LAB_100251fca;
        iVar2 = -100000;
      }
      FUN_100182d4d(param_4);
    }
  }
LAB_100251fca:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

