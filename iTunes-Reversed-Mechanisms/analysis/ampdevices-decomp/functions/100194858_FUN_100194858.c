// name: FUN_100194858
// address: 100194858

int FUN_100194858(undefined4 param_1,uint param_2,long param_3,long param_4,long param_5,
                 char param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_b8 [84];
  undefined1 local_64 [8];
  undefined1 local_5c [12];
  long local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  char local_31;
  
  local_31 = param_6;
  if (param_4 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069529a(uVar4);
    }
  }
  else {
    uVar5 = (ulong)param_2;
    local_38 = param_1;
    cVar1 = FUN_1001ce65d(0x464e4452,0x4d414353,local_64);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') {
        return -600;
      }
      FUN_100695227(uVar4);
      return -600;
    }
    if (param_2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006951b1(uVar4);
      }
    }
    else {
      if (param_3 != 0) {
        local_50 = param_5;
        sVar2 = _AECreateList(0,0,0,local_5c);
        if (sVar2 == -0x80) {
          return -0x80;
        }
        if (sVar2 == 0) {
          do {
            iVar3 = FUN_10017d477(param_3,local_b8,0);
            if ((iVar3 == 0) && (iVar3 = FUN_100235c84(param_3,&local_48), iVar3 == 0)) {
              _AEPutDesc(local_5c,0,&local_48);
              _AEDisposeDesc(&local_48);
            }
            param_3 = param_3 + 0x420;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006950cf((int)sVar2,uVar4);
          }
          if (sVar2 != 0) {
            return (int)sVar2;
          }
        }
        iVar3 = FUN_100235b70(0x636f7265,local_38,local_b8,0xffffffff,local_64);
        if (iVar3 == 0) {
          sVar2 = _AEPutParamDesc(local_b8,0x2d2d2d2d,local_5c);
          if (sVar2 == 0) {
            iVar3 = FUN_100235c84(param_4,&local_48);
            lVar6 = local_50;
            if (iVar3 == 0) {
              sVar2 = _AEPutParamDesc(local_b8,0x696e7368,&local_48);
              iVar3 = (int)sVar2;
              _AEDisposeDesc(&local_48);
            }
          }
          else {
            iVar3 = (int)sVar2;
            lVar6 = local_50;
          }
          if ((lVar6 != 0) && (iVar3 == 0)) {
            sVar2 = _AEPutParamPtr(local_b8,0x6d767067,0x51447074,lVar6,4);
            iVar3 = (int)sVar2;
          }
          if (param_6 != '\0' && iVar3 == 0) {
            sVar2 = _AEPutParamPtr(local_b8,0x616c7270,0x626f6f6c,&local_31,1);
            iVar3 = (int)sVar2;
          }
          if (iVar3 == 0) {
            local_40 = DAT_10070e5f0;
            local_48 = DAT_10070e5e8;
            sVar2 = _AESend(local_b8,&local_48,0x71,0,0xffffffff,0,0);
            iVar3 = (int)sVar2;
            _AEDisposeDesc(&local_48);
          }
          _AEDisposeDesc(local_b8);
        }
        _AEDisposeDesc(local_5c);
        return iVar3;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069513b(uVar4);
      }
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

