// name: FUN_1000b5de0
// address: 1000b5de0

void FUN_1000b5de0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_3c;
  int local_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(uint *)(param_1 + 8) ^
          ((uint)param_1 + ((uint)param_1 & 0x44d33280) * -2 + 0x44d33280 ^ 0x353c5099) * 0x540651b;
  uVar1 = (uint)&local_3c;
  local_38 = ((uVar1 & 0x2498dc28) * -2 + uVar1 + 0xa498dc28 ^ 0xd577be31) * -0x540651b + uVar2 +
             -0x7b2ae9ef;
  FUN_1000ae9f0(&local_3c);
  uVar1 = (uVar1 & 0x5e93c2bc) * -2 + uVar1 + 0x5e93c2bc ^ 0x87c48dd8;
  local_38 = uVar1 * -0x34a356b1 + 0x66c5a1b7;
  local_3c = uVar2 + 0xa80a446d ^ uVar1 * 0x34a356b1;
  FUN_1000bfcb0(&local_3c);
                    /* WARNING: Could not recover jumptable at 0x0001000b5ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f1c00 + (long)(int)uVar2 * 4) + 0x1000b5eaf))();
  return;
}

