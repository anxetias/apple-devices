// name: FUN_1002d7a42
// address: 1002d7a42

int FUN_1002d7a42(long param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  char local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  void *local_58;
  char local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  iVar3 = 0;
  if (1 < param_2) {
    puVar7 = (undefined8 *)(param_1 + 0x15400);
    puVar6 = *(undefined8 **)(param_1 + 0x15400);
    puVar5 = puVar7;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        bVar8 = (ulong)puVar6[4] < param_2;
        if (puVar6[4] == param_2) {
          bVar8 = (ulong)puVar6[5] < param_4;
        }
        if (bVar8 == false) {
          puVar5 = puVar6;
        }
        puVar6 = (undefined8 *)puVar6[bVar8];
      } while (puVar6 != (undefined8 *)0x0);
      if (puVar5 != puVar7) {
        bVar8 = param_2 < (ulong)puVar5[4];
        if (puVar5[4] == param_2) {
          bVar8 = param_4 < (ulong)puVar5[5];
        }
        if (!bVar8) {
          return *(int *)(puVar5 + 6);
        }
      }
    }
    local_78[0] = '\0';
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    iVar3 = 0;
    local_48 = param_1;
    local_40 = param_5;
    local_38 = param_3;
    FUN_100415834(local_78,0);
    if (local_78[0] == '\x01') {
      if (local_40 == 0) {
        iVar3 = FUN_1000c5310(uStack_68._4_4_,param_2,param_4,0);
      }
      else {
        iVar3 = FUN_100056610(uStack_68._4_4_,param_2,local_38,param_4,local_40,0);
      }
      if (iVar3 == 0) {
        iVar4 = FUN_1000ad740(uStack_68._4_4_,param_2);
        iVar3 = 0;
        if (iVar4 == 0) {
          FUN_10032f11e(&local_58);
          if (local_58 == (void *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_1000b8430(uStack_68._4_4_,local_58,param_2);
            if (local_50 == '\x01') {
              operator_delete(local_58);
            }
          }
        }
      }
    }
    FUN_100415916(local_78);
    puVar6 = (undefined8 *)*puVar7;
    while (puVar5 = puVar7, puVar6 != (undefined8 *)0x0) {
      while( true ) {
        puVar7 = puVar6;
        uVar1 = puVar7[4];
        bVar8 = param_2 < uVar1;
        if (uVar1 == param_2) {
          bVar8 = param_4 < (ulong)puVar7[5];
        }
        if (bVar8) break;
        bVar8 = uVar1 < param_2;
        if (uVar1 == param_2) {
          bVar8 = (ulong)puVar7[5] < param_4;
        }
        if (!bVar8) {
          return iVar3;
        }
        puVar6 = (undefined8 *)puVar7[1];
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          puVar5 = puVar7 + 1;
          goto LAB_1002d7bbc;
        }
      }
      puVar6 = (undefined8 *)*puVar7;
    }
LAB_1002d7bbc:
    puVar6 = operator_new(0x38);
    lVar2 = local_48;
    puVar6[4] = param_2;
    puVar6[5] = param_4;
    *(int *)(puVar6 + 6) = iVar3;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = puVar7;
    *puVar5 = puVar6;
    if (**(long **)(local_48 + 0x153f8) != 0) {
      *(long *)(local_48 + 0x153f8) = **(long **)(local_48 + 0x153f8);
      puVar6 = (undefined8 *)*puVar5;
    }
    FUN_1001ad344(*(undefined8 *)(local_48 + 0x15400),puVar6);
    *(long *)(lVar2 + 0x15408) = *(long *)(lVar2 + 0x15408) + 1;
  }
  return iVar3;
}

