// name: FUN_10027c08c
// address: 10027c08c

undefined1  [16]
FUN_10027c08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  plVar4 = (long *)FUN_10027c0fa(param_1,param_2,&local_30,local_38,param_3);
  pvVar5 = (void *)*plVar4;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = operator_new(0x30);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)((long)pvVar5 + 0x20) = *param_4;
    *(undefined4 *)((long)pvVar5 + 0x24) = uVar1;
    *(undefined4 *)((long)pvVar5 + 0x28) = uVar2;
    *(undefined4 *)((long)pvVar5 + 0x2c) = uVar3;
    FUN_10020e4b6(param_1,local_30,plVar4,pvVar5);
    uVar6 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = pvVar5;
  return auVar7;
}

