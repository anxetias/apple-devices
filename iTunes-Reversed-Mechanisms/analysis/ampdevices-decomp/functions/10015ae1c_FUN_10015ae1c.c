// name: FUN_10015ae1c
// address: 10015ae1c

uint FUN_10015ae1c(int *param_1,uint param_2,uint param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066b613(uVar3);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066b59d(uVar3);
      }
    }
    else {
      if (param_5 != (code *)0x0) {
        if (param_3 == 0x7fffffff) {
          param_3 = param_1[2];
        }
        FUN_10015a4db(param_1);
        uVar2 = 0;
        uVar4 = param_2;
        if (param_2 <= param_3) {
          do {
            param_2 = param_3 + uVar4 >> 1;
            uVar3 = FUN_10015a687(param_1,param_2);
            uVar2 = (*param_5)(uVar3,param_4,param_6);
            if (uVar2 == 0) goto LAB_10015af37;
            if ((int)uVar2 < 1) {
              uVar4 = param_2 + 1;
            }
            else {
              param_3 = param_2 - 1;
            }
          } while (uVar4 <= param_3);
          uVar2 = uVar2 >> 0x1f;
        }
        param_2 = param_2 + uVar2;
LAB_10015af37:
        FUN_10015a525(param_1);
        return param_2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066b527(uVar3);
      }
    }
    FUN_1001782e9(0,0);
    uVar4 = 0x7fffffff;
  }
  return uVar4;
}

