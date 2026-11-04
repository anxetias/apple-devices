// name: FUN_10011760e
// address: 10011760e

undefined8 FUN_10011760e(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_1001176d2();
  uVar6 = 0xfffffffe;
  if ((((iVar3 == 0) && (iVar3 = FUN_100115618(param_1,param_2,param_3), iVar3 == 0)) &&
      (iVar3 = FUN_10011787a(param_1,param_3), iVar3 == 0)) &&
     ((uVar6 = 0, *(long *)(param_1 + 0x1ccf0) != 0 &&
      (uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0xc258) + 0x5a0), uVar5 != 0)))) {
    uVar1 = *(undefined4 *)(param_1 + 0x1cd04);
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + uVar4 * 8);
      _vDSP_vadd(uVar2,1,*(undefined8 *)(param_1 + 0x1cbd0 + uVar4 * 8),1,uVar2,1,uVar1);
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return uVar6;
}

