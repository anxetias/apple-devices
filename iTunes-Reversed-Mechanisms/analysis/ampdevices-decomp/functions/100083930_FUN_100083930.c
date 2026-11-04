// name: FUN_100083930
// address: 100083930

void FUN_100083930(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_108 [208];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (long)param_1 + ((ulong)param_1 & 0x9e1b08002c4bb932) * -2 + -0x61e4f7ffd3b446ce ^
          0x7048839a8fce43f;
  lVar4 = uVar2 * 0xd90c139;
  uVar3 = (ushort)lVar4 ^ *(ushort *)(param_1 + 2);
  uVar1 = rdtsc();
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006e52c0 +
                              (long)(int)((uint)(uVar3 == 0x29c1 || *(long *)(param_1 + 4) == 0) +
                                         *param_1 + (int)lVar4) * 4) + 0x100083a24);
                    /* WARNING: Could not recover jumptable at 0x000100083a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (UNRECOVERED_JUMPTABLE,CONCAT62((int6)((ulong)lVar4 >> 0x10),uVar3),0xc5cb5907,
             (long)*(int *)(&DAT_1006e52c0 +
                           (long)(int)((uint)(uVar3 == 0x29c1 || *(long *)(param_1 + 4) == 0) +
                                      *param_1 + (int)lVar4) * 4),
             auStack_108 +
             ((uVar1 & 0xffffffff00000000 | CONCAT44((int)(uVar2 >> 0x20),(int)uVar1)) % 7) * 0x10);
  return;
}

