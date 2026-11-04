// name: FUN_1001ba6e0
// address: 1001ba6e0

long * FUN_1001ba6e0(long *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long lStack_40;
  
  local_48 = 0;
  lStack_40 = 0;
  if (param_3 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1001ba7a7;
  }
  if (param_3 < 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a20c4(uVar3);
    }
LAB_1001ba790:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_4 < -1) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a213a(uVar3);
      }
      goto LAB_1001ba790;
    }
    lVar4 = *param_2;
    if (param_4 == -1 && param_3 == 0) {
      *param_1 = lVar4;
      lVar5 = param_2[1];
      param_1[1] = lVar5;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        lVar5 = param_1[1];
      }
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      goto LAB_1001ba7a7;
    }
    if (lVar4 == 0) {
      puVar2 = &DAT_100711b00;
      if (param_2[1] != 0) {
        FUN_1001b8454(param_2);
        lVar4 = *param_2;
        if (lVar4 != 0) goto LAB_1001ba7c7;
      }
    }
    else {
LAB_1001ba7c7:
      puVar2 = (undefined2 *)(lVar4 + 0xc);
    }
    uVar3 = FUN_1001b8378(param_2);
    lVar4 = FUN_1001735df(0,puVar2,uVar3,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar4 != 0) {
      if (param_4 == -1) {
        param_4 = FUN_1001737f8(lVar4);
        param_4 = param_4 - param_3;
      }
      lVar5 = FUN_100173623(0,lVar4,param_3,param_4);
      if (lVar5 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a21b0(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001b81f2(&local_48,lVar5);
        FUN_10017060f(lVar5);
      }
      FUN_10017060f(lVar4);
    }
  }
  *param_1 = local_48;
  param_1[1] = lStack_40;
LAB_1001ba7a7:
  lStack_40 = 0;
  local_48 = 0;
  FUN_1001b811c(&local_48);
  return param_1;
}

