// name: FUN_10016db5e
// address: 10016db5e

undefined8 FUN_10016db5e(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  FUN_10016dd2e(param_1,3);
  puVar2 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[5] <= puVar2 + 2) {
    FUN_10016de0e(param_1 + 1,1);
    puVar2 = (undefined8 *)param_1[4];
  }
  param_1[4] = (long)(puVar2 + 2);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  lVar1 = *param_1;
  puVar3 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar3 + 1) {
    FUN_10016d504(lVar1,1);
    puVar3 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar3 + 1;
  *puVar3 = 0x7b;
  return CONCAT71((int7)((ulong)puVar3 >> 8),1);
}

