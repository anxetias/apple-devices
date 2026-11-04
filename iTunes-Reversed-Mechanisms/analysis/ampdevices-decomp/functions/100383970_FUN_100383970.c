// name: FUN_100383970
// address: 100383970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100383970(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 1) != 0) {
    FUN_1002af503(param_2);
    pbVar2 = *(byte **)(param_2 + 0x18);
    uVar1 = *(uint *)(pbVar2 + 0xc);
    if ((ulong)uVar1 < 10) {
      lVar3 = (ulong)uVar1 * 0x38;
      *(undefined8 *)(pbVar2 + lVar3 + 0x10) = *param_1;
      *(undefined8 *)(pbVar2 + lVar3 + 0x1c) = param_1[1];
      *(float *)(pbVar2 + lVar3 + 0x2c) = (float)*(uint *)(param_1 + 2) / DAT_100717f3c;
      *(undefined8 *)(pbVar2 + lVar3 + 0x30) = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined4 *)(pbVar2 + lVar3 + 0x38) = *(undefined4 *)((long)param_1 + 0x1c);
      pbVar2[lVar3 + 0x3c] = *(byte *)((long)param_1 + 0x36);
      pbVar2[lVar3 + 0x3d] = *(byte *)(param_1 + 4);
      pbVar2[lVar3 + 0x3e] = *(byte *)((long)param_1 + 0x24);
      *(undefined4 *)(pbVar2 + lVar3 + 0x40) = *(undefined4 *)(param_1 + 5);
      auVar4._4_4_ = *(undefined4 *)(param_1 + 7);
      auVar4._0_4_ = *(undefined4 *)((long)param_1 + 0x2c);
      auVar4._8_8_ = 0;
      auVar4 = pmovzxdq(auVar4,auVar4);
      auVar5._0_4_ = (float)(SUB168(auVar4 | _DAT_10070e500,0) - (double)DAT_10070e500);
      auVar5._4_4_ = (float)(SUB168(auVar4 | _DAT_10070e500,8) - DAT_10070e500._8_8_);
      auVar5._8_8_ = 0;
      auVar4 = divps(auVar5,_DAT_100745a30);
      *(long *)(pbVar2 + lVar3 + 0x24) = auVar4._0_8_;
      *(undefined4 *)(pbVar2 + lVar3 + 0x18) = *(undefined4 *)(param_1 + 6);
      pbVar2[lVar3 + 0x45] = *(byte *)((long)param_1 + 0x35);
      pbVar2[lVar3 + 0x44] = *(byte *)((long)param_1 + 0x34);
      *(uint *)(pbVar2 + 0xc) = uVar1 + 1;
      *pbVar2 = *pbVar2 | 8;
    }
  }
  return 0;
}

