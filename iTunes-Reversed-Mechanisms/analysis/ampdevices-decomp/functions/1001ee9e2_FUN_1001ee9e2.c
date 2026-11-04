// name: FUN_1001ee9e2
// address: 1001ee9e2

undefined8
FUN_1001ee9e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  double dVar1;
  long *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = 0;
  }
  puVar4 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c5852(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0xffffff94;
  }
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 1) = 0x74696d72;
  *puVar4 = 0;
  FUN_1001eefae(puVar4 + 4,param_5);
  puVar4[10] = param_6;
  puVar4[0xb] = param_7;
  puVar4[0xc] = param_1;
  puVar4[0xd] = param_2;
  puVar4[0xe] = param_3;
  if (param_4 == 0) {
    param_4 = FUN_1001727a0();
  }
  uVar5 = FUN_1001705fc(param_4);
  puVar4[0xf] = uVar5;
  FUN_1001e9de0(&DAT_1008c5428);
  DAT_10088f6a8 = DAT_10088f6a8 + 1;
  puVar4[2] = DAT_10088f6a8;
  dVar1 = (double)puVar4[0xc];
  dVar7 = (double)puVar4[0xd];
  lVar6 = FUN_100172d93(DAT_100712540,
                        -(ulong)(dVar7 == 0.0) & DAT_100712540 |
                        ~-(ulong)(dVar7 == 0.0) &
                        (~-(ulong)(DAT_100700af8 == dVar7) & (ulong)dVar7 |
                        -(ulong)(DAT_100700af8 == dVar7) & DAT_100712540),0,0,0,FUN_1001ef138);
  if (lVar6 != 0) {
    uVar5 = FUN_1001705fc(lVar6);
    puVar4[0x10] = uVar5;
    if (((double)puVar4[0xe] != DAT_100701af0) || (NAN((double)puVar4[0xe]) || NAN(DAT_100701af0)))
    {
      _CFRunLoopTimerSetTolerance(uVar5);
    }
    FUN_100172b4b(puVar4[0xf],lVar6,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    if ((dVar1 != DAT_100700af8) || (NAN(dVar1) || NAN(DAT_100700af8))) {
      dVar7 = (double)_CFAbsoluteTimeGetCurrent();
      FUN_100172d9d(dVar7 + dVar1,lVar6);
    }
    FUN_100172863(puVar4[0xf]);
    FUN_10017060f(lVar6);
    if (param_8 != (undefined8 *)0x0) {
      *param_8 = puVar4[2];
    }
    FUN_1001ef466(&DAT_1008a2b48,puVar4);
    FUN_1001e9eb9(&DAT_1008c5428);
    return 0;
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    FUN_1006c57dc(uVar5);
  }
  FUN_1001782e9(0,0);
  FUN_10017060f(0);
  FUN_1001e9eb9(&DAT_1008c5428);
  plVar2 = (long *)puVar4[8];
  if (plVar2 == puVar4 + 4) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plVar2 == (long *)0x0) goto LAB_1001eec62;
  }
  (**(code **)(*plVar2 + lVar6))();
LAB_1001eec62:
  operator_delete(puVar4);
  return 0xffffff94;
}

