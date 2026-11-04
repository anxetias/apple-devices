// name: FUN_1001bd1a2
// address: 1001bd1a2

void FUN_1001bd1a2(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  long lVar2;
  
  *param_1 = param_3;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (param_2[1] != 0) {
      FUN_1001b8454(param_2);
      lVar2 = *param_2;
      if (lVar2 != 0) goto LAB_1001bd1bd;
    }
    puVar1 = &DAT_100711b00;
    param_1[1] = &DAT_100711b00;
    if (param_2[1] == 0) goto LAB_1001bd1cc;
    FUN_1001b8454(param_2);
    lVar2 = *param_2;
    if (lVar2 == 0) goto LAB_1001bd1cc;
  }
  else {
LAB_1001bd1bd:
    param_1[1] = lVar2 + 0xc;
  }
  puVar1 = (undefined2 *)(lVar2 + 0xc);
LAB_1001bd1cc:
  lVar2 = FUN_1001b8378(param_2);
  param_1[2] = puVar1 + lVar2;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xfffd;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}

