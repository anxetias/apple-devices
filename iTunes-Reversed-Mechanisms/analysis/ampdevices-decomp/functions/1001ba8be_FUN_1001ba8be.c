// name: FUN_1001ba8be
// address: 1001ba8be

undefined8 FUN_1001ba8be(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *param_3;
  if (lVar5 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_3[1] != 0) {
      FUN_1001b8454(param_3);
      lVar5 = *param_3;
      if (lVar5 != 0) goto LAB_1001ba8e5;
    }
  }
  else {
LAB_1001ba8e5:
    puVar1 = (undefined2 *)(lVar5 + 0xc);
  }
  uVar2 = FUN_1001b8378(param_3);
  uVar4 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  uVar2 = FUN_1001735df(0,puVar1,uVar2,uVar4);
  lVar5 = *param_4;
  if (lVar5 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_4[1] != 0) {
      FUN_1001b8454(param_4);
      lVar5 = *param_4;
      if (lVar5 != 0) goto LAB_1001ba91e;
    }
  }
  else {
LAB_1001ba91e:
    puVar1 = (undefined2 *)(lVar5 + 0xc);
  }
  uVar3 = FUN_1001b8378(param_4);
  uVar4 = FUN_1001735df(0,puVar1,uVar3,uVar4);
  uVar3 = FUN_1001737db(0,0);
  lVar5 = *param_2;
  if (lVar5 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_2[1] == 0) goto LAB_1001ba95f;
    FUN_1001b8454(param_2);
    lVar5 = *param_2;
    if (lVar5 == 0) goto LAB_1001ba95f;
  }
  puVar1 = (undefined2 *)(lVar5 + 0xc);
LAB_1001ba95f:
  uVar6 = FUN_1001b8378(param_2);
  FUN_100174240(uVar3,puVar1,uVar6);
  uVar6 = FUN_1001b8378(param_2);
  FUN_100173e8c(uVar3,uVar2,uVar4,0,uVar6,0x1b1);
  FUN_10017060f(uVar2);
  FUN_10017060f(uVar4);
  FUN_1001b7e36(param_1,uVar3);
  FUN_10017060f(uVar3);
  return param_1;
}

