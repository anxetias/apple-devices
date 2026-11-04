// name: FUN_100382e00
// address: 100382e00

long FUN_100382e00(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  
  if (param_1 != param_2) {
    lVar10 = 0;
    do {
      lVar1 = param_1 + lVar10;
      lVar2 = param_3 + 0x30 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_100203686(lVar2,lVar1 + 0x30);
      FUN_100238d72(param_3 + lVar10 + 0x40,*(undefined8 *)(lVar1 + 0x40),
                    *(undefined8 *)(lVar1 + 0x48));
      lVar1 = param_1 + lVar10;
      lVar10 = lVar10 + 0x50;
    } while (lVar1 + 0x50 != param_2);
    param_3 = param_3 + lVar10;
  }
  return param_3;
}

