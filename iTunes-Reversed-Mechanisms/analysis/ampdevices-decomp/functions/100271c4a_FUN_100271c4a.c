// name: FUN_100271c4a
// address: 100271c4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100271c4a(long param_1,uint param_2,double *param_3)

{
  char cVar1;
  uint uVar2;
  double dVar3;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\x02') {
LAB_100271c8e:
    uVar2 = *(uint *)(param_1 + 0xc);
    dVar3 = (double)*(uint *)(param_1 + 0x10) *
            *(double *)(&DAT_10071cc80 + (ulong)*(byte *)(param_1 + 1) * 8);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') {
        dVar3 = (((double)*(uint *)(param_1 + 0x10) * _DAT_10071c728) /
                (double)*(uint *)(param_1 + 0xc)) * _DAT_10070e600;
        goto LAB_100271cd9;
      }
      goto LAB_100271c8e;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    dVar3 = (double)*(uint *)(param_1 + 0x10) * _DAT_10071c720;
  }
  dVar3 = dVar3 / (double)uVar2;
LAB_100271cd9:
  if (param_3 != (double *)0x0) {
    *param_3 = (double)((long)(DAT_100700b00 + (double)param_2 / dVar3) & 0xffffffff) -
               (double)param_2 / dVar3;
  }
  return;
}

