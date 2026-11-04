// name: FUN_100361d68
// address: 100361d68

void FUN_100361d68(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  undefined8 *local_38;
  
  DAT_1008bdd50 = 0;
  DAT_1008bdd40 = &DAT_1008bdd48;
  local_38 = (undefined8 *)0x0;
  lVar5 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar5);
    puVar2 = &DAT_1008bdd48;
    DAT_1008bdd48 = local_38;
    if ((undefined8 **)DAT_1008bdd40 == &DAT_1008bdd48) {
LAB_100361dea:
      puVar4 = &DAT_1008bdd48;
      puVar3 = &DAT_1008bdd48;
      if (local_38 == (undefined8 *)0x0) goto LAB_100361e50;
      if (puVar2[1] == 0) {
        puVar4 = puVar2;
        puVar3 = puVar2 + 1;
        goto LAB_100361e50;
      }
    }
    else {
      puVar3 = local_38;
      if (local_38 == (undefined8 *)0x0) {
        puVar3 = &DAT_1008bdd48;
        do {
          puVar2 = (undefined8 *)puVar3[2];
          bVar6 = (undefined8 *)*puVar2 == puVar3;
          puVar3 = puVar2;
        } while (bVar6);
      }
      else {
        do {
          puVar2 = puVar3;
          puVar3 = (undefined8 *)puVar2[1];
        } while ((undefined8 *)puVar2[1] != (undefined8 *)0x0);
      }
      if ((ulong)puVar2[4] < uVar1) goto LAB_100361dea;
      puVar4 = &DAT_1008bdd48;
      while (puVar3 = puVar4, local_38 != (undefined8 *)0x0) {
        while (puVar4 = local_38, (ulong)puVar4[4] <= uVar1) {
          if (uVar1 <= (ulong)puVar4[4]) goto LAB_100361ec9;
          local_38 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar3 = puVar4 + 1;
            goto LAB_100361e50;
          }
        }
        local_38 = (undefined8 *)*puVar4;
      }
LAB_100361e50:
      puVar2 = operator_new(0x38);
      puVar2[4] = uVar1;
      FUN_1001b7a5c(puVar2 + 5,param_1 + lVar5 + 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar4;
      *puVar3 = puVar2;
      if ((undefined8 *)*DAT_1008bdd40 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        DAT_1008bdd40 = (undefined8 *)*DAT_1008bdd40;
      }
      FUN_1001ad344(DAT_1008bdd48,puVar2);
      DAT_1008bdd50 = DAT_1008bdd50 + 1;
    }
LAB_100361ec9:
    lVar5 = lVar5 + 0x18;
    if (lVar5 == 0x90) {
      return;
    }
    local_38 = DAT_1008bdd48;
  } while( true );
}

