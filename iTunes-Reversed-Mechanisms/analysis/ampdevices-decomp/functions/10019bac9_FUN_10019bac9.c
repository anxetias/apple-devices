// name: FUN_10019bac9
// address: 10019bac9

int FUN_10019bac9(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069928c(uVar4);
    }
  }
  else {
    plVar1 = (long *)*param_1;
    if (plVar1 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_100699216(uVar4);
      }
    }
    else {
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        return -0x27;
      }
      if (param_1[1] == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006991a0(uVar4);
        }
      }
      else {
        puVar5 = (undefined8 *)param_1[3];
        if (puVar5 != (undefined8 *)0x0) {
          if (param_1[2] < 1) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_100698edc(uVar4);
            }
            FUN_1001782e9(0,0);
            puVar5 = (undefined8 *)param_1[3];
            lVar6 = *plVar1;
          }
          *puVar5 = 0;
          cVar2 = FUN_10017311c(lVar6);
          if (cVar2 == '\0') {
            uVar4 = FUN_100173008(*plVar1);
            switch(uVar4) {
            case 0:
            case 1:
            case 6:
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_10069903e(uVar4);
              }
              FUN_1001782e9(0,0);
              return -0x1c;
            case 2:
            case 3:
              goto switchD_10019bc4e_caseD_5;
            default:
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_1006990b4(uVar4);
              }
              goto LAB_10019bc1c;
            case 5:
              return -0x27;
            case 7:
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_100698fc8(uVar4);
              }
              FUN_1001782e9(0,0);
              return -0x13;
            }
          }
          lVar6 = FUN_100173160(*plVar1,param_1[1] + *(long *)param_1[3],param_1[2]);
          if (lVar6 < 1) {
            if (lVar6 == 0) {
              return -0x27;
            }
            iVar3 = FUN_10019b6f4(*plVar1);
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_100698f52(uVar4);
            }
            FUN_1001782e9(0,0);
            return 0;
          }
          *(long *)param_1[3] = lVar6;
          plVar1[0x17] = plVar1[0x17] + lVar6;
switchD_10019bc4e_caseD_5:
          return 0;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10069912a(uVar4);
        }
      }
    }
  }
LAB_10019bc1c:
  FUN_1001782e9(0,0);
  return -0x32;
}

