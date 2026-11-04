// name: FUN_1001f3cf3
// address: 1001f3cf3

ulong FUN_1001f3cf3(int *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7f8b(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar5 = 0x10;
    if (uVar2 < 0x10) {
      uVar5 = uVar2;
    }
    uVar2 = (**(code **)(param_1 + 0x10))
                      (param_1,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",uVar5,
                       *(undefined8 *)(param_1 + 0x12));
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0xffffff80) {
      return 0xffffff80;
    }
    if (uVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') {
        return uVar3;
      }
      FUN_1006c7f1f(uVar3,uVar4);
      return uVar3;
    }
  }
  uVar3 = FUN_1001f2711(param_1,param_2,1);
  param_1[1] = param_1[1] + 1;
  return uVar3;
}

