// name: FUN_1002fad40
// address: 1002fad40

char FUN_1002fad40(long param_1,ulong param_2,undefined2 *param_3,undefined1 *param_4)

{
  ushort uVar1;
  undefined2 *puVar2;
  char cVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  
  *param_3 = 0;
  if ((int)param_2 == 0 || param_1 == 0) {
    cVar3 = '\0';
    uVar5 = 0;
    goto LAB_1002fae18;
  }
  lVar8 = 0;
  lVar6 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + lVar8 * 2);
    if (0x20 < uVar1) {
      uVar4 = FUN_1001e39bb(uVar1);
      uVar9 = (param_2 & 0xffffffff) - lVar8;
      if ((uVar4 & 0x3c) == 0) goto LAB_1002fade3;
      puVar2 = (undefined2 *)((param_1 + 2) - lVar6);
      goto LAB_1002fadb9;
    }
    lVar6 = lVar6 + -2;
    lVar8 = lVar8 + 1;
  } while ((int)param_2 != (int)lVar8);
  uVar9 = 0;
LAB_1002fade3:
  cVar3 = FUN_1002fbec6(param_1 - lVar6,uVar9 & 0xffffffff,param_3);
  if (cVar3 == '\0') {
    *param_3 = 0;
    cVar3 = '\0';
    uVar5 = 0;
    goto LAB_1002fae18;
  }
  goto LAB_1002fae12;
  while( true ) {
    uVar4 = FUN_1001e39bb(*puVar7);
    uVar9 = (ulong)((int)uVar9 - 1);
    puVar2 = puVar7 + 1;
    if ((uVar4 & 0x3c) == 0) break;
LAB_1002fadb9:
    puVar7 = puVar2;
    if ((int)uVar9 == 1) {
      uVar9 = 0;
      break;
    }
  }
  cVar3 = FUN_1002fbec6(puVar7,uVar9,param_3);
LAB_1002fae12:
  uVar5 = 0x81;
LAB_1002fae18:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar5;
  }
  return cVar3;
}

