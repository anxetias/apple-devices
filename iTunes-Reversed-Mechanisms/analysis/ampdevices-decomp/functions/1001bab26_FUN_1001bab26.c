// name: FUN_1001bab26
// address: 1001bab26

long FUN_1001bab26(ulong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_20 [8];
  
  if (*(char *)((long)param_1 + 0x21) == '\0') {
    uVar4 = *param_1;
    if (param_1[2] <= uVar4) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a2226(uVar3);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001babd7;
      uVar4 = *param_1;
    }
    if (uVar4 < param_1[1]) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a229c(uVar3);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001babd7;
    }
    uVar4 = *param_1;
    if ((char)param_1[3] == '\0') {
      uVar2 = FUN_1001b9463(uVar4,param_1[2] - uVar4,local_20);
    }
    else {
      uVar2 = FUN_1001b9349(uVar4,param_1[2],local_20);
    }
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    *(undefined1 *)(param_1 + 4) = local_20[0];
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
LAB_1001babd7:
  return (long)param_1 + 0x1c;
}

