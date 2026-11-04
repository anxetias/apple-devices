// name: FUN_1000ab0d0
// address: 1000ab0d0

void FUN_1000ab0d0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar3 = (((uint)param_1 & 0x77f4364) * -2 + (uint)param_1 + 0x77f4364 ^ 0xde280c00) * 0x34a356b1;
  uVar4 = (uVar3 ^ *(uint *)(param_1 + 0xc)) + 0xf1aa51b3;
  uVar1 = -uVar4;
  if ((int)uVar1 < 0) {
    uVar1 = uVar4;
  }
  lVar2 = ((ulong)uVar1 - (ulong)(uVar1 * 2 & 0x8800bfa)) + 0x34ea2ed2044005fd;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006f3a44 +
                              (long)(int)((uint)(lVar2 == 0x34ea2ed2044005fd) +
                                         *(int *)(param_1 + 8) + uVar3) * 4) + 0x1000ab120);
                    /* WARNING: Could not recover jumptable at 0x0001000ab151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (0x41927043,UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006f3a44 +
                           (long)(int)((uint)(lVar2 == 0x34ea2ed2044005fd) +
                                      *(int *)(param_1 + 8) + uVar3) * 4),lVar2,
             CONCAT71(0x34ea2ed2044005,lVar2 != 0x34ea2ed2044005fd));
  return;
}

