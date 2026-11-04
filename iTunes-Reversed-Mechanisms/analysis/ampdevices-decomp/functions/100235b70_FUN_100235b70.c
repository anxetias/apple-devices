// name: FUN_100235b70
// address: 100235b70

int FUN_100235b70(undefined4 param_1,undefined4 param_2,undefined8 param_3,short param_4,
                 long param_5)

{
  short sVar1;
  undefined1 local_3c [12];
  
  if (param_5 == 0) {
    sVar1 = _AECreateAppleEvent(param_1,param_2,0,(int)param_4,0,param_3);
  }
  else {
    sVar1 = _AECreateDesc(0x70736e20,param_5,8,local_3c);
    if (sVar1 == 0) {
      sVar1 = _AECreateAppleEvent(param_1,param_2,local_3c,(int)param_4,0,param_3);
      _AEDisposeDesc(local_3c);
    }
  }
  return (int)sVar1;
}

