// name: FUN_1001bc178
// address: 1001bc178

long * FUN_1001bc178(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long *plVar8;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  long lVar7;
  
  plVar8 = (long *)*param_2;
  if ((long *)param_2[1] == plVar8) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a25d8(uVar2);
    }
LAB_1001bc1e7:
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if ((ulong)(param_2[1] - (long)plVar8) < (ulong)(param_3[1] - *param_3)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2562(uVar2);
    }
    goto LAB_1001bc1e7;
  }
  switch(param_3[1] - *param_3 >> 4) {
  case 1:
    break;
  case 2:
    local_80 = plVar8[2];
    local_78 = plVar8[3];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (long *)*param_3;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      puVar4 = &DAT_100711b00;
      if (plVar8[1] != 0) {
        FUN_1001b8454(plVar8);
        lVar3 = *plVar8;
        if (lVar3 != 0) goto LAB_1001bc353;
      }
    }
    else {
LAB_1001bc353:
      puVar4 = (undefined2 *)(lVar3 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
      puVar5 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x10));
        lVar7 = *(long *)(lVar3 + 0x10);
        if (lVar7 != 0) goto LAB_1001bc36b;
      }
    }
    else {
LAB_1001bc36b:
      puVar5 = (undefined2 *)(lVar7 + 0xc);
    }
    FUN_1001bb630(param_1,&local_80,puVar4,puVar5);
    plVar8 = &local_80;
    goto LAB_1001bc4d9;
  case 3:
    local_70 = plVar8[4];
    local_68 = plVar8[5];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (long *)*param_3;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      puVar4 = &DAT_100711b00;
      if (plVar8[1] != 0) {
        FUN_1001b8454(plVar8);
        lVar3 = *plVar8;
        if (lVar3 != 0) goto LAB_1001bc3c5;
      }
    }
    else {
LAB_1001bc3c5:
      puVar4 = (undefined2 *)(lVar3 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
      puVar5 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x10));
        lVar7 = *(long *)(lVar3 + 0x10);
        if (lVar7 != 0) goto LAB_1001bc3dc;
      }
    }
    else {
LAB_1001bc3dc:
      puVar5 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x20);
    if (lVar7 == 0) {
      puVar6 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x28) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x20));
        lVar7 = *(long *)(lVar3 + 0x20);
        if (lVar7 != 0) goto LAB_1001bc3f3;
      }
    }
    else {
LAB_1001bc3f3:
      puVar6 = (undefined2 *)(lVar7 + 0xc);
    }
    FUN_1001bb630(param_1,&local_70,puVar4,puVar5,puVar6);
    plVar8 = &local_70;
    goto LAB_1001bc4d9;
  case 4:
    local_60 = plVar8[6];
    local_58 = plVar8[7];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (long *)*param_3;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      local_38 = &DAT_100711b00;
      if (plVar8[1] != 0) {
        FUN_1001b8454(plVar8);
        lVar3 = *plVar8;
        if (lVar3 != 0) goto LAB_1001bc2ac;
      }
    }
    else {
LAB_1001bc2ac:
      local_38 = (undefined2 *)(lVar3 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
      puVar4 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x10));
        lVar7 = *(long *)(lVar3 + 0x10);
        if (lVar7 != 0) goto LAB_1001bc2c4;
      }
    }
    else {
LAB_1001bc2c4:
      puVar4 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x20);
    if (lVar7 == 0) {
      puVar5 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x28) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x20));
        lVar7 = *(long *)(lVar3 + 0x20);
        if (lVar7 != 0) goto LAB_1001bc2db;
      }
    }
    else {
LAB_1001bc2db:
      puVar5 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x30);
    if (lVar7 == 0) {
      puVar6 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x38) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x30));
        lVar7 = *(long *)(lVar3 + 0x30);
        if (lVar7 != 0) goto LAB_1001bc2f2;
      }
    }
    else {
LAB_1001bc2f2:
      puVar6 = (undefined2 *)(lVar7 + 0xc);
    }
    FUN_1001bb630(param_1,&local_60,local_38,puVar4,puVar5,puVar6);
    plVar8 = &local_60;
    goto LAB_1001bc4d9;
  case 5:
    local_50 = plVar8[8];
    local_48 = plVar8[9];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (long *)*param_3;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      local_38 = &DAT_100711b00;
      if (plVar8[1] != 0) {
        FUN_1001b8454(plVar8);
        lVar3 = *plVar8;
        if (lVar3 != 0) goto LAB_1001bc44f;
      }
    }
    else {
LAB_1001bc44f:
      local_38 = (undefined2 *)(lVar3 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
      local_40 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x10));
        lVar7 = *(long *)(lVar3 + 0x10);
        if (lVar7 != 0) goto LAB_1001bc467;
      }
    }
    else {
LAB_1001bc467:
      local_40 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x20);
    if (lVar7 == 0) {
      puVar4 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x28) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x20));
        lVar7 = *(long *)(lVar3 + 0x20);
        if (lVar7 != 0) goto LAB_1001bc47f;
      }
    }
    else {
LAB_1001bc47f:
      puVar4 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x30);
    if (lVar7 == 0) {
      puVar5 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x38) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x30));
        lVar7 = *(long *)(lVar3 + 0x30);
        if (lVar7 != 0) goto LAB_1001bc497;
      }
    }
    else {
LAB_1001bc497:
      puVar5 = (undefined2 *)(lVar7 + 0xc);
    }
    lVar3 = *param_3;
    lVar7 = *(long *)(lVar3 + 0x40);
    if (lVar7 == 0) {
      puVar6 = &DAT_100711b00;
      if (*(long *)(lVar3 + 0x48) != 0) {
        FUN_1001b8454((long *)(lVar3 + 0x40));
        lVar7 = *(long *)(lVar3 + 0x40);
        if (lVar7 != 0) goto LAB_1001bc4ae;
      }
    }
    else {
LAB_1001bc4ae:
      puVar6 = (undefined2 *)(lVar7 + 0xc);
    }
    FUN_1001bb630(param_1,&local_50,local_38,local_40,puVar4,puVar5,puVar6);
    plVar8 = &local_50;
    goto LAB_1001bc4d9;
  default:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a24ec(uVar2);
    }
    FUN_1001782e9(0,0);
    plVar8 = (long *)*param_2;
  case 0:
    lVar3 = *plVar8;
    *param_1 = lVar3;
    lVar7 = plVar8[1];
    param_1[1] = lVar7;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      lVar7 = param_1[1];
    }
    if (lVar7 == 0) {
      return param_1;
    }
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    return param_1;
  }
  local_90 = *plVar8;
  local_88 = plVar8[1];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  param_3 = (long *)*param_3;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    puVar4 = &DAT_100711b00;
    if (param_3[1] != 0) {
      FUN_1001b8454(param_3);
      lVar3 = *param_3;
      if (lVar3 != 0) goto LAB_1001bc250;
    }
  }
  else {
LAB_1001bc250:
    puVar4 = (undefined2 *)(lVar3 + 0xc);
  }
  FUN_1001bb630(param_1,&local_90,puVar4);
  plVar8 = &local_90;
LAB_1001bc4d9:
  FUN_1001b811c(plVar8);
  return param_1;
}

