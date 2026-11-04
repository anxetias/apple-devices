// name: FUN_10026b6a9
// address: 10026b6a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026b6a9(uint param_1,ushort *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_1;
  *param_2 = (ushort)(param_1 >> 0x15);
  *(byte *)(param_2 + 1) = (byte)(param_1 >> 0x13) & 3;
  *(byte *)((long)param_2 + 3) = (byte)(param_1 >> 0x11) & 3;
  *(byte *)(param_2 + 2) = (byte)(param_1 >> 0x10) & 1;
  *(byte *)((long)param_2 + 5) = (byte)(param_1 >> 0xc) & 0xf;
  *(byte *)(param_2 + 3) = (byte)(param_1 >> 10) & 3;
  *(byte *)((long)param_2 + 7) = (byte)(param_1 >> 9) & 1;
  *(byte *)(param_2 + 4) = (byte)(param_1 >> 8) & 1;
  *(byte *)((long)param_2 + 9) = bVar1 >> 6;
  *(uint *)(param_2 + 5) =
       ((uint)CONCAT12(bVar1 >> 2,CONCAT11(bVar1 >> 3,bVar1 >> 4)) | param_1 << 0x18) &
       (uint)DAT_10071c590;
  return;
}

