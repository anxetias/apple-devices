// name: FUN_100361c06
// address: 100361c06

void FUN_100361c06(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  DAT_1008bdd28 = (undefined8 *)0x0;
  DAT_1008bdd30 = 0;
  DAT_1008bdd20 = &DAT_1008bdd28;
  lVar5 = 0;
  do {
    puVar3 = &DAT_1008bdd28;
    if ((undefined8 **)DAT_1008bdd20 == &DAT_1008bdd28) {
LAB_100361c74:
      puVar6 = &DAT_1008bdd28;
      puVar4 = &DAT_1008bdd28;
      if (DAT_1008bdd28 == (undefined8 *)0x0) goto LAB_100361cc7;
      if (puVar3[1] == 0) {
        puVar6 = puVar3;
        puVar4 = puVar3 + 1;
        goto LAB_100361cc7;
      }
    }
    else {
      puVar4 = DAT_1008bdd28;
      if (DAT_1008bdd28 == (undefined8 *)0x0) {
        puVar4 = &DAT_1008bdd28;
        do {
          puVar3 = (undefined8 *)puVar4[2];
          bVar7 = (undefined8 *)*puVar3 == puVar4;
          puVar4 = puVar3;
        } while (bVar7);
      }
      else {
        do {
          puVar3 = puVar4;
          puVar4 = (undefined8 *)puVar3[1];
        } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
      }
      uVar1 = *(ulong *)(param_1 + lVar5);
      if ((ulong)puVar3[4] < uVar1) goto LAB_100361c74;
      puVar6 = &DAT_1008bdd28;
      puVar3 = DAT_1008bdd28;
      while (puVar4 = puVar6, puVar3 != (undefined8 *)0x0) {
        while (puVar6 = puVar3, (ulong)puVar6[4] <= uVar1) {
          if (uVar1 <= (ulong)puVar6[4]) goto LAB_100361d1b;
          puVar3 = (undefined8 *)puVar6[1];
          if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
            puVar4 = puVar6 + 1;
            goto LAB_100361cc7;
          }
        }
        puVar3 = (undefined8 *)*puVar6;
      }
LAB_100361cc7:
      puVar3 = operator_new(0x30);
      uVar2 = ((undefined8 *)(param_1 + lVar5))[1];
      puVar3[4] = *(undefined8 *)(param_1 + lVar5);
      puVar3[5] = uVar2;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar6;
      *puVar4 = puVar3;
      if ((undefined8 *)*DAT_1008bdd20 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        DAT_1008bdd20 = (undefined8 *)*DAT_1008bdd20;
      }
      FUN_1001ad344(DAT_1008bdd28,puVar3);
      DAT_1008bdd30 = DAT_1008bdd30 + 1;
    }
LAB_100361d1b:
    lVar5 = lVar5 + 0x10;
    if (lVar5 == 0x20) {
      return;
    }
  } while( true );
}

