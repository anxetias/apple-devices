// name: FUN_10007f270
// address: 10007f270

void FUN_10007f270(long *param_1)

{
  int iVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_R8;
  undefined8 in_R9;
  int iVar3;
  uint uVar4;
  uint local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(uint *)((long)param_1 + 0xc) ^
          (((uint)param_1 & 0x3c305da2) * -2 + (uint)param_1 + 0xbc305da2 ^ 0xb1bf01fb) * 0x3df53769
  ;
  local_40 = *param_1;
  iVar1 = *(int *)(local_40 + 4);
  iVar3 = -(iVar1 + -0x41927043);
  if (iVar3 < 0) {
    iVar3 = iVar1 + -0x41927043;
  }
  uVar2 = (ulong)(uint)(iVar3 * 2);
  local_48 = (((uint)&local_48 & 0x5dc83e20) * -2 + (uint)&local_48 + 0x5dc83e21 ^ 0x6628908c) *
             0x22116dab ^ uVar4 - 6;
  FUN_100071d70();
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006e0d00 + (long)(int)((iVar1 == 0x41927043) + uVar4) * 4) +
               0x10007f36a);
                    /* WARNING: Could not recover jumptable at 0x00010007f396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (local_44,UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006e0d00 + (long)(int)((iVar1 == 0x41927043) + uVar4) * 4),
             iVar1 != 0x41927043,in_R8,in_R9,uVar2);
  return;
}

