// name: FUN_1001f28d2
// address: 1001f28d2

ulong FUN_1001f28d2(long param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    pcVar7 = "<date>";
    uVar6 = 6;
  }
  else {
    pcVar7 = "<string>";
    uVar6 = 8;
  }
  uVar3 = (**(code **)(param_1 + 0x40))(param_1,pcVar7,uVar6,*(undefined8 *)(param_1 + 0x48));
  uVar5 = (ulong)uVar3;
  if (uVar3 != 0xffffff80) {
    if (uVar3 == 0) {
      pcVar1 = *(code **)(param_1 + 0x40);
      sVar4 = _strlen(param_2);
      uVar3 = (*pcVar1)(param_1,param_2,sVar4,*(undefined8 *)(param_1 + 0x48));
      uVar5 = (ulong)uVar3;
      if (uVar3 != 0xffffff80) {
        if (uVar3 == 0) {
          if (*(char *)(param_1 + 0x39) == '\0') {
            pcVar7 = "</date>\n";
            uVar6 = 8;
          }
          else {
            pcVar7 = "</string>\n";
            uVar6 = 10;
          }
                    /* WARNING: Could not recover jumptable at 0x0001001f29cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(param_1 + 0x40))
                            (param_1,pcVar7,uVar6,*(undefined8 *)(param_1 + 0x48));
          return uVar5;
        }
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          FUN_1006c650f(uVar5,uVar6);
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        FUN_1006c657b(uVar5,uVar6);
      }
    }
  }
  return uVar5;
}

