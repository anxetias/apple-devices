// name: FUN_1001a27c9
// address: 1001a27c9

undefined1 FUN_1001a27c9(char *param_1,long param_2,int *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (param_1 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069c7d0(uVar5);
    }
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069c75a(uVar5);
    }
  }
  else if (param_3 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069c6e4(uVar5);
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      *param_3 = 0;
      *param_4 = 0;
      uVar4 = FUN_1001df897(param_2);
      pcVar7 = param_1;
      while( true ) {
        uVar2 = 0;
        pcVar9 = pcVar7;
        while( true ) {
          pcVar8 = pcVar9 + 1;
          cVar1 = *pcVar9;
          if (cVar1 == '\0') {
            return 0;
          }
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          uVar2 = uVar2 + 1;
          pcVar9 = pcVar8;
        }
        if ((uVar4 < uVar2) &&
           ((cVar1 = FUN_1001df8db(pcVar7,uVar4,param_2,uVar4,1), cVar1 != '\0' &&
            (pcVar7[uVar4] == ':')))) break;
        pcVar7 = pcVar9 + 2;
        if (*pcVar8 != '\n') {
          pcVar7 = pcVar8;
        }
      }
      iVar3 = (int)uVar4 + (int)pcVar7;
      iVar6 = (((int)uVar4 + 1) - (int)param_1) + (int)pcVar7;
      pcVar7 = pcVar7 + uVar4;
      while( true ) {
        iVar3 = iVar3 + 1;
        pcVar7 = pcVar7 + 1;
        if ((*pcVar7 != '\t') && (*pcVar7 != ' ')) break;
        iVar6 = iVar6 + 1;
      }
      do {
        pcVar7 = pcVar9 + 1;
        if (pcVar9[1] == '\n') {
          pcVar7 = pcVar9 + 2;
        }
        cVar1 = pcVar9[(ulong)(pcVar9[1] == '\n') + 1];
        if ((cVar1 != ' ') && (cVar1 != '\t')) {
          *param_3 = iVar6;
          *param_4 = (int)pcVar9 - iVar3;
          return 1;
        }
        while( true ) {
          if (cVar1 == '\0') {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_10069c5f8(uVar5);
            }
            goto LAB_1001a2908;
          }
          pcVar9 = pcVar7;
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
      } while( true );
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10069c66e(uVar5);
    }
  }
LAB_1001a2908:
  FUN_1001782e9(0,0);
  return 0;
}

