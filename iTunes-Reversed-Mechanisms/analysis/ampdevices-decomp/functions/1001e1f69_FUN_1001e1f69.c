// name: FUN_1001e1f69
// address: 1001e1f69

char * FUN_1001e1f69(char *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bbcbf(uVar4);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
LAB_1001e1fdc:
    pcVar5 = (char *)0x0;
    lVar7 = lVar6;
  }
  else if (param_2 == 0) {
    pcVar5 = param_1;
    lVar7 = 0;
  }
  else {
    lVar6 = 0;
    pcVar1 = param_1;
    do {
      pcVar3 = pcVar1 + 1;
      cVar2 = *pcVar1;
      if (cVar2 == '\0') goto LAB_1001e1fdc;
      pcVar5 = pcVar3;
      lVar7 = lVar6;
      if (cVar2 == '\n') break;
      if (cVar2 == '\r') {
        if (*pcVar3 == '\n') {
          pcVar5 = pcVar1 + 2;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      pcVar5 = param_1 + param_2;
      lVar7 = param_2;
      pcVar1 = pcVar3;
    } while (param_2 != lVar6);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar7;
  }
  return pcVar5;
}

