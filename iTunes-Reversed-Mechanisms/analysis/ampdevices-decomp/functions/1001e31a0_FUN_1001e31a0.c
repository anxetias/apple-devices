// name: FUN_1001e31a0
// address: 1001e31a0

undefined1 FUN_1001e31a0(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  
  local_2c = 0;
  local_21 = 0;
  local_28 = 0;
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc5fb(uVar3);
    }
  }
  else {
    iVar2 = _sscanf(param_1,"%u%c%u",&local_2c,&local_21,&local_28);
    if (iVar2 == 3) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = (undefined1)local_2c;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = local_21;
      }
      if (param_4 == (undefined2 *)0x0) {
        return 1;
      }
      *param_4 = (undefined2)local_28;
      return 1;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc585(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

