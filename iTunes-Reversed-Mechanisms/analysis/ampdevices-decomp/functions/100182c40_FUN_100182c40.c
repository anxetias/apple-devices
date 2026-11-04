// name: FUN_100182c40
// address: 100182c40

undefined8
FUN_100182c40(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*param_2 == '\0') {
    lVar1 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
    lVar4 = lVar2 + lVar1;
    *(long *)(param_5 + 2) = *(long *)(param_5 + 2) + lVar4;
    uVar6 = (ulong)*param_5;
    if (uVar6 != 0) {
      uVar5 = (lVar1 + uVar6) - 1;
      uVar3 = (lVar2 + uVar6) - 1;
      lVar4 = (uVar3 - uVar3 % uVar6) + (uVar5 - uVar5 % uVar6);
    }
    *(long *)(param_5 + 4) = *(long *)(param_5 + 4) + lVar4;
  }
  return 0;
}

