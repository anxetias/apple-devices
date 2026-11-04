// name: FUN_1004c0d16
// address: 1004c0d16

undefined4
FUN_1004c0d16(long *param_1,undefined4 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    FUN_1003af743(param_4);
  }
  if ((param_5 != 0) && (FUN_1003af7fe(param_5), (*(byte *)(param_5 + 3) & 0x40) != 0)) {
    uVar7 = *(undefined4 *)(param_5 + 0x5c);
    uVar3 = *(undefined4 *)(param_5 + 0x60);
    uVar4 = *(undefined4 *)(param_5 + 100);
    uVar5 = *(undefined4 *)(param_5 + 0x68);
    uVar6 = *(undefined4 *)(param_5 + 0x6c);
    uVar2 = *(undefined8 *)(param_5 + 0x54);
    FUN_1003af7fe(param_5);
    *(undefined8 *)(param_5 + 0x54) = uVar2;
    *(undefined4 *)(param_5 + 0x5c) = uVar7;
    *(undefined4 *)(param_5 + 0x60) = uVar3;
    *(undefined4 *)(param_5 + 100) = uVar4;
    *(undefined4 *)(param_5 + 0x68) = uVar5;
    *(undefined4 *)(param_5 + 0x6c) = uVar6;
    *(byte *)(param_5 + 3) = *(byte *)(param_5 + 3) | 0x40;
  }
  if (param_6 != 0) {
    FUN_1003af8bd(param_6);
  }
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 < 0x48545450) {
    if (iVar1 == 0x44574e4c) {
      uVar7 = 0x234e;
      goto LAB_1004c0e14;
    }
    if (iVar1 == 0x46494c45) {
      uVar7 = (**(code **)(*param_1 + 0x318))(param_1,param_2,param_4,param_5,param_6);
      goto LAB_1004c0e14;
    }
  }
  else if ((iVar1 == 0x48545450) || (iVar1 == 0x53485244)) {
    uVar7 = (**(code **)(*param_1 + 800))(param_1,param_2,param_4,param_5,param_6);
    goto LAB_1004c0e14;
  }
  uVar7 = 0xfffffffc;
LAB_1004c0e14:
  if (param_7 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  }
  if ((int)param_1[0x9d] < 1) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  return uVar7;
}

