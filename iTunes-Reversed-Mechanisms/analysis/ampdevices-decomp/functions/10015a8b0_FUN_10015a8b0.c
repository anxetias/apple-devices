// name: FUN_10015a8b0
// address: 10015a8b0

void FUN_10015a8b0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066b115(uVar4);
    }
  }
  else {
    if (param_1[3] == 0) {
      uVar5 = param_3;
      if (param_3 == 0x7fffffff) {
        uVar5 = param_1[2];
      }
      if (uVar5 == 0) {
        return;
      }
      uVar1 = param_1[2];
      if (uVar1 < uVar5) {
        return;
      }
      iVar6 = (uVar1 - param_3) + 1;
      if (param_3 + param_2 <= uVar1) {
        iVar6 = param_2;
      }
      if (param_3 + iVar6 <= uVar1) {
        FUN_10015a4db(param_1);
        FUN_10015a9aa(param_1,param_3 + iVar6,param_1[2],-iVar6);
        FUN_10015a525(param_1);
      }
      iVar3 = FUN_10015aa00(param_1,-iVar6);
      if (iVar3 == 0) {
        return;
      }
      param_1[2] = param_1[2] - iVar6;
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066b09f(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

