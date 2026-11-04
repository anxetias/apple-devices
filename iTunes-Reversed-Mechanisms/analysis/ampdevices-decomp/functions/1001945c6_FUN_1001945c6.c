// name: FUN_1001945c6
// address: 1001945c6

int FUN_1001945c6(char *param_1,char param_2)

{
  char cVar1;
  short sVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_2c [12];
  undefined1 local_20 [8];
  
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100694fe3(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    cVar1 = FUN_1001ce65d(0x464e4452,0x4d414353,local_20);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      iVar5 = -600;
      if (cVar1 != '\0') {
        FUN_100694f70(uVar4);
      }
    }
    else {
      sVar3 = _strlen(param_1);
      sVar2 = _AECreateDesc(0x75746638,param_1,sVar3,local_2c);
      if (sVar2 == 0) {
        iVar5 = FUN_100235c03(local_20,0x4755524c,0x4755524c,local_2c);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            if (param_2 != '\0') {
              _SetFrontProcess(local_20);
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_100694e98(iVar5,uVar4);
            }
          }
        }
        _AEDisposeDesc(local_2c);
      }
      else {
        iVar5 = -0x80;
        if (sVar2 != -0x80) {
          iVar5 = (int)sVar2;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_100694f04(iVar5,uVar4);
          }
        }
      }
    }
  }
  return iVar5;
}

