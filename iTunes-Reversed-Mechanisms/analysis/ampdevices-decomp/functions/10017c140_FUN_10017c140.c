// name: FUN_10017c140
// address: 10017c140

void FUN_10017c140(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar4 = FUN_1001ad0fc(param_2);
    _CGContextSetFillColorWithColor(lVar1,uVar4);
    _CGColorRelease(uVar4);
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 4);
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  return;
}

