// name: FUN_100271bb6
// address: 100271bb6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100271bb6(long param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  double dVar3;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\x02') {
LAB_100271bfa:
    uVar2 = *(uint *)(param_1 + 0xc);
    dVar3 = (double)*(uint *)(param_1 + 0x10) *
            *(double *)(&DAT_10071cc60 + (ulong)*(byte *)(param_1 + 1) * 8);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') {
        dVar3 = (((double)*(uint *)(param_1 + 0x10) * _DAT_10071c728) /
                (double)*(uint *)(param_1 + 0xc)) * _DAT_10070e600;
        goto LAB_100271c44;
      }
      goto LAB_100271bfa;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    dVar3 = (double)*(uint *)(param_1 + 0x10) * _DAT_10071c720;
  }
  dVar3 = dVar3 / (double)uVar2;
LAB_100271c44:
  *param_2 = dVar3;
  return;
}

