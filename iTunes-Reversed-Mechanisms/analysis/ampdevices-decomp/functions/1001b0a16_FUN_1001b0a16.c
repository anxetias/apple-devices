// name: FUN_1001b0a16
// address: 1001b0a16

undefined4 FUN_1001b0a16(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = (double)FUN_1001ebd46();
  if (DAT_1008c5258 != DAT_1008c5250) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069fafc(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  *(double *)(DAT_1008c5250 + 0x28) =
       *(double *)(DAT_1008c5250 + 0x28) - (dVar4 - *(double *)(DAT_1008c5250 + 0x40));
  uVar2 = FUN_1001b1795();
  if ((char)uVar2 == '\0') {
    if (((DAT_1008c52d0 != DAT_100700af8) || (NAN(DAT_1008c52d0) || NAN(DAT_100700af8))) &&
       (DAT_1008c52e0 == '\0')) {
      dVar4 = DAT_1008c52d0 - dVar4;
      if (dVar4 <= 0.0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10069fb72(uVar3);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
      }
      DAT_1008c52e0 = '\x01';
      if (DAT_1008c52d8 == 0) {
        FUN_1001ee941(dVar4,DAT_100700af8,0,0,FUN_1001b26a2,0,&DAT_1008c52d8);
      }
      else {
        FUN_1001eeea0();
      }
    }
  }
  else {
    FUN_1001b176b();
  }
  return uVar2;
}

