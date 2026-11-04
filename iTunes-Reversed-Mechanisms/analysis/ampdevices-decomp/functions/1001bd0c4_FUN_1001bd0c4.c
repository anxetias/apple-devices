// name: FUN_1001bd0c4
// address: 1001bd0c4

void FUN_1001bd0c4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = param_3;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    if (*param_2 == 0) {
      puVar2 = &DAT_100711b02;
      param_1[1] = &DAT_100711b02;
      goto LAB_1001bd0ef;
    }
    FUN_1001b87d0(param_2);
    lVar3 = param_2[1];
    if (lVar3 != 0) goto LAB_1001bd0e0;
    puVar2 = &DAT_100711b02;
    lVar3 = *param_2;
    param_1[1] = &DAT_100711b02;
    if (lVar3 == 0) goto LAB_1001bd0ef;
    FUN_1001b87d0(param_2);
    lVar3 = param_2[1];
    if (lVar3 == 0) goto LAB_1001bd0ef;
  }
  else {
LAB_1001bd0e0:
    param_1[1] = lVar3 + 0xc;
  }
  puVar2 = (undefined *)(lVar3 + 0xc);
LAB_1001bd0ef:
  lVar3 = FUN_1001b83f0(param_2);
  param_1[2] = puVar2 + lVar3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xfffd;
  *(undefined2 *)(param_1 + 4) = 0;
  if (param_2[1] == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a27b0(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

