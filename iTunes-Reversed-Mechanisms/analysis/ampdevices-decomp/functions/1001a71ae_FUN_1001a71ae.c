// name: FUN_1001a71ae
// address: 1001a71ae

long * FUN_1001a71ae(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = operator_new(0xd8,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_10017afda(puVar2);
    *puVar2 = &PTR_FUN_10083c8d0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)((long)puVar2 + 0xc5) = 0;
    *(undefined8 *)((long)puVar2 + 0xcd) = 0;
  }
  FUN_1001a7822(param_4,puVar2);
  if (*param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069e747(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_1001a72f6(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10069e6d1(uVar3);
      }
      FUN_1001782e9(0,0);
      FUN_1002188e4(param_4);
    }
  }
  return param_4;
}

