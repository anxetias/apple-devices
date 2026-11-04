// name: FUN_1001e042d
// address: 1001e042d

void FUN_1001e042d(short *param_1,undefined2 *param_2)

{
  short sVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006baee9(uVar4);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (short *)0x0) {
      sVar1 = *param_1;
      lVar3 = 0;
      do {
        if (sVar1 == 0) {
LAB_1001e04d7:
          *param_2 = (short)lVar3;
          return;
        }
        if ((int)lVar3 == 0xff) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006badfd(uVar4);
          }
          FUN_1001782e9(0,0);
          lVar3 = 0xff;
          goto LAB_1001e04d7;
        }
        param_2[lVar3 + 1] = sVar1;
        sVar1 = param_1[lVar3 + 1];
        lVar3 = lVar3 + 1;
      } while( true );
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bae73(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

