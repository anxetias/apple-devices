// name: FUN_1000b5600
// address: 1000b5600

void FUN_1000b5600(void)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int local_30 [2];
  undefined *local_28;
  undefined4 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = (&PTR_DAT_10082ee00)[(byte)(&DAT_1006e01e0)[(ulong)DAT_100700330 ^ 0xb4] + 0xb4];
  *(undefined4 *)(puVar1 + -2) = 0x3a3402de;
  cVar6 = (char)((ulong)(&stack0xfd0b4b81215ec40c + ((ulong)local_30 & 0xfd0b4b81215ec43c) * -2) ^
                0x6414cbb8a5e99931) * '\x1d';
  lVar2 = ((ulong)(&stack0xfd0b4b81215ec40c + ((ulong)local_30 & 0xfd0b4b81215ec43c) * -2) ^
          0x6414cbb8a5e99931) * 0xd90c139;
  local_30[0] = 5 - (int)lVar2;
  cVar3 = (char)lVar2;
  cVar3 = cVar3 * cVar3 * '@';
  bVar5 = cVar3 + 0x3b;
  bVar4 = cVar3 + 0x89;
  if (bVar5 < 0xb2) {
    bVar4 = bVar5;
  }
  bVar5 = ((byte)((bVar4 % 0x3b >> 4) + 0x35) >> 1 & 0x19) + 0xba;
  cVar3 = (char)((uint)bVar5 + (uint)bVar5 * 2 >> 8);
  local_28 = (&PTR_DAT_10082ee00)
             [(byte)(bVar5 + ((byte)(((byte)(bVar5 - cVar3) >> 1) + cVar3) >> 6) * -0x7f + 0xd) +
              0xbf] + -7;
  cVar6 = cVar6 * cVar6 * '@';
  bVar5 = cVar6 + 0x3b;
  bVar4 = cVar6 + 0x89;
  if (bVar5 < 0xb2) {
    bVar4 = bVar5;
  }
  bVar5 = ((byte)((bVar4 % 0x3b >> 4) + 0x35) >> 1 & 0x19) + 0xba;
  cVar6 = (char)((uint)bVar5 + (uint)bVar5 * 2 >> 8);
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(bVar5 + ((byte)(((byte)(bVar5 - cVar6) >> 1) + cVar6) >> 6) * -0x7f + 0xd) +
              0x18] + -2))();
  *(undefined4 *)(puVar1 + -2) = local_20;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

