// name: FUN_100117552
// address: 100117552

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100117552(long param_1,uint param_2,uint param_3)

{
  float fVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_38 [32];
  undefined4 local_18;
  
  uVar3 = 0;
  fVar5 = DAT_100704174;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      pfVar2 = *(float **)(param_1 + 0x1cd08 + uVar4 * 8);
      fVar6 = *pfVar2;
      if (((0.0 < fVar6) && (fVar1 = pfVar2[1], 0.0 < fVar1)) &&
         (fVar6 = (float)((uint)(fVar1 - fVar6) & _DAT_100704180), fVar6 < fVar5)) {
        uVar3 = uVar4 & 0xffffffff;
        fVar5 = fVar6;
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  pfVar2 = *(float **)(param_1 + 0x1cd08 + uVar3 * 8);
  FUN_100108704((double)((*pfVar2 + pfVar2[1]) / (float)param_2),(double)pfVar2[2],
                (double)(fVar5 / ((float)param_2 * DAT_100700b28)),local_38,0);
  return local_18;
}

