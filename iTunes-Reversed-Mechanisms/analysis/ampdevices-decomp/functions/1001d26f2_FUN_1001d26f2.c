// name: FUN_1001d26f2
// address: 1001d26f2

void FUN_1001d26f2(ulong param_1,uint param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_440;
  ulong local_438 [64];
  ulong local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 2) {
LAB_1001d28e4:
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  local_238[0] = param_1;
  local_438[0] = param_1 + (ulong)(param_2 - 1) * 8;
  local_440 = 1;
  do {
    local_440 = (ulong)((int)local_440 - 1);
    puVar6 = (undefined8 *)local_238[local_440];
    puVar5 = (undefined8 *)local_438[local_440];
LAB_1001d2755:
    iVar2 = (int)local_440;
    if (puVar6 < puVar5) {
      uVar4 = (long)puVar5 - (long)puVar6 >> 3;
      puVar7 = puVar6;
      if (0xf < (long)uVar4) {
        uVar4 = uVar4 & 0xfffffffffffffffe;
        uVar1 = *puVar6;
        *puVar6 = *(undefined8 *)((long)puVar6 + uVar4 * 4);
        *(undefined8 *)((long)puVar6 + uVar4 * 4) = uVar1;
        puVar8 = puVar5;
LAB_1001d279a:
        puVar7 = puVar7 + 1;
        if (puVar7 < puVar8) break;
        goto LAB_1001d27be;
      }
      while (puVar8 = puVar7 + 1, puVar8 <= puVar5) {
        uVar1 = puVar7[1];
        while ((puVar6 <= puVar7 && (iVar3 = (*param_3)(*puVar7,uVar1,param_4), 0 < iVar3))) {
          puVar7[1] = *puVar7;
          puVar7 = puVar7 + -1;
        }
        puVar7[1] = uVar1;
        puVar7 = puVar8;
      }
    }
    if (iVar2 == 0) goto LAB_1001d28e4;
  } while( true );
  iVar3 = (*param_3)(*puVar6,*puVar7,param_4);
  if (0 < iVar3) goto LAB_1001d279a;
LAB_1001d27be:
  while ((puVar7 <= puVar8 && (iVar3 = (*param_3)(*puVar8,*puVar6,param_4), 0 < iVar3))) {
    puVar8 = puVar8 + -1;
  }
  if (puVar7 < puVar8) {
    uVar1 = *puVar7;
    *puVar7 = *puVar8;
    *puVar8 = uVar1;
    puVar8 = puVar8 + -1;
    goto LAB_1001d279a;
  }
  uVar1 = *puVar6;
  *puVar6 = *puVar8;
  *puVar8 = uVar1;
  if ((long)puVar5 - (long)puVar8 < (long)puVar8 - (long)puVar6) {
    if (puVar6 < puVar8 + -1) {
      local_238[local_440] = (ulong)puVar6;
      local_438[local_440] = (ulong)(puVar8 + -1);
      local_440 = (ulong)(iVar2 + 1);
    }
    puVar6 = puVar8 + 1;
  }
  else {
    if (puVar8 + 1 < puVar5) {
      local_238[local_440] = (ulong)(puVar8 + 1);
      local_438[local_440] = (ulong)puVar5;
      local_440 = (ulong)(iVar2 + 1);
    }
    puVar5 = puVar8 + -1;
  }
  goto LAB_1001d2755;
}

