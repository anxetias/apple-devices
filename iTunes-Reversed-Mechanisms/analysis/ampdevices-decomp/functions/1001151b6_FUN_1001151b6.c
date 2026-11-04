// name: FUN_1001151b6
// address: 1001151b6

undefined8 FUN_1001151b6(long *param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  param_1[0x184b] = param_2;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_3 + 0x1414);
  param_1[0x14] = param_3;
  (**(code **)(*param_1 + 0x60))();
  uVar1 = *(uint *)(param_4 + 0x68);
  *(uint *)(param_1 + 0x1859) = uVar1;
  uVar4 = (undefined1)(uVar1 >> (*(char *)((long)param_1 + 0xa9) + 4U & 0x1f));
  *(undefined1 *)((long)param_1 + 0xaa) = uVar4;
  if ((char)param_1[0x15] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      (**(code **)(*param_1 + 0x28))
                (param_1,*(undefined4 *)(param_1[0x184b] + 0x680),uVar8 & 0xffffffff,param_5);
      iVar5 = (**(code **)(*param_1 + 0x50))(param_1,param_1[uVar8 + 0xf]);
      if (iVar5 != 0) {
        return 0xfffffffe;
      }
      puVar2 = (undefined4 *)param_1[uVar8 + 0xf];
      *(undefined2 *)(*(long *)(puVar2 + 6) + 10) = 0x2020;
      *puVar2 = 1;
      uVar1 = *(uint *)(param_2 + 0x5c8 + uVar8 * 4);
      uVar7 = (ulong)uVar1;
      lVar3 = param_1[0x184b];
      FUN_10011530e(param_1,param_1[uVar7 + 0x184c],uVar7);
      if (*(char *)(lVar3 + 4 + uVar7 * 0x78) != '\0') {
        FUN_10011530e(param_1,param_1[(ulong)(uVar1 + 1) + 0x184c]);
      }
      uVar8 = uVar8 + 1;
      uVar7 = (ulong)*(byte *)(param_1 + 0x15);
    } while (uVar8 < uVar7);
    uVar4 = *(undefined1 *)((long)param_1 + 0xaa);
  }
  uVar6 = FUN_1001195ca(param_1[0x1858],param_2,param_1 + 0x184c,param_1 + 0xf,uVar4,uVar7);
  return uVar6;
}

