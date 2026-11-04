// name: FUN_1001eeea0
// address: 1001eeea0

undefined8 FUN_1001eeea0(double param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  FUN_1001e9de0(&DAT_1008c5428);
  lVar2 = FUN_1001eee40(param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar2 + 8) == 0x74696d72) {
    if ((*(long *)(lVar2 + 0x80) == 0) || (cVar1 = FUN_100172e21(), cVar1 == '\0')) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c59b4(uVar3);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0xffffffce;
    }
    else {
      if ((param_1 != DAT_100700af8) || (dVar4 = DAT_100712540, NAN(param_1) || NAN(DAT_100700af8)))
      {
        dVar4 = (double)_CFAbsoluteTimeGetCurrent();
        dVar4 = dVar4 + param_1;
      }
      FUN_100172d9d(dVar4,*(undefined8 *)(lVar2 + 0x80));
      uVar3 = 0;
    }
    *(undefined1 *)(lVar2 + 0x88) = 1;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c593e(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  FUN_1001e9eb9(&DAT_1008c5428);
  return uVar3;
}

