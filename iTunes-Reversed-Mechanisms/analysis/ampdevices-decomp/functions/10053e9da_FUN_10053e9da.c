// name: FUN_10053e9da
// address: 10053e9da

undefined8 FUN_10053e9da(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  iVar12 = param_2[8];
  param_1[1] = 0x6974756e6d644864;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[4];
  FUN_1001c631b(*(undefined8 *)(param_2 + 6),param_1 + 3,0x460);
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar7 = param_2[0xf];
  uVar8 = param_2[0x10];
  uVar9 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar11 = param_2[0x13];
  *(undefined4 *)((long)param_1 + 0x494) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x93) = uVar9;
  *(undefined4 *)((long)param_1 + 0x49c) = uVar10;
  *(undefined4 *)(param_1 + 0x94) = uVar11;
  *(undefined4 *)(param_1 + 0x91) = uVar5;
  *(undefined4 *)((long)param_1 + 0x48c) = uVar6;
  *(undefined4 *)(param_1 + 0x92) = uVar7;
  *(undefined4 *)((long)param_1 + 0x494) = uVar8;
  *(undefined4 *)(param_1 + 0x8f) = uVar1;
  *(undefined4 *)((long)param_1 + 0x47c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)((long)param_1 + 0x484) = uVar4;
  if (iVar12 == 0) {
    iVar12 = FUN_1003b73be(param_2[4],*(undefined8 *)(param_2 + 6),0,0);
  }
  (**(code **)(*param_1 + 0x140))(param_1,iVar12);
  return 0;
}

