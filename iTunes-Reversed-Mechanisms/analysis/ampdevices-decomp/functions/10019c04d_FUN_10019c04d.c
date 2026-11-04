// name: FUN_10019c04d
// address: 10019c04d

int FUN_10019c04d(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5
                 ,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100699634(uVar4);
    }
  }
  else {
    if (param_4 != 0) {
      lVar3 = FUN_1001c6429(0x1d8);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = param_3;
        uVar4 = FUN_1001705fc(param_4);
        *(undefined8 *)(lVar3 + 0x18) = uVar4;
        *(undefined4 *)(lVar3 + 0x20) = param_5;
        uVar4 = FUN_1001705fc(param_14);
        *(undefined8 *)(lVar3 + 0x28) = uVar4;
        *(undefined8 *)(lVar3 + 0x30) = param_1;
        lVar5 = lVar3 + 0x40;
        if (param_11 == 0) {
          lVar5 = param_6;
        }
        *(undefined8 *)(lVar3 + 0x38) = param_2;
        *(long *)(lVar3 + 0x50) = lVar5;
        lVar5 = lVar3 + 0x48;
        if (param_11 == 0) {
          lVar5 = param_7;
        }
        *(undefined8 *)(lVar3 + 0x60) = param_8;
        *(long *)(lVar3 + 0x58) = lVar5;
        *(undefined8 *)(lVar3 + 0x68) = param_9;
        *(undefined8 *)(lVar3 + 0x70) = param_10;
        *(long *)(lVar3 + 0x78) = param_11;
        *(undefined8 *)(lVar3 + 0x80) = param_12;
        *(undefined8 *)(lVar3 + 0x88) = param_13;
        iVar2 = FUN_1001e9de0(param_3 + 8);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006994dc(iVar2,uVar4);
          }
        }
        FUN_10019f3d1(param_3 + 0x50,param_3 + 0x58,lVar3);
        FUN_10019ee3d(param_3);
        return iVar2;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100699548(uVar4);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006995be(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

