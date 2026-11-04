// name: FUN_1002a404a
// address: 1002a404a

undefined1  [16]
FUN_1002a404a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  plVar8 = (long *)FUN_1002a40c0(param_1,param_2,&local_30,local_38,param_3);
  pvVar9 = (void *)*plVar8;
  if (pvVar9 == (void *)0x0) {
    pvVar9 = operator_new(0x38);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[3];
    uVar5 = param_4[4];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    *(undefined4 *)((long)pvVar9 + 0x1c) = *param_4;
    *(undefined4 *)((long)pvVar9 + 0x20) = uVar1;
    *(undefined4 *)((long)pvVar9 + 0x24) = uVar2;
    *(undefined4 *)((long)pvVar9 + 0x28) = uVar3;
    *(undefined4 *)((long)pvVar9 + 0x28) = uVar4;
    *(undefined4 *)((long)pvVar9 + 0x2c) = uVar5;
    *(undefined4 *)((long)pvVar9 + 0x30) = uVar6;
    *(undefined4 *)((long)pvVar9 + 0x34) = uVar7;
    FUN_10020e4b6(param_1,local_30,plVar8,pvVar9);
    uVar10 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar10 = 0;
  }
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = pvVar9;
  return auVar11;
}

