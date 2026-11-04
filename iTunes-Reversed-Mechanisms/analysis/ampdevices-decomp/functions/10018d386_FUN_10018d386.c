// name: FUN_10018d386
// address: 10018d386

undefined8
FUN_10018d386(uint param_1,long param_2,undefined8 param_3,byte param_4,undefined4 param_5,
             long *param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_68;
  long local_60;
  undefined4 local_58;
  long local_50;
  undefined8 local_40;
  undefined4 local_34;
  
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006923d5(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    if (param_6 != (long *)0x0) {
      *param_6 = 0;
    }
    local_40 = param_3;
    local_34 = param_5;
    if (DAT_100890650 == '\0') {
      DAT_100890650 = '\x01';
      iVar3 = FUN_10018cf43();
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_1006922e9(uVar5);
        }
        FUN_1001782e9(0,0);
      }
    }
    lVar6 = FUN_1001c629e(0x30,&DAT_100711c6e);
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10069235f(uVar5);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffff94;
    }
    else {
      *(long *)(lVar6 + 0x18) = param_2;
      *(undefined8 *)(lVar6 + 0x28) = local_40;
      *(uint *)(lVar6 + 0x10) = param_1;
      *(byte *)(lVar6 + 0x20) = param_4;
      if (param_6 != (long *)0x0) {
        *param_6 = lVar6;
      }
      if ((param_4 & (byte)local_34) == 1) {
        cVar2 = FUN_1001822a9();
        if (cVar2 != '\0') {
          lVar7 = FUN_100181923();
          if (lVar7 != 0) {
            do {
              lVar1 = lVar7 + 0x18;
              uVar4 = FUN_100181e82(lVar1);
              if ((uVar4 & param_1) != 0) {
                FUN_1001c62d9(&local_68,0x28);
                local_58 = *(undefined4 *)(lVar7 + 0x14);
                local_50 = lVar7 + 0x480;
                local_68 = lVar1;
                local_60 = lVar1;
                (**(code **)(lVar6 + 0x18))
                          (lVar6,0x6d6e7420,&local_68,*(undefined8 *)(lVar6 + 0x28));
              }
              lVar7 = FUN_100181973(lVar7);
            } while (lVar7 != 0);
          }
        }
      }
      FUN_10018d89a(&DAT_1008c4db0,&DAT_1008c4db8,lVar6);
      uVar5 = 0;
    }
  }
  return uVar5;
}

