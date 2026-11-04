// name: FUN_1001a7682
// address: 1001a7682

void FUN_1001a7682(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1001c62d9(param_2,0x28);
  *param_2 = *(undefined8 *)(param_1 + 200);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((long)param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)((long)param_2 + 0x14) = uVar2;
  param_2[3] = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = _CGBitmapContextGetBitmapInfo(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}

