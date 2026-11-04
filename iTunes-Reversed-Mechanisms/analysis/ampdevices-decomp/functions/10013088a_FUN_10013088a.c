// name: FUN_10013088a
// address: 10013088a

undefined1  [16]
FUN_10013088a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 7) {
    uVar2 = *(undefined4 *)param_2;
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
    lVar1 = *(long *)(param_4 + 2);
    *param_4 = uVar2;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    if (lVar1 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    param_4[4] = *(undefined4 *)(param_2 + 2);
    FUN_1001b80b2(param_4 + 6,param_2 + 3);
    uVar6 = param_2[6];
    *(undefined8 *)(param_4 + 10) = param_2[5];
    *(undefined8 *)(param_4 + 0xc) = uVar6;
    param_4 = param_4 + 0xe;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_2;
  return auVar7;
}

