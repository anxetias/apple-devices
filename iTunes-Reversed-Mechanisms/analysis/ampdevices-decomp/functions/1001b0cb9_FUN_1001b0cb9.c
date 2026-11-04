// name: FUN_1001b0cb9
// address: 1001b0cb9

void FUN_1001b0cb9(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  
  FUN_1001e9de0(&DAT_1008c5200);
  lVar1 = DAT_1008c5258;
  *(undefined4 *)(DAT_1008c5258 + 0x58) = 0;
  FUN_1001b0458(lVar1,0);
  dVar4 = *(double *)(lVar1 + 0x48);
  if ((dVar4 == 0.0) && (!NAN(dVar4))) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069fd4a(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    dVar4 = *(double *)(lVar1 + 0x48);
  }
  if (((dVar4 != DAT_100700af8) || (NAN(dVar4) || NAN(DAT_100700af8))) &&
     ((dVar4 < DAT_1008c52d0 ||
      ((DAT_1008c52d0 == DAT_100700af8 && (!NAN(DAT_1008c52d0) && !NAN(DAT_100700af8))))))) {
    DAT_1008c52d0 = dVar4;
  }
  FUN_1001b0eaf(param_1);
  FUN_1001e9eb9(&DAT_1008c5200);
  return;
}

