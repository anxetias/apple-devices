// name: FUN_100426b98
// address: 100426b98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100426b98(int param_1,byte *param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 == 0x52564132) {
    if ((int)param_3 < 5) {
      return 0xffffffce;
    }
    pbVar2 = param_2 + ((ulong)param_3 - 1);
    do {
      if (*param_2 == 0) break;
      param_2 = param_2 + 1;
    } while (param_2 <= pbVar2);
    for (; (param_2 <= pbVar2 && (*param_2 == 0)); param_2 = param_2 + 1) {
    }
    do {
      pbVar3 = param_2;
      if (pbVar2 < pbVar3) {
        return 0xffffffce;
      }
      param_2 = pbVar3 + (ulong)((byte)(pbVar3[3] - 1) >> 3) + 5;
      if ((byte)(pbVar3[3] + 7) < 8) {
        param_2 = pbVar3 + 4;
      }
    } while (*pbVar3 != 1);
    fVar4 = (float)_expf(((float)(int)(short)(*(ushort *)(pbVar3 + 1) << 8 |
                                             *(ushort *)(pbVar3 + 1) >> 8) * _DAT_100749504 *
                         _DAT_100749508) / DAT_100740ce0);
    fVar5 = DAT_100705e60;
    if (fVar4 <= DAT_100705e60) {
      fVar5 = fVar4;
    }
    uVar1 = (ushort)(int)((fVar5 + DAT_100700b24) * _DAT_10070bcc0);
  }
  else {
    if ((int)param_3 < 6) {
      return 0xffffffce;
    }
    if (param_2[1] != 0x10) {
      return 0xffffffce;
    }
    uVar1 = -(ushort)param_2[2];
    if ((*param_2 & 1) != 0) {
      uVar1 = (ushort)param_2[2];
    }
  }
  *param_4 = uVar1;
  return 0;
}

