// name: FUN_1001bc874
// address: 1001bc874

undefined8 * FUN_1001bc874(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  long *local_40;
  undefined1 *local_38;
  
  local_40 = param_3;
  lVar7 = FUN_1001b83f0(param_3);
  local_58 = param_4;
  lVar8 = FUN_1001b83f0(param_4);
  FUN_1001a8b4c(&local_80,(lVar8 + lVar7) * 3 + 2);
  local_48 = local_80;
  local_38 = local_80;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    puVar9 = &DAT_100711b02;
    if (*param_2 != 0) {
      FUN_1001b87d0(param_2);
      lVar7 = param_2[1];
      if (lVar7 != 0) goto LAB_1001bc8d8;
    }
  }
  else {
LAB_1001bc8d8:
    puVar9 = (undefined *)(lVar7 + 0xc);
  }
  lVar8 = FUN_1001b83f0(param_2);
  lVar7 = param_2[1];
  local_50 = param_1;
  if (lVar7 == 0) {
    puVar10 = &DAT_100711b02;
    if (*param_2 != 0) {
      FUN_1001b87d0(param_2);
      lVar7 = param_2[1];
      if (lVar7 != 0) goto LAB_1001bc8fb;
    }
  }
  else {
LAB_1001bc8fb:
    puVar10 = (undefined *)(lVar7 + 0xc);
  }
  plVar5 = local_40;
  puVar4 = local_50;
  plVar3 = local_58;
  puVar9 = puVar9 + lVar8;
  do {
    if (puVar9 == puVar10) goto LAB_1001bc97c;
    cVar2 = puVar9[-1];
    if (cVar2 == '&') break;
    if (cVar2 == '/') {
      uVar6 = 0x3f;
      goto LAB_1001bc96e;
    }
    puVar9 = puVar9 + -1;
  } while (cVar2 != '?');
  uVar6 = 0x26;
LAB_1001bc96e:
  local_38 = local_48 + 1;
  *local_48 = uVar6;
LAB_1001bc97c:
  local_68 = 0x43ffffff01ffb381;
  local_60 = 0x23ffffff;
  lVar7 = local_40[1];
  if (lVar7 == 0) {
    puVar9 = &DAT_100711b02;
    if (*local_40 != 0) {
      FUN_1001b87d0();
      lVar7 = plVar5[1];
      if (lVar7 != 0) goto LAB_1001bc9ab;
    }
  }
  else {
LAB_1001bc9ab:
    puVar9 = (undefined *)(lVar7 + 0xc);
  }
  lVar7 = FUN_1001b83f0(local_40);
  FUN_1001bcad3(puVar9,puVar9 + lVar7,&local_68,&local_38);
  puVar1 = local_38 + 1;
  *local_38 = 0x3d;
  lVar7 = plVar3[1];
  local_38 = puVar1;
  if (lVar7 == 0) {
    puVar9 = &DAT_100711b02;
    if (*plVar3 == 0) goto LAB_1001bc9f4;
    FUN_1001b87d0(plVar3);
    lVar7 = plVar3[1];
    if (lVar7 == 0) goto LAB_1001bc9f4;
  }
  puVar9 = (undefined *)(lVar7 + 0xc);
LAB_1001bc9f4:
  lVar7 = FUN_1001b83f0(plVar3);
  FUN_1001bcad3(puVar9,puVar9 + lVar7,&local_68,&local_38);
  uVar11 = FUN_1001bcb60(param_2[1],local_80,(long)local_38 - (long)local_80);
  *puVar4 = 0;
  puVar4[1] = uVar11;
  if (local_80 != (undefined1 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  return puVar4;
}

