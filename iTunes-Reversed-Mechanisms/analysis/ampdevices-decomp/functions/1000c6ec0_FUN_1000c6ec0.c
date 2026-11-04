// name: FUN_1000c6ec0
// address: 1000c6ec0

undefined8 FUN_1000c6ec0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_2 + 4) + 0xf0f1c3e9U < 0x102;
  uVar2 = (ulong)bVar3;
  switch(bVar3) {
  case true:
                    /* WARNING: Could not recover jumptable at 0x0001000b6b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)(int)(&switchD_1000c6f18::switchdataD_1006edfb0)
                                  [(int)((uint)!bVar3 * 0x76b74f74 + (uint)bVar3 * 3 +
                                        (uint)(*(int *)(param_2 + 4) == 0xf0e3c17))] + 0x1000b6b3f))
                      ((long)(int)(&switchD_1000c6f18::switchdataD_1006edfb0)[uVar2] + 0x1000c6ee8,
                       uVar2,(code *)((long)(int)(&switchD_1000c6f18::switchdataD_1006edfb0)
                                                 [(int)((uint)!bVar3 * 0x76b74f74 + (uint)bVar3 * 3
                                                       + (uint)(*(int *)(param_2 + 4) == 0xf0e3c17))
                                                 ] + 0x1000b6b3f));
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)PTR____stack_chk_guard_10082cb58) {
    return 0xffff5bde;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_1000c6f18::switchdataD_1006edfb0)[uVar2] + 0x1000c6ee8,
                    uVar2,0);
}

