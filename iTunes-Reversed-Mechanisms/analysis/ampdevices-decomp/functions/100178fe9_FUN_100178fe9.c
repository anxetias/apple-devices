// name: FUN_100178fe9
// address: 100178fe9

double FUN_100178fe9(double param_1,ulong param_2)

{
  double dVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  double dVar7;
  double dVar8;
  undefined1 local_30 [16];
  double local_20;
  
  local_20 = param_1;
  if ((param_2 & 4) != 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006837fc(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if ((param_2 & 8) != 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_100683872(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001785f7();
  FUN_10015a0ac(local_30,&DAT_100890050);
  FUN_1001785f7();
  dVar8 = DAT_100700af8;
  if (DAT_100890030 != DAT_100890038) {
    FUN_1001785f7();
    plVar6 = DAT_100890030;
    FUN_1001785f7();
    dVar8 = DAT_100700af8;
    if (plVar6 != DAT_100890038) {
      bVar3 = false;
      dVar7 = 0.0;
      do {
        lVar2 = *plVar6;
        dVar1 = *(double *)(lVar2 + 0x38);
        if ((dVar1 != 0.0) || (NAN(dVar1))) {
          dVar8 = dVar1 - local_20;
          if (bVar3) {
            if (dVar8 <= dVar7) {
              dVar7 = dVar8;
            }
          }
          else {
            bVar3 = true;
            dVar7 = dVar8;
          }
        }
        if (((param_2 & 1) == 0) || (*(char *)(lVar2 + 0x40) == '\x01')) {
          dVar8 = 0.0;
          if ((param_2 & 2) == 0) {
            if ((dVar1 == 0.0) && (!NAN(dVar1))) goto LAB_100179144;
          }
          else if (((dVar1 == 0.0) && (!NAN(dVar1))) && (*(char *)(lVar2 + 0x41) != '\0'))
          goto LAB_100179144;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != DAT_100890038);
      dVar8 = DAT_100700af8;
      if ((bVar3) && (dVar8 = dVar7, dVar7 < 0.0)) {
        dVar8 = 0.0;
      }
    }
  }
LAB_100179144:
  local_20 = dVar8;
  FUN_10015a142(local_30);
  return local_20;
}

