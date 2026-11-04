// name: FUN_1001ba31c
// address: 1001ba31c

ulong FUN_1001ba31c(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_1[1] != 0) {
      FUN_1001b8454(param_1);
      lVar4 = *param_1;
      if (lVar4 != 0) goto LAB_1001ba33e;
    }
  }
  else {
LAB_1001ba33e:
    puVar2 = (undefined2 *)(lVar4 + 0xc);
  }
  uVar3 = FUN_1001b8378(param_1);
  uVar6 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  uVar3 = FUN_1001735df(0,puVar2,uVar3,uVar6);
  lVar4 = *param_2;
  if (lVar4 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_2[1] == 0) goto LAB_1001ba37d;
    FUN_1001b8454(param_2);
    lVar4 = *param_2;
    if (lVar4 == 0) goto LAB_1001ba37d;
  }
  puVar2 = (undefined2 *)(lVar4 + 0xc);
LAB_1001ba37d:
  uVar5 = FUN_1001b8378(param_2);
  uVar6 = FUN_1001735df(0,puVar2,uVar5,uVar6);
  uVar5 = FUN_1001737f8(uVar3);
  cVar1 = FUN_100173c2a(uVar3,uVar6,0,uVar5,param_3 & 0xffffffff,0);
  FUN_10017060f(uVar3);
  FUN_10017060f(uVar6);
  return CONCAT71((int7)(param_3 >> 8),cVar1 != '\0') & 0xffffffff;
}

