// name: FUN_100536365
// address: 100536365

void FUN_100536365(void)

{
  void *pvVar1;
  
  FUN_1001eed65(&DAT_1008c7840);
  pvVar1 = DAT_1008c7820;
  while (pvVar1 != (void *)0x0) {
    DAT_1008c7820 = pvVar1;
    FUN_100537c68(&DAT_1008c7820,&DAT_1008c7828,pvVar1);
    operator_delete(pvVar1);
    pvVar1 = DAT_1008c7820;
  }
  DAT_1008c7820 = (void *)0x0;
  pvVar1 = DAT_1008c7830;
  while (pvVar1 != (void *)0x0) {
    DAT_1008c7830 = pvVar1;
    FUN_100537c68(&DAT_1008c7830,&DAT_1008c7838,pvVar1);
    operator_delete(pvVar1);
    pvVar1 = DAT_1008c7830;
  }
  DAT_1008c7830 = pvVar1;
  return;
}

