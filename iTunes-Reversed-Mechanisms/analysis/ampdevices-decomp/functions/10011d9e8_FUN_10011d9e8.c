// name: FUN_10011d9e8
// address: 10011d9e8

void FUN_10011d9e8(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_100835eb0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x200;
  *(undefined1 *)((long)param_1 + 0xaa) = 0x10;
  param_1[0x1821] = 0;
  param_1[0x1822] = 0;
  param_1[0x1823] = 0;
  param_1[0x1824] = 0;
  *(undefined4 *)(param_1 + 0x1826) = param_2;
  *(undefined4 *)((long)param_1 + 0xc134) = 0;
  puVar1 = operator_new(0x10);
  param_1[0xe] = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = 9;
  do {
    pvVar2 = operator_new(0x40);
    param_1[lVar3] = pvVar2;
    pvVar2 = operator_new(0x20);
    param_1[lVar3 + 6] = pvVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xe);
  pvVar2 = operator_new(6);
  param_1[0x16] = pvVar2;
  pvVar2 = operator_new(0x6a8);
  param_1[0x1827] = pvVar2;
  ___bzero(pvVar2,0x6a8);
  FUN_10011daf4(param_1);
  param_1[0x1829] = &DAT_100707680;
  lVar3 = param_1[0x1827];
  *(undefined **)(lVar3 + 0x698) = &DAT_100707660;
  *(undefined **)(lVar3 + 0x6a0) = &DAT_10070766c;
  param_1[0x1828] = &DAT_1007076c0;
  return;
}

