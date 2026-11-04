// name: FUN_10002ebe0
// address: 10002ebe0

undefined8 FUN_10002ebe0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 auStack_278 [144];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar3 = *(int *)(*(long *)(param_1 + 0x60) + 0x1dc) == 0x583c7fbd;
  switch(bVar3) {
  case true:
    iVar1 = (uint)!bVar3 * -0x25804a7a + (uint)bVar3 * 6;
    auStack_278
    [(long)(&stack0xf3069b81ab4576e0 +
           ((ulong)&stack0xf3069b81ab4576e0 / 3 & 0xfffffffffffffffe) * -3) * 4] = 0x44876848;
                    /* WARNING: Could not emulate address calculation at 0x00010002816f */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((long)*(int *)(&DAT_1006da260 + (long)(iVar1 + 4) * 4) + 0x1000280ab))
                      (iVar1 + -0x25804a7c,param_2,0x44876848);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bde;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

