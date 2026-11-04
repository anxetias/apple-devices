// name: FUN_1000ac960
// address: 1000ac960

void FUN_1000ac960(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = ((uint)param_1 & 0x75bf7459) * -2 + (uint)param_1 + 0x75bf7459 ^ 0x4e5fdaf4;
  uVar6 = uVar3 * 0x22116dab;
  uVar5 = param_1[1] ^ uVar6;
  uVar1 = param_1[3];
  iVar2 = *param_1;
  uVar4 = param_1[4] + uVar3 * -0x22116dab;
  uVar3 = (uint)&local_50;
  local_4c = ((uVar3 & 0x219613d4) * -2 + uVar3 + 0xa19613d4 ^ 0xd07971cd) * -0x540651b + uVar5 +
             0x41e159b3;
  FUN_1000ae9f0(&local_50);
  uVar3 = (uint)&local_50;
  local_3c = ((uVar3 & 0x6734661c) * -2 + uVar3 + 0xe734661d ^ 0x153e6900) * 0x54361bb5;
  local_48 = local_3c + ((uVar1 ^ uVar6) * 2 & 0xebbbfb6 ^ 0x63196a2) + (uVar1 ^ uVar6 ^ 0x7c4734aa)
             + -0x9010;
  local_4c = (local_3c - 0x4c404) + (uVar4 * 2 & 0x6cf9bbfe ^ 0x82032) + (uVar4 ^ 0x3ff8ede6);
  local_40 = local_3c + 0x2e95057f;
  local_44 = uVar5 + local_3c + -0x42f3bc66;
  local_3c = iVar2 + uVar6 + 0x25b9a5bd ^ local_3c;
  (*(code *)((&PTR_DAT_10082ee00)[(int)(uVar5 + 0xbd0c447b)] + -0xb))(&local_50);
  param_1[2] = local_50;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

