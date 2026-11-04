// name: FUN_100284f52
// address: 100284f52

long FUN_100284f52(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  if (param_1 != param_2) {
    lVar6 = 0;
    do {
      lVar1 = param_1 + lVar6;
      FUN_1001a8c1c(param_3 + lVar6,lVar1);
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      puVar2 = (undefined4 *)(param_3 + 8 + lVar6);
      *puVar2 = *(undefined4 *)(lVar1 + 8);
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x18;
    } while (lVar1 + 0x18 != param_2);
    param_3 = param_3 + lVar6;
  }
  return param_3;
}

