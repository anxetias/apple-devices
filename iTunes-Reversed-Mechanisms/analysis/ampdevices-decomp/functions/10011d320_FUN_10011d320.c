// name: FUN_10011d320
// address: 10011d320

void FUN_10011d320(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)(param_5 + 0x19f5);
  pvVar3 = *(void **)(param_5 + 0x1910);
  *(void **)(param_5 + 0x1940) = pvVar3;
  *(undefined8 *)(param_5 + 0x1950) = *(undefined8 *)(param_5 + 0x1948);
  pvVar4 = pvVar3;
  if ((ulong)bVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_100106acc(param_1 + 8,*(undefined8 *)(param_3 + uVar2 * 8),
                    *(undefined8 *)(param_4 + uVar2 * 8),param_5,param_2);
      FUN_1001063d4(param_1 + 8,*(undefined8 *)(param_3 + uVar2 * 8),
                    *(undefined8 *)(param_4 + uVar2 * 8),param_5);
      param_2 = param_2 + 0x80;
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
    pvVar4 = *(void **)(param_5 + 0x1910);
    pvVar3 = *(void **)(param_5 + 0x1940);
  }
  _memcpy(pvVar4,pvVar3,0x280);
  _memcpy(*(void **)(param_5 + 0x1948),*(void **)(param_5 + 0x1950),0x280);
  return;
}

