// name: FUN_1001626bc
// address: 1001626bc

void FUN_1001626bc(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100670add(uVar5);
    }
LAB_1001627f5:
    FUN_1001782e9(0,0);
    return;
  }
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100670a67(uVar5);
    }
    goto LAB_1001627f5;
  }
  lVar2 = FUN_1001625b9(DAT_1008c4d90,param_3);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006709f1(uVar5);
    }
    goto LAB_1001627f5;
  }
  lVar3 = FUN_1001747ce(lVar2);
  lVar6 = lVar2;
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10067097b(uVar5);
    }
  }
  else {
    lVar4 = FUN_1001737f8(lVar3);
    if ((0 < lVar4) && (cVar1 = FUN_100173fef(lVar3,&cf__), cVar1 == '\0')) {
      lVar6 = FUN_100174a69(DAT_1008c4d90,lVar2);
      FUN_10017060f(lVar2);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_100670905(uVar5);
        }
        lVar2 = 0;
        FUN_1001782e9(0,0);
        lVar6 = 0;
        goto LAB_100162848;
      }
    }
    lVar2 = FUN_100174812(lVar6);
    if (lVar2 != 0) {
      FUN_100171502(*(undefined8 *)(param_1 + 0xa0),lVar6,param_2);
      FUN_100172f53(*(undefined8 *)(param_1 + 0x98),lVar2);
      goto LAB_100162848;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10067088f(uVar5);
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
LAB_100162848:
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar6);
  return;
}

