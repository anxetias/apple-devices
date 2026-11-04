// name: FUN_1003ad4b1
// address: 1003ad4b1

int FUN_1003ad4b1(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  short local_228 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  FUN_1001c34e1(0x23f00001,local_228,0);
  if (local_228[0] != 0) {
    uVar2 = 1;
    do {
      cVar1 = FUN_1001e3edc(param_1,local_228,1);
      if (cVar1 != '\0') goto LAB_1003ad52f;
      uVar2 = uVar2 + 1;
      FUN_1001c34e1(uVar2 | 0x23f00000,local_228,0);
    } while (local_228[0] != 0);
    uVar2 = 0;
  }
LAB_1003ad52f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (int)(short)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

