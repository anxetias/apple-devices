// name: FUN_10015a59c
// address: 10015a59c

ulong FUN_10015a59c(int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10066acef(uVar5);
    }
  }
  else {
    if ((char)param_1[10] != '\0') {
      uVar4 = FUN_10015af68(param_1,1,0,param_2);
      return uVar4;
    }
    if (param_1[3] < 1) {
      iVar1 = param_1[2];
      *(undefined1 *)((long)param_1 + 0x29) = 0;
      iVar3 = FUN_10015aa00(param_1,1);
      if (iVar3 != 0) {
        return 0;
      }
      FUN_10015a4db(param_1);
      FUN_10015ad9f(param_1,iVar1 + 1U,param_2);
      FUN_10015a525(param_1);
      return (ulong)(iVar1 + 1U);
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10066ac79(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

