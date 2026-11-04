// name: FUN_100184ef5
// address: 100184ef5

void FUN_100184ef5(long param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    if (param_2 != 0 && param_3 != ':') {
      uVar3 = 0;
      do {
        if (*(char *)(param_1 + uVar3) == ':') {
          *(char *)(param_1 + uVar3) = param_3;
        }
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10068b559(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

