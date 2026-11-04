// name: FUN_10017cc65
// address: 10017cc65

int FUN_10017cc65(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (*(long **)(param_1 + 4) == (long *)0x0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100684ce2(uVar4);
    }
  }
  else if (param_4 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100684c6c(uVar4);
    }
  }
  else {
    if (**(long **)(param_1 + 4) != 0) {
      puVar3 = (undefined4 *)FUN_1001c6429(0x4f0);
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100684b80(uVar4);
        }
        puVar3 = (undefined4 *)0x0;
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        *puVar3 = 0x66726566;
        puVar3[1] = param_3;
        puVar3[2] = param_2;
        _memcpy(puVar3 + 6,param_1,0x420);
        LOCK();
        UNLOCK();
        iVar2 = DAT_10088f620 + 1;
        puVar3[0x10e] = DAT_10088f620;
        DAT_10088f620 = iVar2;
        iVar2 = (*(code *)**(undefined8 **)(param_1 + 4))(puVar3);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1001c64c1(puVar3);
          puVar3 = (undefined4 *)0x0;
        }
      }
      *param_4 = puVar3;
      return iVar2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100684bf6(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

