// name: FUN_100191b9e
// address: 100191b9e

void FUN_100191b9e(undefined8 param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006945f4(uVar4);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    cVar2 = FUN_10017cc4a(uVar4);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_2 + 0x68);
      if (iVar1 == 3) {
        uVar3 = FUN_100191129(uVar4,*(undefined8 *)(param_2 + 0x70));
        local_20 = 0;
      }
      else if (iVar1 == 2) {
        if (*(long *)(param_2 + 0x70) == 0) {
          uVar3 = FUN_1001914f2(uVar4,*(undefined8 *)(param_2 + 0x78),
                                *(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0xa0),
                                &local_20);
        }
        else {
          uVar3 = FUN_100191615(uVar4);
        }
      }
      else {
        uVar3 = 0;
        if (iVar1 == 1) {
          if (*(long *)(param_2 + 0x70) == 0) {
            uVar3 = FUN_100191319(uVar4,*(undefined8 *)(param_2 + 0x78),
                                  *(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0xa0),
                                  &local_20);
          }
          else {
            uVar3 = FUN_100191404(uVar4);
          }
        }
      }
      FUN_100191d14(uVar3,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),local_20,
                    *(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98));
      FUN_1001c64c1(param_2);
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069457e(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

