// name: FUN_1004ca448
// address: 1004ca448

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ca448(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [16];
  int local_38 [4];
  byte local_28 [8];
  
  FUN_10012bc1e(local_38);
  FUN_1001a8c1c(local_28,&PTR_cf_metrics_10085e3d8);
  FUN_10032f0f2(local_60);
  FUN_10012a5e6(local_48,local_38,local_28,local_60);
  plVar1 = (long *)(param_1 + 0x70);
  FUN_1001a7b1c(plVar1,local_48);
  FUN_1001a8fac(local_48);
  FUN_1001a8fac(local_60);
  FUN_1001ab006(local_28);
  FUN_1001a8fac(local_38);
  if (*plVar1 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_1001a7b90(local_48,&PTR_cf_disabled_10085e3e0);
    bVar2 = FUN_1001a957a(plVar1,local_48,local_38);
    if ((bVar2 & (byte)local_38[0]) == 1) {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    else {
      FUN_1001a7b90(local_38,&PTR_cf_sendDisabled_10085e3e8);
      cVar3 = FUN_1001a957a(plVar1,local_38,local_28);
      bVar2 = 1;
      if (cVar3 != '\0') {
        bVar2 = local_28[0] ^ 1;
      }
      *(byte *)(param_1 + 0x18) = bVar2;
      FUN_1001ab240(local_38);
    }
    FUN_1001ab240(local_48);
  }
  FUN_1001a7b90(local_48,&PTR_cf_postFrequency_10085e3f0);
  cVar3 = FUN_1001a9738(plVar1,local_48,local_38);
  local_50 = (double)local_38[0];
  FUN_1001ab240(local_48);
  if (cVar3 == '\0') {
    local_50 = 0.0;
  }
  else {
    local_50 = local_50 / _DAT_100708b48;
  }
  *(double *)(param_1 + 0x68) = local_50;
  return;
}

