// name: FUN_1001b15b3
// address: 1001b15b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001b15b3(int param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar5 [16];
  
  if (param_1 == 0) {
    FUN_1001b153d();
    uVar4 = 0;
  }
  else {
    FUN_1001e9de0(&DAT_1008c5200);
    puVar3 = (undefined8 *)FUN_1001b06f8(param_1);
    lVar2 = DAT_1008c5258;
    auVar5._8_8_ = extraout_XMM1_Qb;
    auVar5._0_8_ = extraout_XMM1_Qa;
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = 0xffffffe4;
    }
    else {
      *(undefined4 *)(DAT_1008c5258 + 0x58) = 0;
      auVar5 = pmovsxbd(auVar5,_DAT_1007115d0);
      DAT_1008c5278 =
           CONCAT44(*(int *)(lVar2 + 0x20) + (int)((ulong)DAT_1008c5278 >> 0x20),
                    auVar5._0_4_ + (int)DAT_1008c5278);
      FUN_1001b0678(&DAT_1008c5260,lVar2);
      *(undefined4 *)(lVar2 + 0x1c) = 1;
      puVar1 = (undefined *)*puVar3;
      if (puVar1 == &DAT_1008c5288 || puVar1 == &DAT_1008c5260) {
        FUN_1001b08b2(puVar3);
      }
      else {
        FUN_1001b0756(puVar1,puVar3);
        if (((double)puVar3[9] == DAT_100700af8) && (!NAN((double)puVar3[9]) && !NAN(DAT_100700af8))
           ) {
          puVar3[5] = 0;
        }
      }
      *(undefined1 *)((long)puVar3 + 0x5c) = 0;
      puVar3[9] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      uVar4 = 0;
      FUN_1001b07e6(puVar3,0);
      FUN_1001b0eaf(0);
    }
    FUN_1001e9eb9(&DAT_1008c5200);
  }
  return uVar4;
}

