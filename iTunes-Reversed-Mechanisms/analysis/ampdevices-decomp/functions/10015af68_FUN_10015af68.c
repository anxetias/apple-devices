// name: FUN_10015af68
// address: 10015af68

uint FUN_10015af68(int *param_1,int param_2,uint param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066b6ff(uVar4);
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1[3] < 1) {
      if (param_4 == 0 && (char)param_1[10] != '\0') {
        return 0;
      }
      if ((char)param_1[10] != '\0') {
        if (*(char *)((long)param_1 + 0x29) == '\0') {
          FUN_10015ab3b(param_1);
        }
        param_3 = FUN_10015ae1c(param_1,1,0x7fffffff,param_4,*(undefined8 *)(param_1 + 6),
                                *(undefined8 *)(param_1 + 8));
      }
      uVar5 = param_1[2];
      uVar1 = param_3 + (param_3 == 0);
      if (uVar5 < param_3) {
        uVar1 = uVar5 + 1;
      }
      iVar3 = FUN_10015aa00(param_1,param_2);
      if (iVar3 != 0) {
        return 0;
      }
      FUN_10015a4db(param_1);
      if ((uVar5 != 0) && (uVar1 <= uVar5)) {
        FUN_10015a9aa(param_1,uVar1,uVar5,param_2);
      }
      *(char *)((long)param_1 + 0x29) = (char)param_1[10];
      if ((param_4 != 0) && (uVar5 = uVar1, !CARRY4(param_2 - 1U,uVar1))) {
        do {
          FUN_10015ad9f(param_1,uVar5,param_4);
          uVar5 = uVar5 + 1;
        } while (uVar5 <= (param_2 - 1U) + uVar1);
      }
      FUN_10015a525(param_1);
      return uVar1;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066b689(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

