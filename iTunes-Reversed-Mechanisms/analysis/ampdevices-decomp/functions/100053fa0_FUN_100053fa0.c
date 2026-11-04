// name: FUN_100053fa0
// address: 100053fa0

void FUN_100053fa0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_3c;
  int local_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(uint *)(param_1 + 8) ^
          ((uint)param_1 + ((uint)param_1 & 0x18c833aa) * -2 + 0x18c833aa ^ 0x15476ff3) * 0x3df53769
  ;
  uVar1 = (uint)&local_3c;
  local_38 = ((uVar1 & 0x795abb60) * -2 + uVar1 + 0x795abb63 ^ 0x8b5d97a) * -0x540651b + uVar2 +
             -0x7b2ae9ef;
  FUN_1000ae9f0(&local_3c);
  uVar1 = (uVar1 & 0x744ec11c) * -2 + uVar1 + 0xf44ec11d ^ 0x2d198e79;
  local_38 = uVar1 * -0x34a356b1 + 0x66c5a1b7;
  local_3c = uVar2 + 0xa80a446d ^ uVar1 * 0x34a356b1;
  FUN_1000bfcb0(&local_3c);
                    /* WARNING: Could not recover jumptable at 0x00010005408a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d4260 + (long)(int)uVar2 * 4) + 0x10005406f))();
  return;
}

