// name: FUN_1001bcad3
// address: 1001bcad3

void FUN_1001bcad3(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    bVar5 = *param_1;
    if ((byte)(bVar5 - 0x21) < 0x5e) {
      uVar6 = bVar5 - 0x21;
      if (0x5d < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1001bd5b8("bitset test argument out of range");
      }
      if ((*(ulong *)(param_3 + (ulong)(uVar6 >> 6) * 8) >> ((ulong)uVar6 & 0x3f) & 1) == 0)
      goto LAB_1001bcb0f;
    }
    else {
LAB_1001bcb0f:
      puVar2 = (undefined1 *)*param_4;
      *param_4 = (long)(puVar2 + 1);
      *puVar2 = 0x25;
      cVar1 = "0123456789ABCDEF"[bVar5 >> 4];
      pcVar3 = (char *)*param_4;
      *param_4 = (long)(pcVar3 + 1);
      *pcVar3 = cVar1;
      bVar5 = "0123456789ABCDEF"[bVar5 & 0xf];
    }
    param_1 = param_1 + 1;
    pbVar4 = (byte *)*param_4;
    *param_4 = (long)(pbVar4 + 1);
    *pbVar4 = bVar5;
  } while( true );
}

