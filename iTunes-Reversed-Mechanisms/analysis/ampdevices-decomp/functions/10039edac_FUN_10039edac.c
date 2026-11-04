// name: FUN_10039edac
// address: 10039edac

void FUN_10039edac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != param_2) {
    lVar2 = 1;
    puVar3 = param_1;
    do {
      puVar1 = operator_new(0x18);
      puVar1[2] = *(undefined8 *)(lVar4 + 0x10);
      puVar1[1] = param_1;
      *puVar1 = puVar3;
      puVar3[1] = puVar1;
      *param_1 = puVar1;
      param_1[2] = lVar2;
      lVar4 = *(long *)(lVar4 + 8);
      lVar2 = lVar2 + 1;
      puVar3 = puVar1;
    } while (lVar4 != param_2);
  }
  return;
}

