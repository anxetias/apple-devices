// name: FUN_1001e215a
// address: 1001e215a

undefined8 FUN_1001e215a(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  undefined1 auStack_117 [263];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_1;
  if ((ulong)uVar1 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = param_1[uVar4 + 1];
      if (0xff < uVar2) goto LAB_1001e21bf;
      uVar5 = uVar2 - 0x20 & 0xff;
      if (0x19 < (ushort)(uVar2 - 0x61)) {
        uVar5 = uVar2;
      }
      auStack_117[uVar4] = (char)uVar5;
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  uVar3 = FUN_1001e20df();
LAB_1001e21bf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

