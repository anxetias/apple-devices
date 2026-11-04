// name: FUN_10012aba4
// address: 10012aba4

void FUN_10012aba4(undefined8 *param_1)

{
  void *pvVar1;
  double dVar2;
  
  *param_1 = &PTR_FUN_100838968;
  pvVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar1 != (void *)0x0) {
    FUN_10032f0f2(pvVar1);
    *(undefined4 *)((long)pvVar1 + 0x10) = 1;
    dVar2 = (double)FUN_1001711e2();
    *(double *)((long)pvVar1 + 0x18) = dVar2 + DAT_100700af8;
  }
  FUN_10012c6d8(param_1 + 1,pvVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x32aaaba7;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  return;
}

