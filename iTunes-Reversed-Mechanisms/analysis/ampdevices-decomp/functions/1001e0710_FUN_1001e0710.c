// name: FUN_1001e0710
// address: 1001e0710

long FUN_1001e0710(char *param_1,long param_2,char *param_3,long param_4,ulong param_5)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  char cVar8;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bb137(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bb1ad(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_4 != 0) {
    cVar2 = *param_3;
    cVar4 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar4 = cVar2;
    }
    if ((param_5 & 1) == 0) {
      cVar4 = cVar2;
    }
    pcVar5 = param_1;
    if (param_2 != 0) {
      do {
        cVar2 = *pcVar5;
        cVar7 = cVar2 + -0x20;
        if (0x19 < (byte)(cVar2 + 0x9fU)) {
          cVar7 = cVar2;
        }
        if ((param_5 & 1) == 0) {
          cVar7 = cVar2;
        }
        if (cVar7 == cVar4) {
          lVar6 = 1;
          do {
            cVar2 = (char)lVar6;
            if (((char)param_2 == cVar2) || ((char)param_4 == cVar2)) {
              if ((char)param_4 == cVar2) {
                return (long)(pcVar5 + 1) - (long)param_1;
              }
              break;
            }
            cVar2 = pcVar5[lVar6];
            cVar7 = cVar2 + -0x20;
            if (0x19 < (byte)(cVar2 + 0x9fU)) {
              cVar7 = cVar2;
            }
            cVar1 = param_3[lVar6];
            cVar8 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar8 = cVar1;
            }
            if ((param_5 & 1) == 0) {
              cVar8 = cVar1;
              cVar7 = cVar2;
            }
            lVar6 = lVar6 + 1;
          } while (cVar7 == cVar8);
        }
        param_2 = param_2 + -1;
        pcVar5 = pcVar5 + 1;
        if (param_2 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

